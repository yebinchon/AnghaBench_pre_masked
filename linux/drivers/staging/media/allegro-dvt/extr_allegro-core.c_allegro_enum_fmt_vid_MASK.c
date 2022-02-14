
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int type; int pixelformat; scalar_t__ index; } ;
struct file {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4,
    struct v4l2_fmtdesc *VAR_5)
{
 if (VAR_5->index)
  return -VAR_0;
 switch (VAR_5->type) {
 case 128:
  VAR_5->pixelformat = VAR_2;
  break;
 case 129:
  VAR_5->pixelformat = VAR_1;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
