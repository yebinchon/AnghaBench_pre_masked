
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_root; } ;
struct inode {scalar_t__ i_nlink; } ;
struct dentry {int dummy; } ;
struct ceph_vino {scalar_t__ ino; scalar_t__ snap; } ;
struct ceph_nfs_snapfh {scalar_t__ parent_ino; scalar_t__ snapid; scalar_t__ ino; int hash; } ;
struct TYPE_4__ {void* hash; void* parent; void* snapid; void* mask; } ;
struct TYPE_5__ {TYPE_1__ lookupino; } ;
struct ceph_mds_request {int r_num_caps; struct inode* r_target_inode; struct ceph_vino r_ino1; TYPE_2__ r_args; } ;
struct ceph_mds_client {int dummy; } ;
struct TYPE_6__ {struct ceph_mds_client* mdsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dentry* FUNC_0 (struct ceph_mds_request*) ;
 struct dentry* FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct ceph_mds_request*) ;
 int VAR_7 ;
 struct inode* FUNC_3 (struct super_block*,struct ceph_vino) ;
 struct inode* FUNC_4 (struct inode*) ;
 struct ceph_mds_request* FUNC_5 (struct ceph_mds_client*,int ,int ) ;
 int FUNC_6 (struct ceph_mds_client*,int *,struct ceph_mds_request*) ;
 int FUNC_7 (struct ceph_mds_request*) ;
 TYPE_3__* FUNC_8 (struct super_block*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 void* FUNC_11 (int) ;
 void* FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ) ;
 struct dentry* FUNC_14 (struct inode*) ;
 struct dentry* FUNC_15 (struct inode*) ;
 int FUNC_16 (char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 int FUNC_17 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_18(struct super_block *VAR_8,
       struct ceph_nfs_snapfh *VAR_9,
       bool VAR_10)
{
 struct ceph_mds_client *VAR_11 = FUNC_8(VAR_8)->mdsc;
 struct ceph_mds_request *VAR_12;
 struct inode *VAR_13;
 struct ceph_vino VAR_14;
 int VAR_15;
 int VAR_16;
 bool VAR_17 = 0;

 if (VAR_10) {
  VAR_14.ino = VAR_9->parent_ino;
  if (VAR_9->snapid == VAR_3)
   VAR_14.snap = VAR_2;
  else if (VAR_9->ino == VAR_9->parent_ino)
   VAR_14.snap = VAR_3;
  else
   VAR_14.snap = VAR_9->snapid;
 } else {
  VAR_14.ino = VAR_9->ino;
  VAR_14.snap = VAR_9->snapid;
 }
 VAR_13 = FUNC_3(VAR_8, VAR_14);
 if (VAR_13)
  return FUNC_14(VAR_13);

 VAR_12 = FUNC_5(VAR_11, VAR_1,
           VAR_7);
 if (FUNC_2(VAR_12))
  return FUNC_0(VAR_12);

 VAR_15 = VAR_4;
 if (FUNC_9(FUNC_13(VAR_8->s_root)))
  VAR_15 |= VAR_0;
 VAR_12->r_args.lookupino.mask = FUNC_11(VAR_15);
 if (VAR_14.snap < VAR_2) {
  VAR_12->r_args.lookupino.snapid = FUNC_12(VAR_14.snap);
  if (!VAR_10 && VAR_9->ino != VAR_9->parent_ino) {
   VAR_12->r_args.lookupino.parent =
     FUNC_12(VAR_9->parent_ino);
   VAR_12->r_args.lookupino.hash =
     FUNC_11(VAR_9->hash);
  }
 }

 VAR_12->r_ino1 = VAR_14;
 VAR_12->r_num_caps = 1;
 VAR_16 = FUNC_6(VAR_11, ((void*)0), VAR_12);
 VAR_13 = VAR_12->r_target_inode;
 if (VAR_13) {
  if (VAR_14.snap == VAR_3) {
   if (VAR_13->i_nlink == 0)
    VAR_17 = 1;
   VAR_13 = FUNC_4(VAR_13);
  } else if (FUNC_10(VAR_13) == VAR_14.snap) {
   FUNC_17(VAR_13);
  } else {

   VAR_16 = -VAR_5;
   VAR_13 = ((void*)0);
  }
 }
 FUNC_7(VAR_12);

 if (VAR_10) {
  FUNC_16("snapfh_to_parent %llx.%llx\n err=%d\n",
       VAR_14.ino, VAR_14.snap, VAR_16);
 } else {
  FUNC_16("snapfh_to_dentry %llx.%llx parent %llx hash %x err=%d",
        VAR_14.ino, VAR_14.snap, VAR_9->parent_ino, VAR_9->hash, VAR_16);
 }
 if (!VAR_13)
  return FUNC_1(-VAR_6);

 return VAR_17 ? FUNC_15(VAR_13) : FUNC_14(VAR_13);
}
