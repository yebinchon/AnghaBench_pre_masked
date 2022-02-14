
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
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_5, void *VAR_6,
     struct v4l2_fmtdesc *VAR_7)
{
 switch (VAR_7->index) {
 case 0:
  VAR_7->pixelformat = VAR_1;
  break;
 case 1:
  VAR_7->pixelformat = VAR_2;
  break;
 case 2:
  VAR_7->pixelformat = VAR_3;
  break;
 case 3:
  VAR_7->pixelformat = VAR_4;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
