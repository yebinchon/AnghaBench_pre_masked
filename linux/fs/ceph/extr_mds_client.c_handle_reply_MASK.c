
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef struct ceph_mds_request* u64 ;
struct ceph_snap_realm {int dummy; } ;
struct TYPE_9__ {int tid; } ;
struct TYPE_8__ {int iov_len; struct ceph_mds_reply_head* iov_base; } ;
struct ceph_msg {TYPE_4__ hdr; TYPE_3__ front; } ;
struct TYPE_6__ {struct ceph_mds_request* peer_features; } ;
struct ceph_mds_session {int s_mds; int s_mutex; TYPE_1__ s_con; int s_features; int s_unsafe; struct ceph_mds_client* s_mdsc; } ;
struct ceph_mds_reply_info_parsed {scalar_t__ snapblob_len; scalar_t__ snapblob; } ;
struct ceph_mds_request {int r_resend_mds; scalar_t__ r_direct_mode; scalar_t__ r_op; int r_err; int r_req_flags; int r_reply; int r_caps_reservation; int r_unsafe_target_item; scalar_t__ r_target_inode; int r_fill_mutex; struct ceph_mds_session* r_session; struct ceph_mds_reply_info_parsed r_reply_info; int r_unsafe_dir_item; scalar_t__ r_unsafe_dir; int r_unsafe_item; struct ceph_mds_request* r_tid; } ;
struct ceph_mds_reply_head {int op; scalar_t__ safe; int result; } ;
struct ceph_mds_client {int mutex; int snap_rwsem; TYPE_2__* fsc; int safe_umount_waiters; scalar_t__ stopping; } ;
struct ceph_inode_info {int i_unsafe_lock; int i_unsafe_iops; int i_unsafe_dirops; } ;
struct TYPE_10__ {struct ceph_mds_request* journal_info; } ;
struct TYPE_7__ {int sb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 int FUNC_1 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 int FUNC_2 (struct ceph_mds_client*) ;
 int FUNC_3 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 int FUNC_4 (int ,struct ceph_mds_request*) ;
 struct ceph_inode_info* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct ceph_mds_request*) ;
 int FUNC_7 (struct ceph_msg*) ;
 int FUNC_8 (struct ceph_msg*) ;
 int FUNC_9 (struct ceph_mds_client*,struct ceph_snap_realm*) ;
 int FUNC_10 (struct ceph_mds_request*,struct ceph_mds_session*) ;
 int FUNC_11 (struct ceph_mds_client*,int *) ;
 int FUNC_12 (struct ceph_mds_client*,scalar_t__,scalar_t__,int,struct ceph_snap_realm**) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 TYPE_5__* VAR_10 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 struct ceph_mds_request* FUNC_20 (int ) ;
 int FUNC_21 (int *,int *) ;
 struct ceph_mds_request* FUNC_22 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct ceph_msg*,struct ceph_mds_reply_info_parsed*,struct ceph_mds_request*) ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 (char*,...) ;
 int FUNC_28 (int ,int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 scalar_t__ FUNC_31 (int ,int *) ;
 int FUNC_32 (int *) ;

__attribute__((used)) static void FUNC_33(struct ceph_mds_session *VAR_11, struct ceph_msg *VAR_12)
{
 struct ceph_mds_client *VAR_13 = VAR_11->s_mdsc;
 struct ceph_mds_request *VAR_14;
 struct ceph_mds_reply_head *VAR_15 = VAR_12->front.iov_base;
 struct ceph_mds_reply_info_parsed *VAR_16;
 struct ceph_snap_realm *VAR_17;
 u64 VAR_18;
 int VAR_19, VAR_20;
 int VAR_21 = VAR_11->s_mds;

 if (VAR_12->front.iov_len < sizeof(*VAR_15)) {
  FUNC_26("mdsc_handle_reply got corrupt (short) reply\n");
  FUNC_7(VAR_12);
  return;
 }


 VAR_18 = FUNC_20(VAR_12->hdr.tid);
 FUNC_23(&VAR_13->mutex);
 VAR_14 = FUNC_22(VAR_13, VAR_18);
 if (!VAR_14) {
  FUNC_15("handle_reply on unknown tid %llu\n", VAR_18);
  FUNC_24(&VAR_13->mutex);
  return;
 }
 FUNC_15("handle_reply %p\n", VAR_14);


 if (VAR_14->r_session != VAR_11) {
  FUNC_26("mdsc_handle_reply got %llu on session mds%d"
         " not mds%d\n", VAR_18, VAR_11->s_mds,
         VAR_14->r_session ? VAR_14->r_session->s_mds : -1);
  FUNC_24(&VAR_13->mutex);
  goto out;
 }


 if ((FUNC_31(VAR_7, &VAR_14->r_req_flags) && !VAR_15->safe) ||
     (FUNC_31(VAR_6, &VAR_14->r_req_flags) && VAR_15->safe)) {
  FUNC_27("got a dup %s reply on %llu from mds%d\n",
      VAR_15->safe ? "safe" : "unsafe", VAR_18, VAR_21);
  FUNC_24(&VAR_13->mutex);
  goto out;
 }
 if (FUNC_31(VAR_6, &VAR_14->r_req_flags)) {
  FUNC_27("got unsafe after safe on %llu from mds%d\n",
      VAR_18, VAR_21);
  FUNC_24(&VAR_13->mutex);
  goto out;
 }

 VAR_20 = FUNC_19(VAR_15->result);
 if (VAR_20 == -VAR_8) {
  FUNC_15("got ESTALE on request %llu\n", VAR_14->r_tid);
  VAR_14->r_resend_mds = -1;
  if (VAR_14->r_direct_mode != VAR_9) {
   FUNC_15("not using auth, setting for that now\n");
   VAR_14->r_direct_mode = VAR_9;
   FUNC_1(VAR_13, VAR_14);
   FUNC_24(&VAR_13->mutex);
   goto out;
  } else {
   int VAR_22 = FUNC_0(VAR_13, VAR_14);
   if (VAR_22 >= 0 && VAR_22 != VAR_14->r_session->s_mds) {
    FUNC_15("but auth changed, so resending\n");
    FUNC_1(VAR_13, VAR_14);
    FUNC_24(&VAR_13->mutex);
    goto out;
   }
  }
  FUNC_15("have to return ESTALE on request %llu\n", VAR_14->r_tid);
 }


 if (VAR_15->safe) {
  FUNC_28(VAR_6, &VAR_14->r_req_flags);
  FUNC_3(VAR_13, VAR_14);

  if (FUNC_31(VAR_7, &VAR_14->r_req_flags)) {







   FUNC_15("got safe reply %llu, mds%d\n", VAR_18, VAR_21);


   if (VAR_13->stopping && !FUNC_2(VAR_13))
    FUNC_13(&VAR_13->safe_umount_waiters);
   FUNC_24(&VAR_13->mutex);
   goto out;
  }
 } else {
  FUNC_28(VAR_7, &VAR_14->r_req_flags);
  FUNC_21(&VAR_14->r_unsafe_item, &VAR_14->r_session->s_unsafe);
  if (VAR_14->r_unsafe_dir) {
   struct ceph_inode_info *VAR_23 =
     FUNC_5(VAR_14->r_unsafe_dir);
   FUNC_29(&VAR_23->i_unsafe_lock);
   FUNC_21(&VAR_14->r_unsafe_dir_item,
          &VAR_23->i_unsafe_dirops);
   FUNC_30(&VAR_23->i_unsafe_lock);
  }
 }

 FUNC_15("handle_reply tid %lld result %d\n", VAR_18, VAR_20);
 VAR_16 = &VAR_14->r_reply_info;
 if (FUNC_31(VAR_0, &VAR_11->s_features))
  VAR_19 = FUNC_25(VAR_12, VAR_16, (u64)-1);
 else
  VAR_19 = FUNC_25(VAR_12, VAR_16, VAR_11->s_con.peer_features);
 FUNC_24(&VAR_13->mutex);

 FUNC_23(&VAR_11->s_mutex);
 if (VAR_19 < 0) {
  FUNC_26("mdsc_handle_reply got corrupt reply mds%d(tid:%lld)\n", VAR_21, VAR_18);
  FUNC_7(VAR_12);
  goto out_err;
 }


 VAR_17 = ((void*)0);
 if (VAR_16->snapblob_len) {
  FUNC_17(&VAR_13->snap_rwsem);
  FUNC_12(VAR_13, VAR_16->snapblob,
    VAR_16->snapblob + VAR_16->snapblob_len,
    FUNC_19(VAR_15->op) == VAR_3,
    &VAR_17);
  FUNC_18(&VAR_13->snap_rwsem);
 } else {
  FUNC_16(&VAR_13->snap_rwsem);
 }


 FUNC_23(&VAR_14->r_fill_mutex);
 VAR_10->journal_info = VAR_14;
 VAR_19 = FUNC_4(VAR_13->fsc->sb, VAR_14);
 if (VAR_19 == 0) {
  if (VAR_20 == 0 && (VAR_14->r_op == VAR_2 ||
        VAR_14->r_op == VAR_1))
   FUNC_10(VAR_14, VAR_14->r_session);
 }
 VAR_10->journal_info = ((void*)0);
 FUNC_24(&VAR_14->r_fill_mutex);

 FUNC_32(&VAR_13->snap_rwsem);
 if (VAR_17)
  FUNC_9(VAR_13, VAR_17);

 if (VAR_19 == 0) {
  if (VAR_14->r_target_inode &&
      FUNC_31(VAR_7, &VAR_14->r_req_flags)) {
   struct ceph_inode_info *VAR_24 =
    FUNC_5(VAR_14->r_target_inode);
   FUNC_29(&VAR_24->i_unsafe_lock);
   FUNC_21(&VAR_14->r_unsafe_target_item,
          &VAR_24->i_unsafe_iops);
   FUNC_30(&VAR_24->i_unsafe_lock);
  }

  FUNC_11(VAR_13, &VAR_14->r_caps_reservation);
 }
out_err:
 FUNC_23(&VAR_13->mutex);
 if (!FUNC_31(VAR_4, &VAR_14->r_req_flags)) {
  if (VAR_19) {
   VAR_14->r_err = VAR_19;
  } else {
   VAR_14->r_reply = FUNC_8(VAR_12);
   FUNC_28(VAR_5, &VAR_14->r_req_flags);
  }
 } else {
  FUNC_15("reply arrived after request %lld was aborted\n", VAR_18);
 }
 FUNC_24(&VAR_13->mutex);

 FUNC_24(&VAR_11->s_mutex);


 FUNC_14(VAR_13, VAR_14);
out:
 FUNC_6(VAR_14);
 return;
}
