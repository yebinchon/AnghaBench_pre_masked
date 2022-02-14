
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct m5mols_info {struct v4l2_mbus_framefmt* ffmt; int sd; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;
typedef enum m5mols_restype { ____Placeholder_m5mols_restype } m5mols_restype ;


 int VAR_0 ;
 struct v4l2_mbus_framefmt* FUNC_0 (int *,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static struct v4l2_mbus_framefmt *FUNC_1(struct m5mols_info *VAR_1,
    struct v4l2_subdev_pad_config *VAR_2,
    enum v4l2_subdev_format_whence VAR_3,
    enum m5mols_restype VAR_4)
{
 if (VAR_3 == VAR_0)
  return VAR_2 ? FUNC_0(&VAR_1->sd, VAR_2, 0) : ((void*)0);

 return &VAR_1->ffmt[VAR_4];
}
