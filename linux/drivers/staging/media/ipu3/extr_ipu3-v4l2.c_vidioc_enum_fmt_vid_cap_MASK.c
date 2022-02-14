
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {scalar_t__ type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_fmtdesc*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
       struct v4l2_fmtdesc *VAR_5)
{
 if (VAR_5->type != VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_2);
}
