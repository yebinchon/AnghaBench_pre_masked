
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {unsigned int width; unsigned int height; int top; int left; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

int FUNC_0(unsigned VAR_5, struct v4l2_rect *VAR_6)
{
 unsigned VAR_7 = VAR_6->width;
 unsigned VAR_8 = VAR_6->height;


 VAR_7 &= 0xffff;
 VAR_8 &= 0xffff;
 if (!(VAR_5 & VAR_4)) {
  VAR_7++;
  VAR_8++;
  if (VAR_7 < 2)
   VAR_7 = 2;
  if (VAR_8 < 2)
   VAR_8 = 2;
 }
 if (!(VAR_5 & VAR_3)) {
  if (VAR_7 > VAR_2)
   VAR_7 = VAR_2;
  if (VAR_8 > VAR_1)
   VAR_8 = VAR_1;
 }
 VAR_7 = VAR_7 & ~1;
 VAR_8 = VAR_8 & ~1;
 if (VAR_7 < 2 || VAR_8 < 2)
  return -VAR_0;
 if (VAR_7 > VAR_2 || VAR_8 > VAR_1)
  return -VAR_0;
 if (VAR_6->top < 0)
  VAR_6->top = 0;
 if (VAR_6->left < 0)
  VAR_6->left = 0;

 VAR_6->left &= 0xfffe;
 VAR_6->top &= 0xfffe;
 if (VAR_6->left + VAR_7 > VAR_2)
  VAR_6->left = VAR_2 - VAR_7;
 if (VAR_6->top + VAR_8 > VAR_1)
  VAR_6->top = VAR_1 - VAR_8;
 if ((VAR_5 & (VAR_3 | VAR_4)) ==
   (VAR_3 | VAR_4) &&
     (VAR_6->width != VAR_7 || VAR_6->height != VAR_8))
  return -VAR_0;
 VAR_6->width = VAR_7;
 VAR_6->height = VAR_8;
 return 0;
}
