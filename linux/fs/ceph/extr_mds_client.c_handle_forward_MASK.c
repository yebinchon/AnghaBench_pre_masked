
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int iov_len; void* iov_base; } ;
struct TYPE_3__ {int tid; } ;
struct ceph_msg {TYPE_2__ front; TYPE_1__ hdr; } ;
struct ceph_mds_session {int dummy; } ;
struct ceph_mds_request {scalar_t__ r_num_fwd; scalar_t__ r_resend_mds; scalar_t__ r_attempts; int r_req_flags; scalar_t__ r_err; } ;
struct ceph_mds_client {int mutex; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 int FUNC_2 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (void**) ;
 int FUNC_4 (void**,void*,int,int ) ;
 int FUNC_5 (struct ceph_mds_request*) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (int ) ;
 struct ceph_mds_request* FUNC_8 (struct ceph_mds_client*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (struct ceph_mds_request*) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static void FUNC_14(struct ceph_mds_client *VAR_4,
      struct ceph_mds_session *VAR_5,
      struct ceph_msg *VAR_6)
{
 struct ceph_mds_request *VAR_7;
 u64 VAR_8 = FUNC_7(VAR_6->hdr.tid);
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11 = -VAR_2;
 void *VAR_12 = VAR_6->front.iov_base;
 void *VAR_13 = VAR_12 + VAR_6->front.iov_len;

 FUNC_4(&VAR_12, VAR_13, 2*sizeof(u32), VAR_3);
 VAR_9 = FUNC_3(&VAR_12);
 VAR_10 = FUNC_3(&VAR_12);

 FUNC_9(&VAR_4->mutex);
 VAR_7 = FUNC_8(VAR_4, VAR_8);
 if (!VAR_7) {
  FUNC_6("forward tid %llu to mds%d - req dne\n", VAR_8, VAR_9);
  goto out;
 }

 if (FUNC_13(VAR_0, &VAR_7->r_req_flags)) {
  FUNC_6("forward tid %llu aborted, unregistering\n", VAR_8);
  FUNC_2(VAR_4, VAR_7);
 } else if (VAR_10 <= VAR_7->r_num_fwd) {
  FUNC_6("forward tid %llu to mds%d - old seq %d <= %d\n",
       VAR_8, VAR_9, VAR_7->r_num_fwd, VAR_10);
 } else {

  FUNC_6("forward tid %llu to mds%d (we resend)\n", VAR_8, VAR_9);
  FUNC_0(VAR_7->r_err);
  FUNC_0(FUNC_13(VAR_1, &VAR_7->r_req_flags));
  VAR_7->r_attempts = 0;
  VAR_7->r_num_fwd = VAR_10;
  VAR_7->r_resend_mds = VAR_9;
  FUNC_12(VAR_7);
  FUNC_1(VAR_4, VAR_7);
 }
 FUNC_5(VAR_7);
out:
 FUNC_10(&VAR_4->mutex);
 return;

bad:
 FUNC_11("mdsc_handle_forward decode error err=%d\n", VAR_11);
}
