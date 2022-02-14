
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int index; int pixelformat; scalar_t__ flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4,
    struct v4l2_fmtdesc *VAR_5)
{
 if (VAR_5->index > 1)
  return -VAR_0;

 if (VAR_5->index == 0) {

  VAR_5->flags = 0;
  VAR_5->pixelformat = VAR_2;
 } else {

  VAR_5->pixelformat = VAR_1;
 }

 return 0;
}
