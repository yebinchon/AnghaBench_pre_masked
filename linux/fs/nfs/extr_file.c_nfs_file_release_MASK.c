
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*,int ) ;

int
FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 FUNC_0("NFS: release(%pD2)\n", VAR_2);

 FUNC_2(VAR_1, VAR_0);
 FUNC_1(VAR_2);
 return 0;
}
