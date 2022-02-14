
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct file*,int ,int) ;
 int FUNC_1 (struct file*,int ,int) ;
 int FUNC_2 (struct inode*,struct file*) ;

loff_t FUNC_3(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 FUNC_0("NFS: llseek file(%pD2, %lld, %d)\n",
   VAR_2, VAR_3, VAR_4);





 if (VAR_4 != VAR_1 && VAR_4 != VAR_0) {
  struct inode *VAR_5 = VAR_2->f_mapping->host;

  int VAR_6 = FUNC_2(VAR_5, VAR_2);
  if (VAR_6 < 0)
   return (loff_t)VAR_6;
 }

 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
