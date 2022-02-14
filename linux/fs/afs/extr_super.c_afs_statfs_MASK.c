
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kstatfs {int f_blocks; int f_bavail; int f_bfree; scalar_t__ f_namelen; int f_bsize; int f_type; } ;
struct key {int dummy; } ;
struct dentry {TYPE_2__* d_sb; } ;
struct afs_volume_status {scalar_t__ max_quota; int part_max_blocks; int blocks_in_use; } ;
struct afs_vnode {TYPE_1__* volume; } ;
struct afs_super_info {scalar_t__ dyn_root; } ;
struct afs_fs_cursor {int vnode; int cb_break; int flags; } ;
struct TYPE_4__ {int s_magic; } ;
struct TYPE_3__ {int cell; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct afs_vnode* FUNC_0 (int ) ;
 struct afs_super_info* FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct key*) ;
 int FUNC_3 (struct key*) ;
 scalar_t__ FUNC_4 (struct afs_fs_cursor*,struct afs_vnode*,struct key*,int) ;
 int FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (struct afs_fs_cursor*,int ) ;
 int FUNC_7 (struct afs_fs_cursor*) ;
 int FUNC_8 (struct afs_fs_cursor*,struct afs_volume_status*) ;
 struct key* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct afs_fs_cursor*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct key*) ;

__attribute__((used)) static int FUNC_13(struct dentry *VAR_4, struct kstatfs *VAR_5)
{
 struct afs_super_info *VAR_6 = FUNC_1(VAR_4->d_sb);
 struct afs_fs_cursor VAR_7;
 struct afs_volume_status VAR_8;
 struct afs_vnode *VAR_9 = FUNC_0(FUNC_11(VAR_4));
 struct key *VAR_10;
 int VAR_11;

 VAR_5->f_type = VAR_4->d_sb->s_magic;
 VAR_5->f_bsize = VAR_1;
 VAR_5->f_namelen = VAR_0 - 1;

 if (VAR_6->dyn_root) {
  VAR_5->f_blocks = 1;
  VAR_5->f_bavail = 0;
  VAR_5->f_bfree = 0;
  return 0;
 }

 VAR_10 = FUNC_9(VAR_9->volume->cell);
 if (FUNC_2(VAR_10))
  return FUNC_3(VAR_10);

 VAR_11 = -VAR_3;
 if (FUNC_4(&VAR_7, VAR_9, VAR_10, 1)) {
  VAR_7.flags |= VAR_2;
  while (FUNC_10(&VAR_7)) {
   VAR_7.cb_break = FUNC_5(VAR_9);
   FUNC_8(&VAR_7, &VAR_8);
  }

  FUNC_6(&VAR_7, VAR_7.vnode);
  VAR_11 = FUNC_7(&VAR_7);
 }

 FUNC_12(VAR_10);

 if (VAR_11 == 0) {
  if (VAR_8.max_quota == 0)
   VAR_5->f_blocks = VAR_8.part_max_blocks;
  else
   VAR_5->f_blocks = VAR_8.max_quota;
  VAR_5->f_bavail = VAR_5->f_bfree = VAR_5->f_blocks - VAR_8.blocks_in_use;
 }

 return VAR_11;
}
