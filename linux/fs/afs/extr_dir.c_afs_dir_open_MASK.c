
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union afs_xdr_dirent {int dummy; } afs_xdr_dirent ;
typedef union afs_xdr_dir_block {int dummy; } afs_xdr_dir_block ;
struct inode {int i_ino; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct inode*,struct file*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 FUNC_2("{%lu}", VAR_2->i_ino);

 FUNC_1(sizeof(union afs_xdr_dir_block) != 2048);
 FUNC_1(sizeof(union afs_xdr_dirent) != 32);

 if (FUNC_4(VAR_0, &FUNC_0(VAR_2)->flags))
  return -VAR_1;

 return FUNC_3(VAR_2, VAR_3);
}
