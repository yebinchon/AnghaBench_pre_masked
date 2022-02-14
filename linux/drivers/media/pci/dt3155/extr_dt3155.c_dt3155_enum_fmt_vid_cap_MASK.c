
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int pixelformat; scalar_t__ index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2,
       void *VAR_3, struct v4l2_fmtdesc *VAR_4)
{
 if (VAR_4->index)
  return -VAR_0;
 VAR_4->pixelformat = VAR_1;
 return 0;
}
