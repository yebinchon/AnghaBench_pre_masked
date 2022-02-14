
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_sb; } ;
struct ceph_snap_realm {int inode; struct ceph_snap_realm* parent; int inodes_with_caps_lock; } ;
struct ceph_mds_client {int snap_rwsem; } ;
struct ceph_inode_info {int i_max_files; int i_rfiles; int i_rsubdirs; int i_max_bytes; int i_rbytes; int i_ceph_lock; struct ceph_snap_realm* i_snap_realm; } ;
typedef int loff_t ;
typedef enum quota_check_op { ____Placeholder_quota_check_op } quota_check_op ;
struct TYPE_2__ {struct ceph_mds_client* mdsc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;



 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ceph_mds_client*,struct ceph_snap_realm*) ;
 struct ceph_inode_info* FUNC_3 (struct inode*) ;
 TYPE_1__* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct ceph_mds_client*,struct ceph_snap_realm*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 struct inode* FUNC_9 (int) ;
 struct inode* FUNC_10 (struct ceph_mds_client*,int ,struct ceph_snap_realm*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static bool FUNC_16(struct inode *VAR_1, enum quota_check_op VAR_2,
     loff_t VAR_3)
{
 struct ceph_mds_client *VAR_4 = FUNC_4(VAR_1)->mdsc;
 struct ceph_inode_info *VAR_5;
 struct ceph_snap_realm *VAR_6, *VAR_7;
 struct inode *VAR_8;
 u64 VAR_9, VAR_10;
 bool VAR_11 = 0;

 if (FUNC_6(VAR_1) != VAR_0)
  return 0;

 FUNC_8(&VAR_4->snap_rwsem);
restart:
 VAR_6 = FUNC_3(VAR_1)->i_snap_realm;
 if (VAR_6)
  FUNC_2(VAR_4, VAR_6);
 else
  FUNC_11("check_quota_exceeded: ino (%llx.%llx) "
       "null i_snap_realm\n", FUNC_7(VAR_1));
 while (VAR_6) {
  bool VAR_12;

  FUNC_13(&VAR_6->inodes_with_caps_lock);
  VAR_12 = VAR_6->inode;
  VAR_8 = VAR_12 ? FUNC_9(VAR_6->inode) : ((void*)0);
  FUNC_14(&VAR_6->inodes_with_caps_lock);
  if (VAR_12 && !VAR_8)
   break;
  if (!VAR_8) {
   FUNC_15(&VAR_4->snap_rwsem);
   VAR_8 = FUNC_10(VAR_4, VAR_1->i_sb, VAR_6);
   FUNC_8(&VAR_4->snap_rwsem);
   if (FUNC_0(VAR_8))
    break;
   FUNC_5(VAR_4, VAR_6);
   goto restart;
  }
  VAR_5 = FUNC_3(VAR_8);
  FUNC_13(&VAR_5->i_ceph_lock);
  if (VAR_2 == 128) {
   VAR_9 = VAR_5->i_max_files;
   VAR_10 = VAR_5->i_rfiles + VAR_5->i_rsubdirs;
  } else {
   VAR_9 = VAR_5->i_max_bytes;
   VAR_10 = VAR_5->i_rbytes;
  }
  FUNC_14(&VAR_5->i_ceph_lock);
  switch (VAR_2) {
  case 128:
   VAR_11 = (VAR_9 && (VAR_10 >= VAR_9));
   break;
  case 129:
   VAR_11 = (VAR_9 && (VAR_10 + VAR_3 > VAR_9));
   break;
  case 130:
   if (VAR_9) {
    if (VAR_10 >= VAR_9)
     VAR_11 = 1;
    else {




     VAR_11 =
      (((VAR_9 - VAR_10) >> 4) < VAR_3);
    }
   }
   break;
  default:

   FUNC_12("Invalid quota check op (%d)\n", VAR_2);
   VAR_11 = 1;
  }

  FUNC_1(VAR_8);

  VAR_7 = VAR_6->parent;
  if (VAR_11 || !VAR_7)
   break;
  FUNC_2(VAR_4, VAR_7);
  FUNC_5(VAR_4, VAR_6);
  VAR_6 = VAR_7;
 }
 if (VAR_6)
  FUNC_5(VAR_4, VAR_6);
 FUNC_15(&VAR_4->snap_rwsem);

 return VAR_11;
}
