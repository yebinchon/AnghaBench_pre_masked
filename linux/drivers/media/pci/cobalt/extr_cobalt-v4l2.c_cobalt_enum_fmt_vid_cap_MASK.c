
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int index; int pixelformat; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_4, void *VAR_5,
  struct v4l2_fmtdesc *VAR_6)
{
 switch (VAR_6->index) {
 case 0:
  VAR_6->pixelformat = VAR_3;
  break;
 case 1:
  VAR_6->pixelformat = VAR_2;
  break;
 case 2:
  VAR_6->pixelformat = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
