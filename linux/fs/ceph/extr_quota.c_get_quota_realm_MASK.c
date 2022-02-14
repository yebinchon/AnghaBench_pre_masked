
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ceph_snap_realm {int inode; struct ceph_snap_realm* parent; int inodes_with_caps_lock; } ;
struct ceph_mds_client {int snap_rwsem; } ;
struct ceph_inode_info {struct ceph_snap_realm* i_snap_realm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ceph_snap_realm* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ceph_inode_info*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct ceph_mds_client*,struct ceph_snap_realm*) ;
 struct ceph_inode_info* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct ceph_mds_client*,struct ceph_snap_realm*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 struct inode* FUNC_10 (int) ;
 struct inode* FUNC_11 (struct ceph_mds_client*,int ,struct ceph_snap_realm*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static struct ceph_snap_realm *FUNC_16(struct ceph_mds_client *VAR_2,
            struct inode *VAR_3, bool VAR_4)
{
 struct ceph_inode_info *VAR_5 = ((void*)0);
 struct ceph_snap_realm *VAR_6, *VAR_7;
 struct inode *VAR_8;
 bool VAR_9;

 if (FUNC_7(VAR_3) != VAR_0)
  return ((void*)0);

restart:
 VAR_6 = FUNC_5(VAR_3)->i_snap_realm;
 if (VAR_6)
  FUNC_4(VAR_2, VAR_6);
 else
  FUNC_12("get_quota_realm: ino (%llx.%llx) "
       "null i_snap_realm\n", FUNC_8(VAR_3));
 while (VAR_6) {
  bool VAR_10;

  FUNC_13(&VAR_6->inodes_with_caps_lock);
  VAR_10 = VAR_6->inode;
  VAR_8 = VAR_10 ? FUNC_10(VAR_6->inode) : ((void*)0);
  FUNC_14(&VAR_6->inodes_with_caps_lock);
  if (VAR_10 && !VAR_8)
   break;
  if (!VAR_8) {
   FUNC_15(&VAR_2->snap_rwsem);
   VAR_8 = FUNC_11(VAR_2, VAR_3->i_sb, VAR_6);
   FUNC_9(&VAR_2->snap_rwsem);
   if (FUNC_1(VAR_8))
    break;
   FUNC_6(VAR_2, VAR_6);
   if (!VAR_4)
    return FUNC_0(-VAR_1);
   goto restart;
  }

  VAR_5 = FUNC_5(VAR_8);
  VAR_9 = FUNC_2(VAR_5);

  FUNC_3(VAR_8);

  VAR_7 = VAR_6->parent;
  if (VAR_9 || !VAR_7)
         return VAR_6;

  FUNC_4(VAR_2, VAR_7);
  FUNC_6(VAR_2, VAR_6);
  VAR_6 = VAR_7;
 }
 if (VAR_6)
  FUNC_6(VAR_2, VAR_6);

 return ((void*)0);
}
