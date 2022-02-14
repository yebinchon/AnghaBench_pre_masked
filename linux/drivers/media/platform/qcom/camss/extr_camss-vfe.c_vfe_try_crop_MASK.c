
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_line {int dummy; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_rect {scalar_t__ width; scalar_t__ left; scalar_t__ height; scalar_t__ top; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;


 struct v4l2_rect* FUNC_0 (struct vfe_line*,struct v4l2_subdev_pad_config*,int) ;

__attribute__((used)) static void FUNC_1(struct vfe_line *VAR_0,
    struct v4l2_subdev_pad_config *VAR_1,
    struct v4l2_rect *VAR_2,
    enum v4l2_subdev_format_whence VAR_3)
{
 struct v4l2_rect *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);

 if (VAR_2->width > VAR_4->width)
  VAR_2->width = VAR_4->width;

 if (VAR_2->width + VAR_2->left > VAR_4->width)
  VAR_2->left = VAR_4->width - VAR_2->width;

 if (VAR_2->height > VAR_4->height)
  VAR_2->height = VAR_4->height;

 if (VAR_2->height + VAR_2->top > VAR_4->height)
  VAR_2->top = VAR_4->height - VAR_2->height;


 VAR_2->left += (VAR_2->width & 0xf) >> 1;
 VAR_2->width &= ~0xf;

 if (VAR_2->width < 16) {
  VAR_2->left = 0;
  VAR_2->width = 16;
 }

 if (VAR_2->height < 4) {
  VAR_2->top = 0;
  VAR_2->height = 4;
 }
}
