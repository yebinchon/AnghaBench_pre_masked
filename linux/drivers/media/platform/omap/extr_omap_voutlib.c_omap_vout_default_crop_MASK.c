
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int width; int height; int left; int top; } ;
struct v4l2_pix_format {int width; int height; } ;
struct TYPE_2__ {int width; int height; } ;
struct v4l2_framebuffer {TYPE_1__ fmt; } ;



void FUNC_0(struct v4l2_pix_format *VAR_0,
    struct v4l2_framebuffer *VAR_1, struct v4l2_rect *VAR_2)
{
 VAR_2->width = (VAR_0->width < VAR_1->fmt.width) ?
  VAR_0->width : VAR_1->fmt.width;
 VAR_2->height = (VAR_0->height < VAR_1->fmt.height) ?
  VAR_0->height : VAR_1->fmt.height;
 VAR_2->width &= ~1;
 VAR_2->height &= ~1;
 VAR_2->left = ((VAR_0->width - VAR_2->width) >> 1) & ~1;
 VAR_2->top = ((VAR_0->height - VAR_2->height) >> 1) & ~1;
}
