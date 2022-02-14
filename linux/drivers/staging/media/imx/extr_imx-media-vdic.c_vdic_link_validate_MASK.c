
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdic_priv {scalar_t__ motion; int lock; int sd; scalar_t__ csi_direct; } ;
struct v4l2_subdev_format {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct media_link {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 struct vdic_priv* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*,struct media_link*,struct v4l2_subdev_format*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2,
         struct media_link *VAR_3,
         struct v4l2_subdev_format *VAR_4,
         struct v4l2_subdev_format *VAR_5)
{
 struct vdic_priv *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_4(VAR_2, VAR_3,
      VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_0(&VAR_6->lock);

 if (VAR_6->csi_direct && VAR_6->motion != VAR_1) {
  FUNC_2(&VAR_6->sd,
    "direct CSI pipeline requires high motion\n");
  VAR_7 = -VAR_0;
 }

 FUNC_1(&VAR_6->lock);
 return VAR_7;
}
