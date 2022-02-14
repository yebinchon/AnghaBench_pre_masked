
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ceph_vino {scalar_t__ ino; int snap; } ;
struct ceph_snap_realm {scalar_t__ created; int ino; int inodes_with_caps_lock; struct inode* inode; int inodes_with_caps; } ;
struct TYPE_5__ {int iov_len; void* iov_base; } ;
struct ceph_msg {TYPE_2__ front; } ;
struct ceph_mds_snap_realm {int created; } ;
struct ceph_mds_snap_head {int trace_len; int num_split_realms; int num_split_inos; int split; int op; } ;
struct ceph_mds_session {int s_mds; int s_mutex; int s_seq; } ;
struct ceph_mds_client {int snap_rwsem; TYPE_1__* fsc; } ;
struct TYPE_6__ {int ino; } ;
struct ceph_inode_info {int i_ceph_lock; TYPE_3__ i_vino; struct ceph_snap_realm* i_snap_realm; int i_snap_realm_item; } ;
typedef int __le64 ;
struct TYPE_4__ {struct super_block* sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ceph_snap_realm*) ;
 int FUNC_1 (struct ceph_mds_client*) ;
 struct ceph_snap_realm* FUNC_2 (struct ceph_mds_client*,scalar_t__) ;
 int FUNC_3 (struct ceph_mds_client*,struct ceph_snap_realm*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct inode*) ;
 struct ceph_snap_realm* FUNC_5 (struct ceph_mds_client*,scalar_t__) ;
 int FUNC_6 (void**,void*,int,int ) ;
 struct inode* FUNC_7 (struct super_block*,struct ceph_vino) ;
 int FUNC_8 (struct ceph_mds_client*,struct ceph_snap_realm*) ;
 struct ceph_inode_info* FUNC_9 (struct inode*) ;
 struct ceph_snap_realm* FUNC_10 (struct ceph_mds_client*,scalar_t__) ;
 int FUNC_11 (struct ceph_msg*) ;
 int FUNC_12 (struct ceph_mds_client*,struct ceph_snap_realm*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct ceph_mds_client*,void*,void*,int,int *) ;
 int FUNC_15 (char*,int,struct ceph_snap_realm*,...) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct ceph_mds_client*) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (char*,int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;

void FUNC_28(struct ceph_mds_client *VAR_4,
        struct ceph_mds_session *VAR_5,
        struct ceph_msg *VAR_6)
{
 struct super_block *VAR_7 = VAR_4->fsc->sb;
 int VAR_8 = VAR_5->s_mds;
 u64 VAR_9;
 int VAR_10;
 int VAR_11;
 struct ceph_snap_realm *VAR_12 = ((void*)0);
 void *VAR_13 = VAR_6->front.iov_base;
 void *VAR_14 = VAR_13 + VAR_6->front.iov_len;
 struct ceph_mds_snap_head *VAR_15;
 int VAR_16, VAR_17;
 __le64 *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 int VAR_20;
 int VAR_21 = 0;


 if (VAR_6->front.iov_len < sizeof(*VAR_15))
  goto bad;
 VAR_15 = VAR_13;
 VAR_10 = FUNC_18(VAR_15->op);
 VAR_9 = FUNC_19(VAR_15->split);

 VAR_16 = FUNC_18(VAR_15->num_split_inos);
 VAR_17 = FUNC_18(VAR_15->num_split_realms);
 VAR_11 = FUNC_18(VAR_15->trace_len);
 VAR_13 += sizeof(*VAR_15);

 FUNC_15("handle_snap from mds%d op %s split %llx tracelen %d\n", VAR_8,
      FUNC_13(VAR_10), VAR_9, VAR_11);

 FUNC_22(&VAR_5->s_mutex);
 VAR_5->s_seq++;
 FUNC_23(&VAR_5->s_mutex);

 FUNC_16(&VAR_4->snap_rwsem);
 VAR_21 = 1;

 if (VAR_10 == VAR_2) {
  struct ceph_mds_snap_realm *VAR_22;







  VAR_18 = VAR_13;
  VAR_13 += sizeof(u64) * VAR_16;
  VAR_19 = VAR_13;
  VAR_13 += sizeof(u64) * VAR_17;
  FUNC_6(&VAR_13, VAR_14, sizeof(*VAR_22), VAR_3);



  VAR_22 = VAR_13;

  VAR_12 = FUNC_10(VAR_4, VAR_9);
  if (!VAR_12) {
   VAR_12 = FUNC_5(VAR_4, VAR_9);
   if (FUNC_0(VAR_12))
    goto out;
  }

  FUNC_15("splitting snap_realm %llx %p\n", VAR_12->ino, VAR_12);
  for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++) {
   struct ceph_vino VAR_23 = {
    .ino = FUNC_19(VAR_18[VAR_20]),
    .snap = VAR_0,
   };
   struct inode *VAR_24 = FUNC_7(VAR_7, VAR_23);
   struct ceph_inode_info *VAR_25;
   struct ceph_snap_realm *VAR_26;

   if (!VAR_24)
    continue;
   VAR_25 = FUNC_9(VAR_24);

   FUNC_25(&VAR_25->i_ceph_lock);
   if (!VAR_25->i_snap_realm)
    goto skip_inode;







   if (VAR_25->i_snap_realm->created >
       FUNC_19(VAR_22->created)) {
    FUNC_15(" leaving %p in newer realm %llx %p\n",
         VAR_24, VAR_25->i_snap_realm->ino,
         VAR_25->i_snap_realm);
    goto skip_inode;
   }
   FUNC_15(" will move %p to split realm %llx %p\n",
        VAR_24, VAR_12->ino, VAR_12);



   VAR_26 = VAR_25->i_snap_realm;
   FUNC_25(&VAR_26->inodes_with_caps_lock);
   FUNC_21(&VAR_25->i_snap_realm_item);
   FUNC_26(&VAR_26->inodes_with_caps_lock);

   FUNC_25(&VAR_12->inodes_with_caps_lock);
   FUNC_20(&VAR_25->i_snap_realm_item,
     &VAR_12->inodes_with_caps);
   VAR_25->i_snap_realm = VAR_12;
   if (VAR_12->ino == VAR_25->i_vino.ino)
                                VAR_12->inode = VAR_24;
   FUNC_26(&VAR_12->inodes_with_caps_lock);

   FUNC_26(&VAR_25->i_ceph_lock);

   FUNC_8(VAR_4, VAR_12);
   FUNC_12(VAR_4, VAR_26);



   FUNC_4(VAR_24);
   continue;

skip_inode:
   FUNC_26(&VAR_25->i_ceph_lock);
   FUNC_4(VAR_24);
  }


  for (VAR_20 = 0; VAR_20 < VAR_17; VAR_20++) {
   struct ceph_snap_realm *VAR_27 =
    FUNC_2(VAR_4,
        FUNC_19(VAR_19[VAR_20]));
   if (!VAR_27)
    continue;
   FUNC_3(VAR_4, VAR_27, VAR_12->ino);
  }
 }





 FUNC_14(VAR_4, VAR_13, VAR_14,
          VAR_10 == VAR_1, ((void*)0));

 if (VAR_10 == VAR_2)

  FUNC_12(VAR_4, VAR_12);

 FUNC_1(VAR_4);

 FUNC_27(&VAR_4->snap_rwsem);

 FUNC_17(VAR_4);
 return;

bad:
 FUNC_24("corrupt snap message from mds%d\n", VAR_8);
 FUNC_11(VAR_6);
out:
 if (VAR_21)
  FUNC_27(&VAR_4->snap_rwsem);
 return;
}
