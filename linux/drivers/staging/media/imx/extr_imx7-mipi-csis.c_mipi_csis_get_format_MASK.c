
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct csi_state {struct v4l2_mbus_framefmt format_mbus; int mipi_sd; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;


 int VAR_0 ;
 struct v4l2_mbus_framefmt* FUNC_0 (int *,struct v4l2_subdev_pad_config*,unsigned int) ;

__attribute__((used)) static struct v4l2_mbus_framefmt *
FUNC_1(struct csi_state *VAR_1,
       struct v4l2_subdev_pad_config *VAR_2,
       enum v4l2_subdev_format_whence VAR_3,
       unsigned int VAR_4)
{
 if (VAR_3 == VAR_0)
  return FUNC_0(&VAR_1->mipi_sd, VAR_2, VAR_4);

 return &VAR_1->format_mbus;
}
