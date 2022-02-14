
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct file*,int) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, loff_t VAR_3, loff_t VAR_4,
    int VAR_5)
{
 struct inode *VAR_6 = FUNC_1(VAR_2);

 FUNC_0(VAR_0, "NFS: fsync dir(%pD2) datasync %d\n", VAR_2, VAR_5);

 FUNC_2(VAR_6);
 FUNC_4(VAR_6, VAR_1);
 FUNC_3(VAR_6);
 return 0;
}
