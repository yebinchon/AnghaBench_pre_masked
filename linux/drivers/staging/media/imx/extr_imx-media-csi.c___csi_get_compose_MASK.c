
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_rect {int dummy; } ;
struct csi_priv {struct v4l2_rect compose; int sd; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_rect* FUNC_0 (int *,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static struct v4l2_rect *
FUNC_1(struct csi_priv *VAR_2, struct v4l2_subdev_pad_config *VAR_3,
    enum v4l2_subdev_format_whence VAR_4)
{
 if (VAR_4 == VAR_1)
  return FUNC_0(&VAR_2->sd, VAR_3,
         VAR_0);
 else
  return &VAR_2->compose;
}
