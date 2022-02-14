
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifsInodeInfo {scalar_t__ oplock; int vfs_inode; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int *) ;

__attribute__((used)) static void
FUNC_1(struct cifsInodeInfo *VAR_8, __u32 VAR_9,
        unsigned int VAR_10, bool *VAR_11)
{
 VAR_9 &= 0xFF;
 if (VAR_9 == VAR_7)
  return;
 if (VAR_9 == VAR_4) {
  VAR_8->oplock = VAR_1;
  FUNC_0(VAR_3, "Batch Oplock granted on inode %p\n",
    &VAR_8->vfs_inode);
 } else if (VAR_9 == VAR_5) {
  VAR_8->oplock = VAR_2;
  FUNC_0(VAR_3, "Exclusive Oplock granted on inode %p\n",
    &VAR_8->vfs_inode);
 } else if (VAR_9 == VAR_6) {
  VAR_8->oplock = VAR_0;
  FUNC_0(VAR_3, "Level II Oplock granted on inode %p\n",
    &VAR_8->vfs_inode);
 } else
  VAR_8->oplock = 0;
}
