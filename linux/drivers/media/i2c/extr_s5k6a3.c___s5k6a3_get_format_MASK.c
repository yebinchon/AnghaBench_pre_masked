
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct s5k6a3 {struct v4l2_mbus_framefmt format; int subdev; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;


 int VAR_0 ;
 struct v4l2_mbus_framefmt* FUNC_0 (int *,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static struct v4l2_mbus_framefmt *FUNC_1(
  struct s5k6a3 *VAR_1, struct v4l2_subdev_pad_config *VAR_2,
  u32 VAR_3, enum v4l2_subdev_format_whence VAR_4)
{
 if (VAR_4 == VAR_0)
  return VAR_2 ? FUNC_0(&VAR_1->subdev, VAR_2, VAR_3) : ((void*)0);

 return &VAR_1->format;
}
