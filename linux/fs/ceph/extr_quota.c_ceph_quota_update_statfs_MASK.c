
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kstatfs {int f_blocks; int f_bfree; int f_bavail; } ;
struct inode {int dummy; } ;
struct ceph_snap_realm {int inodes_with_caps_lock; scalar_t__ inode; } ;
struct ceph_mds_client {int snap_rwsem; } ;
struct ceph_inode_info {int i_max_bytes; int i_rbytes; int i_ceph_lock; } ;
struct ceph_fs_client {TYPE_1__* sb; struct ceph_mds_client* mdsc; } ;
struct TYPE_2__ {int s_root; } ;


 int VAR_0 ;
 struct ceph_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct ceph_mds_client*,struct ceph_snap_realm*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct ceph_snap_realm* FUNC_4 (struct ceph_mds_client*,int ,int) ;
 struct inode* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

bool FUNC_10(struct ceph_fs_client *VAR_1, struct kstatfs *VAR_2)
{
 struct ceph_mds_client *VAR_3 = VAR_1->mdsc;
 struct ceph_inode_info *VAR_4;
 struct ceph_snap_realm *VAR_5;
 struct inode *VAR_6;
 u64 VAR_7 = 0, VAR_8, VAR_9;
 bool VAR_10 = 0;

 FUNC_3(&VAR_3->snap_rwsem);
 VAR_5 = FUNC_4(VAR_3, FUNC_2(VAR_1->sb->s_root), 1);
 FUNC_9(&VAR_3->snap_rwsem);
 if (!VAR_5)
  return 0;

 FUNC_7(&VAR_5->inodes_with_caps_lock);
 VAR_6 = VAR_5->inode ? FUNC_5(VAR_5->inode) : ((void*)0);
 FUNC_8(&VAR_5->inodes_with_caps_lock);
 if (VAR_6) {
  VAR_4 = FUNC_0(VAR_6);
  FUNC_7(&VAR_4->i_ceph_lock);
  if (VAR_4->i_max_bytes) {
   VAR_7 = VAR_4->i_max_bytes >> VAR_0;
   VAR_8 = VAR_4->i_rbytes >> VAR_0;



   VAR_9 = VAR_7 > VAR_8 ? VAR_7 - VAR_8 : 0;
  }
  FUNC_8(&VAR_4->i_ceph_lock);
  if (VAR_7) {
   VAR_2->f_blocks = VAR_7;
   VAR_2->f_bfree = VAR_9;
   VAR_2->f_bavail = VAR_9;
   VAR_10 = 1;
  }
  FUNC_6(VAR_6);
 }
 FUNC_1(VAR_3, VAR_5);

 return VAR_10;
}
