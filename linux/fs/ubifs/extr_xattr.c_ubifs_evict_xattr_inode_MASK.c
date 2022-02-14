
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int vfs_sb; } ;
struct inode {int dummy; } ;
typedef int ino_t ;


 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct inode*) ;

void FUNC_3(struct ubifs_info *VAR_0, ino_t VAR_1)
{
 struct inode *VAR_2;

 VAR_2 = FUNC_1(VAR_0->vfs_sb, VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_2);
  FUNC_2(VAR_2);
 }
}
