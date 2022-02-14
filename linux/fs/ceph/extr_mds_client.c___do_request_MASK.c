
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ceph_mds_session {scalar_t__ s_state; int s_con; int s_waiting; } ;
struct ceph_mds_request {int r_err; int r_resend_mds; scalar_t__ r_request_started; int r_request; int r_wait; int r_session; scalar_t__ r_timeout; scalar_t__ r_started; int r_req_flags; } ;
struct ceph_mds_client {int mdsmap_err; int waiting_for_map; TYPE_3__* mdsmap; TYPE_2__* fsc; } ;
struct TYPE_7__ {scalar_t__ m_epoch; } ;
struct TYPE_6__ {TYPE_1__* mount_options; int mount_state; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct ceph_mds_session*) ;
 int FUNC_1 (struct ceph_mds_session*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ceph_mds_session* FUNC_3 (struct ceph_mds_client*,int) ;
 int FUNC_4 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 int FUNC_5 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_6 (struct ceph_mds_client*,struct ceph_mds_request*,int,int) ;
 int FUNC_7 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct ceph_mds_session*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (struct ceph_mds_session*) ;
 scalar_t__ VAR_14 ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (struct ceph_mds_request*) ;
 struct ceph_mds_session* FUNC_20 (struct ceph_mds_client*,int) ;
 scalar_t__ FUNC_21 (int ,int *) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_23(struct ceph_mds_client *VAR_15,
   struct ceph_mds_request *VAR_16)
{
 struct ceph_mds_session *VAR_17 = ((void*)0);
 int VAR_18 = -1;
 int VAR_19 = 0;

 if (VAR_16->r_err || FUNC_21(VAR_1, &VAR_16->r_req_flags)) {
  if (FUNC_21(VAR_0, &VAR_16->r_req_flags))
   FUNC_7(VAR_15, VAR_16);
  return;
 }

 if (VAR_16->r_timeout &&
     FUNC_22(VAR_14, VAR_16->r_started + VAR_16->r_timeout)) {
  FUNC_15("do_request timed out\n");
  VAR_19 = -VAR_12;
  goto finish;
 }
 if (FUNC_2(VAR_15->fsc->mount_state) == VAR_10) {
  FUNC_15("do_request forced umount\n");
  VAR_19 = -VAR_12;
  goto finish;
 }
 if (FUNC_2(VAR_15->fsc->mount_state) == VAR_8) {
  if (VAR_15->mdsmap_err) {
   VAR_19 = VAR_15->mdsmap_err;
   FUNC_15("do_request mdsmap err %d\n", VAR_19);
   goto finish;
  }
  if (VAR_15->mdsmap->m_epoch == 0) {
   FUNC_15("do_request no mdsmap, waiting for map\n");
   FUNC_17(&VAR_16->r_wait, &VAR_15->waiting_for_map);
   return;
  }
  if (!(VAR_15->fsc->mount_options->flags &
        VAR_9) &&
      !FUNC_10(VAR_15->mdsmap)) {
   VAR_19 = -VAR_13;
   FUNC_18("probably no mds server is up\n");
   goto finish;
  }
 }

 FUNC_19(VAR_16);

 VAR_18 = FUNC_4(VAR_15, VAR_16);
 if (VAR_18 < 0 ||
     FUNC_9(VAR_15->mdsmap, VAR_18) < VAR_7) {
  FUNC_15("do_request no mds or not active, waiting for map\n");
  FUNC_17(&VAR_16->r_wait, &VAR_15->waiting_for_map);
  return;
 }


 VAR_17 = FUNC_3(VAR_15, VAR_18);
 if (!VAR_17) {
  VAR_17 = FUNC_20(VAR_15, VAR_18);
  if (FUNC_0(VAR_17)) {
   VAR_19 = FUNC_1(VAR_17);
   goto finish;
  }
 }
 VAR_16->r_session = FUNC_16(VAR_17);

 FUNC_15("do_request mds%d session %p state %s\n", VAR_18, VAR_17,
      FUNC_13(VAR_17->s_state));
 if (VAR_17->s_state != VAR_5 &&
     VAR_17->s_state != VAR_3) {
  if (VAR_17->s_state == VAR_6) {
   VAR_19 = -VAR_11;
   goto out_session;
  }
  if (VAR_17->s_state == VAR_4 ||
      VAR_17->s_state == VAR_2)
   FUNC_5(VAR_15, VAR_17);
  FUNC_17(&VAR_16->r_wait, &VAR_17->s_waiting);
  goto out_session;
 }


 VAR_16->r_resend_mds = -1;

 if (VAR_16->r_request_started == 0)
  VAR_16->r_request_started = VAR_14;

 VAR_19 = FUNC_6(VAR_15, VAR_16, VAR_18, 0);
 if (!VAR_19) {
  FUNC_11(VAR_16->r_request);
  FUNC_8(&VAR_17->s_con, VAR_16->r_request);
 }

out_session:
 FUNC_12(VAR_17);
finish:
 if (VAR_19) {
  FUNC_15("__do_request early error %d\n", VAR_19);
  VAR_16->r_err = VAR_19;
  FUNC_14(VAR_15, VAR_16);
  FUNC_7(VAR_15, VAR_16);
 }
 return;
}
