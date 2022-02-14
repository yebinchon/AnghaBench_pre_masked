
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int height; int width; int top; int left; } ;
struct v4l2_subdev_selection {int pad; int target; int flags; int which; struct v4l2_rect r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;
struct v4l2_fwnode_endpoint {int bus_type; } ;
struct csi_priv {scalar_t__ stream_count; int lock; struct v4l2_rect compose; struct v4l2_rect crop; int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 struct v4l2_rect* FUNC_0 (struct csi_priv*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_rect* FUNC_1 (struct csi_priv*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_2 (struct csi_priv*,struct v4l2_subdev_pad_config*,int,int ) ;
 int FUNC_3 (struct csi_priv*,struct v4l2_fwnode_endpoint*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct csi_priv*,struct v4l2_rect*,struct v4l2_subdev_pad_config*,struct v4l2_mbus_framefmt*,struct v4l2_fwnode_endpoint*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 struct csi_priv* FUNC_9 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_6,
        struct v4l2_subdev_pad_config *VAR_7,
        struct v4l2_subdev_selection *VAR_8)
{
 struct csi_priv *VAR_9 = FUNC_9(VAR_6);
 struct v4l2_fwnode_endpoint VAR_10 = { .bus_type = 0 };
 struct v4l2_mbus_framefmt *VAR_11;
 struct v4l2_rect *VAR_12, *VAR_13;
 int VAR_14, VAR_15;

 if (VAR_8->pad != VAR_1)
  return -VAR_3;

 VAR_15 = FUNC_3(VAR_9, &VAR_10);
 if (VAR_15) {
  FUNC_8(&VAR_9->sd, "failed to find upstream endpoint\n");
  return VAR_15;
 }

 FUNC_6(&VAR_9->lock);

 if (VAR_9->stream_count > 0) {
  VAR_15 = -VAR_2;
  goto out;
 }

 VAR_11 = FUNC_2(VAR_9, VAR_7, VAR_1, VAR_8->which);
 VAR_12 = FUNC_1(VAR_9, VAR_7, VAR_8->which);
 VAR_13 = FUNC_0(VAR_9, VAR_7, VAR_8->which);

 switch (VAR_8->target) {
 case 128:





  if (VAR_8->flags & VAR_4) {
   VAR_8->r = VAR_9->crop;
   if (VAR_8->which == VAR_5)
    *VAR_12 = VAR_8->r;
   goto out;
  }

  FUNC_5(VAR_9, &VAR_8->r, VAR_7, VAR_11, &VAR_10);

  *VAR_12 = VAR_8->r;


  VAR_13->width = VAR_12->width;
  VAR_13->height = VAR_12->height;
  break;
 case 129:





  if (VAR_8->flags & VAR_4) {
   VAR_8->r = VAR_9->compose;
   if (VAR_8->which == VAR_5)
    *VAR_13 = VAR_8->r;
   goto out;
  }

  VAR_8->r.left = 0;
  VAR_8->r.top = 0;
  VAR_15 = FUNC_4(&VAR_8->r.width, VAR_12->width, VAR_8->flags);
  if (VAR_15)
   goto out;
  VAR_15 = FUNC_4(&VAR_8->r.height, VAR_12->height, VAR_8->flags);
  if (VAR_15)
   goto out;

  *VAR_13 = VAR_8->r;
  break;
 default:
  VAR_15 = -VAR_3;
  goto out;
 }


 for (VAR_14 = VAR_1 + 1; VAR_14 < VAR_0; VAR_14++) {
  struct v4l2_mbus_framefmt *VAR_16;

  VAR_16 = FUNC_2(VAR_9, VAR_7, VAR_14, VAR_8->which);
  VAR_16->width = VAR_13->width;
  VAR_16->height = VAR_13->height;
 }

out:
 FUNC_7(&VAR_9->lock);
 return VAR_15;
}
