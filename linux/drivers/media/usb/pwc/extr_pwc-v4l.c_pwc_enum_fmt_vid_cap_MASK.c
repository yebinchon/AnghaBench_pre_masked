
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int index; int pixelformat; } ;
struct pwc_device {int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pwc_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5, struct v4l2_fmtdesc *VAR_6)
{
 struct pwc_device *VAR_7 = FUNC_0(VAR_4);


 switch (VAR_6->index) {
 case 0:

  VAR_6->pixelformat = VAR_7->type <= 646 ? VAR_1 : VAR_2;
  break;
 case 1:
  VAR_6->pixelformat = VAR_3;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
