
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_sb_info {int mnt_cifs_flags; } ;
struct TYPE_2__ {int i_sb; } ;
struct cifsInodeInfo {TYPE_1__ vfs_inode; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 struct cifs_sb_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct cifsInodeInfo*) ;

bool FUNC_3(struct cifsInodeInfo *VAR_1, __u64 VAR_2)
{
 if (!VAR_1)
  return 1;

 if (FUNC_2(VAR_1)) {

  struct cifs_sb_info *VAR_3;

  VAR_3 = FUNC_0(VAR_1->vfs_inode.i_sb);
  if (VAR_3->mnt_cifs_flags & VAR_0) {


   return 1;
  }

  if (FUNC_1(&VAR_1->vfs_inode) < VAR_2)
   return 1;

  return 0;
 } else
  return 1;
}
