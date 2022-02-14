
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {scalar_t__ left; scalar_t__ top; scalar_t__ width; scalar_t__ height; } ;



__attribute__((used)) static int FUNC_0(struct v4l2_rect *VAR_0, struct v4l2_rect *VAR_1)
{
 if (VAR_0->left < VAR_1->left || VAR_0->top < VAR_1->top)
  return 0;
 if (VAR_0->left + VAR_0->width > VAR_1->left + VAR_1->width)
  return 0;
 if (VAR_0->top + VAR_0->height > VAR_1->top + VAR_1->height)
  return 0;

 return 1;
}
