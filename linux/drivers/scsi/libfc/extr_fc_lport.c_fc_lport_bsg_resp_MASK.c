
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct fc_seq {int dummy; } ;
struct fc_lport {int lp_mutex; } ;
struct fc_frame_header {int fh_f_ctl; int fh_seq_cnt; } ;
struct fc_frame {int dummy; } ;
struct fc_ct_hdr {int ct_cmd; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ ctels_reply; } ;
struct fc_bsg_reply {scalar_t__ reply_payload_rcv_len; scalar_t__ result; TYPE_2__ reply_data; } ;
struct fc_bsg_info {unsigned short rsp_code; int offset; int nents; int sg; struct fc_lport* lport; struct bsg_job* job; } ;
struct TYPE_6__ {scalar_t__ payload_len; } ;
struct bsg_job {int reply_len; TYPE_3__ reply_payload; struct fc_bsg_reply* reply; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct bsg_job*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (void*,size_t,int ,int *,int *,int *) ;
 int FUNC_4 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_5 (struct fc_frame*) ;
 void* FUNC_6 (struct fc_frame*,int ) ;
 scalar_t__ FUNC_7 (struct fc_frame*) ;
 scalar_t__ FUNC_8 (struct fc_frame*) ;
 int FUNC_9 (struct fc_frame*) ;
 scalar_t__ FUNC_10 (struct fc_frame*) ;
 int FUNC_11 (struct fc_bsg_info*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 unsigned short FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct fc_seq *VAR_10, struct fc_frame *VAR_11,
         void *VAR_12)
{
 struct fc_bsg_info *VAR_13 = VAR_12;
 struct bsg_job *VAR_14 = VAR_13->job;
 struct fc_bsg_reply *VAR_15 = VAR_14->reply;
 struct fc_lport *VAR_16 = VAR_13->lport;
 struct fc_frame_header *VAR_17;
 size_t VAR_18;
 void *VAR_19;

 if (FUNC_0(VAR_11)) {
  VAR_15->result = (FUNC_1(VAR_11) == -VAR_5) ?
   -VAR_0 : -VAR_1;
  VAR_14->reply_len = sizeof(uint32_t);
  FUNC_2(VAR_14, VAR_15->result,
          VAR_15->reply_payload_rcv_len);
  FUNC_11(VAR_13);
  return;
 }

 FUNC_12(&VAR_16->lp_mutex);
 VAR_17 = FUNC_5(VAR_11);
 VAR_18 = FUNC_9(VAR_11) - sizeof(*VAR_17);
 VAR_19 = FUNC_6(VAR_11, 0);

 if (FUNC_10(VAR_11) == VAR_9 && !FUNC_15(VAR_17->fh_seq_cnt)) {

  unsigned short VAR_20 = (VAR_13->rsp_code == VAR_8) ?
   FUNC_15(((struct fc_ct_hdr *)VAR_19)->ct_cmd) :
   (unsigned short)FUNC_7(VAR_11);


  VAR_15->reply_data.ctels_reply.status =
   (VAR_20 == VAR_13->rsp_code) ?
   VAR_2 : VAR_3;
 }

 VAR_15->reply_payload_rcv_len +=
  FUNC_3(VAR_19, VAR_18, VAR_13->sg, &VAR_13->nents,
      &VAR_13->offset, ((void*)0));

 if (FUNC_8(VAR_11) == VAR_4 &&
     (FUNC_14(VAR_17->fh_f_ctl) & (VAR_7 | VAR_6)) ==
     (VAR_7 | VAR_6)) {
  if (VAR_15->reply_payload_rcv_len >
      VAR_14->reply_payload.payload_len)
   VAR_15->reply_payload_rcv_len =
    VAR_14->reply_payload.payload_len;
  VAR_15->result = 0;
  FUNC_2(VAR_14, VAR_15->result,
          VAR_15->reply_payload_rcv_len);
  FUNC_11(VAR_13);
 }
 FUNC_4(VAR_11);
 FUNC_13(&VAR_16->lp_mutex);
}
