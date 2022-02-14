
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int left; int height; int width; int top; } ;
struct TYPE_2__ {int left; int top; int width; int height; } ;
struct v4l2_clip {TYPE_1__ c; } ;



int
FUNC_0(int VAR_0, int VAR_1, struct v4l2_rect *VAR_2,
    struct v4l2_clip *VAR_3, unsigned int VAR_4)
{
 if (VAR_2->left < 0) {

  VAR_3[VAR_4].c.left = 0;
  VAR_3[VAR_4].c.top = 0;
  VAR_3[VAR_4].c.width = -VAR_2->left;
  VAR_3[VAR_4].c.height = VAR_2->height;
  VAR_4++;
 }
 if (VAR_2->left + VAR_2->width > VAR_0) {

  VAR_3[VAR_4].c.left = VAR_0 - VAR_2->left;
  VAR_3[VAR_4].c.top = 0;
  VAR_3[VAR_4].c.width = VAR_2->width - VAR_3[VAR_4].c.left;
  VAR_3[VAR_4].c.height = VAR_2->height;
  VAR_4++;
 }
 if (VAR_2->top < 0) {

  VAR_3[VAR_4].c.left = 0;
  VAR_3[VAR_4].c.top = 0;
  VAR_3[VAR_4].c.width = VAR_2->width;
  VAR_3[VAR_4].c.height = -VAR_2->top;
  VAR_4++;
 }
 if (VAR_2->top + VAR_2->height > VAR_1) {

  VAR_3[VAR_4].c.left = 0;
  VAR_3[VAR_4].c.top = VAR_1 - VAR_2->top;
  VAR_3[VAR_4].c.width = VAR_2->width;
  VAR_3[VAR_4].c.height = VAR_2->height - VAR_3[VAR_4].c.top;
  VAR_4++;
 }
 return VAR_4;
}
