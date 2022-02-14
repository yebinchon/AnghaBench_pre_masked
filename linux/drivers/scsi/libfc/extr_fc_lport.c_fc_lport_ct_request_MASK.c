
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fc_lport {int port_id; int lp_mutex; } ;
struct fc_frame_header {scalar_t__ fh_parm_offset; scalar_t__ fh_df_ctl; scalar_t__ fh_cs_ctl; int fh_f_ctl; int fh_type; int fh_s_id; int fh_d_id; int fh_r_ctl; } ;
struct fc_frame {int dummy; } ;
struct fc_ct_req {int dummy; } ;
struct fc_ct_hdr {int dummy; } ;
struct fc_bsg_info {int sg; int nents; int rsp_code; struct fc_lport* lport; struct bsg_job* job; } ;
struct TYPE_4__ {int sg_list; int sg_cnt; } ;
struct TYPE_3__ {int payload_len; int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_2__ reply_payload; TYPE_1__ request_payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fc_lport*,struct fc_frame*,int ,int *,struct fc_bsg_info*,int ) ;
 struct fc_frame* FUNC_1 (struct fc_lport*,int) ;
 int FUNC_2 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_3 (struct fc_frame*) ;
 struct fc_ct_req* FUNC_4 (struct fc_frame*,size_t) ;
 int VAR_7 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct fc_bsg_info*) ;
 struct fc_bsg_info* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,struct fc_ct_req*,size_t) ;

__attribute__((used)) static int FUNC_10(struct bsg_job *VAR_8,
          struct fc_lport *VAR_9, u32 VAR_10, u32 VAR_11)
{
 struct fc_bsg_info *VAR_12;
 struct fc_frame *VAR_13;
 struct fc_frame_header *VAR_14;
 struct fc_ct_req *VAR_15;
 size_t VAR_16;

 FUNC_8(&VAR_9->lp_mutex);

 VAR_13 = FUNC_1(VAR_9, sizeof(struct fc_ct_hdr) +
       VAR_8->request_payload.payload_len);
 if (!VAR_13)
  return -VAR_1;

 VAR_16 = VAR_8->request_payload.payload_len;
 VAR_15 = FUNC_4(VAR_13, VAR_16);

 FUNC_9(VAR_8->request_payload.sg_list,
     VAR_8->request_payload.sg_cnt,
     VAR_15, VAR_16);

 VAR_14 = FUNC_3(VAR_13);
 VAR_14->fh_r_ctl = VAR_4;
 FUNC_5(VAR_14->fh_d_id, VAR_10);
 FUNC_5(VAR_14->fh_s_id, VAR_9->port_id);
 VAR_14->fh_type = VAR_5;
 FUNC_5(VAR_14->fh_f_ctl, VAR_2);
 VAR_14->fh_cs_ctl = 0;
 VAR_14->fh_df_ctl = 0;
 VAR_14->fh_parm_offset = 0;

 VAR_12 = FUNC_7(sizeof(struct fc_bsg_info), VAR_6);
 if (!VAR_12) {
  FUNC_2(VAR_13);
  return -VAR_1;
 }

 VAR_12->job = VAR_8;
 VAR_12->lport = VAR_9;
 VAR_12->rsp_code = VAR_3;
 VAR_12->nents = VAR_8->reply_payload.sg_cnt;
 VAR_12->sg = VAR_8->reply_payload.sg_list;

 if (!FUNC_0(VAR_9, VAR_13, VAR_7,
         ((void*)0), VAR_12, VAR_11)) {
  FUNC_6(VAR_12);
  return -VAR_0;
 }
 return 0;
}
