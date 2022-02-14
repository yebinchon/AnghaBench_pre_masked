
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int pixelformat; int flags; int type; int description; scalar_t__ index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
       struct v4l2_fmtdesc *VAR_6)
{
 if (VAR_6->index)
  return -VAR_0;

 FUNC_0(VAR_6->description, "MPEG");
 VAR_6->type = VAR_1;
 VAR_6->flags = VAR_2;
 VAR_6->pixelformat = VAR_3;

 return 0;
}
