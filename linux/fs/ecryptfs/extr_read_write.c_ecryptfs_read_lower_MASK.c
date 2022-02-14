
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {struct file* lower_file; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,char*,size_t,int *) ;

int FUNC_2(char *VAR_1, loff_t VAR_2, size_t VAR_3,
   struct inode *VAR_4)
{
 struct file *VAR_5;
 VAR_5 = FUNC_0(VAR_4)->lower_file;
 if (!VAR_5)
  return -VAR_0;
 return FUNC_1(VAR_5, VAR_1, VAR_3, &VAR_2);
}
