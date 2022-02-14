
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {struct file* lower_file; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,char*,size_t,int *) ;
 int FUNC_2 (struct inode*) ;

int FUNC_3(struct inode *VAR_1, char *VAR_2,
    loff_t VAR_3, size_t VAR_4)
{
 struct file *VAR_5;
 ssize_t VAR_6;

 VAR_5 = FUNC_0(VAR_1)->lower_file;
 if (!VAR_5)
  return -VAR_0;
 VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_4, &VAR_3);
 FUNC_2(VAR_1);
 return VAR_6;
}
