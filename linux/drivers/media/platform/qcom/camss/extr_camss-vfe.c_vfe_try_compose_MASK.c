
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_line {int dummy; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_rect {int width; int height; } ;
struct v4l2_mbus_framefmt {int width; int height; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct vfe_line*,struct v4l2_subdev_pad_config*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct vfe_line *VAR_2,
       struct v4l2_subdev_pad_config *VAR_3,
       struct v4l2_rect *VAR_4,
       enum v4l2_subdev_format_whence VAR_5)
{
 struct v4l2_mbus_framefmt *VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_0, VAR_5);

 if (VAR_4->width > VAR_6->width)
  VAR_4->width = VAR_6->width;

 if (VAR_4->height > VAR_6->height)
  VAR_4->height = VAR_6->height;

 if (VAR_6->width > VAR_4->width * VAR_1)
  VAR_4->width = (VAR_6->width + VAR_1 - 1) /
       VAR_1;

 VAR_4->width &= ~0x1;

 if (VAR_6->height > VAR_4->height * VAR_1)
  VAR_4->height = (VAR_6->height + VAR_1 - 1) /
       VAR_1;

 if (VAR_4->width < 16)
  VAR_4->width = 16;

 if (VAR_4->height < 4)
  VAR_4->height = 4;
}
