
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {scalar_t__ ro; struct file* filp; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,int) ;

int FUNC_1(struct fsg_lun *VAR_0)
{
 struct file *VAR_1 = VAR_0->filp;

 if (VAR_0->ro || !VAR_1)
  return 0;
 return FUNC_0(VAR_1, 1);
}
