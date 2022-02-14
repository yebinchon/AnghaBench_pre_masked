
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int pad; int index; int code; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct v4l2_fwnode_endpoint {int bus_type; } ;
struct imx_media_pixfmt {int cs; } ;
struct csi_priv {int lock; int sd; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct csi_priv*,struct v4l2_subdev_pad_config*,int,int ) ;
 int FUNC_1 (struct csi_priv*,struct v4l2_fwnode_endpoint*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int) ;
 struct imx_media_pixfmt* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct v4l2_fwnode_endpoint*,struct v4l2_mbus_framefmt*,struct imx_media_pixfmt const*) ;
 int FUNC_8 (int *,char*) ;
 struct csi_priv* FUNC_9 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_5,
         struct v4l2_subdev_pad_config *VAR_6,
         struct v4l2_subdev_mbus_code_enum *VAR_7)
{
 struct csi_priv *VAR_8 = FUNC_9(VAR_5);
 struct v4l2_fwnode_endpoint VAR_9 = { .bus_type = 0 };
 const struct imx_media_pixfmt *VAR_10;
 struct v4l2_mbus_framefmt *VAR_11;
 int VAR_12 = 0;

 FUNC_5(&VAR_8->lock);

 VAR_11 = FUNC_0(VAR_8, VAR_6, 130, VAR_7->which);
 VAR_10 = FUNC_4(VAR_11->code, VAR_0, 1);

 switch (VAR_7->pad) {
 case 130:
  VAR_12 = FUNC_3(&VAR_7->code, VAR_7->index,
       VAR_0, 1);
  break;
 case 129:
 case 128:
  VAR_12 = FUNC_1(VAR_8, &VAR_9);
  if (VAR_12) {
   FUNC_8(&VAR_8->sd, "failed to find upstream endpoint\n");
   goto out;
  }

  if (FUNC_7(&VAR_9, VAR_11, VAR_10)) {
   if (VAR_7->index != 0) {
    VAR_12 = -VAR_3;
    goto out;
   }
   VAR_7->code = VAR_11->code;
  } else {
   u32 VAR_13 = (VAR_10->cs == VAR_4) ?
    VAR_2 : VAR_1;
   VAR_12 = FUNC_2(&VAR_7->code,
       VAR_7->index,
       VAR_13);
  }
  break;
 default:
  VAR_12 = -VAR_3;
 }

out:
 FUNC_6(&VAR_8->lock);
 return VAR_12;
}
