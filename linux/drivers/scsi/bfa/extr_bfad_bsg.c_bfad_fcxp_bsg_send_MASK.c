
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int payload_len; } ;
struct TYPE_8__ {int payload_len; } ;
struct bsg_job {TYPE_3__ reply_payload; TYPE_2__ request_payload; } ;
struct bfad_s {int bfad_lock; int bfa; } ;
struct bfad_fcxp {int bfa_rport; struct bfa_fcxp_s* bfa_fcxp; int num_rsp_sgles; int num_req_sgles; TYPE_1__* port; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_11__ {int s_id; } ;
struct TYPE_10__ {int tsecs; TYPE_6__ fchs; int cos; int cts; int vf_id; } ;
typedef TYPE_4__ bfa_bsg_fcpt_t ;
struct TYPE_7__ {struct bfad_s* bfad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfa_fcxp_s* FUNC_0 (struct bfad_fcxp*,int *,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct bfa_fcxp_s*,int ,int ,int ,int ,int ,int ,TYPE_6__*,int ,struct bfad_s*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct bfad_s*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int
FUNC_6(struct bsg_job *VAR_8, struct bfad_fcxp *VAR_9,
     bfa_bsg_fcpt_t *VAR_10)
{
 struct bfa_fcxp_s *VAR_11;
 struct bfad_s *VAR_12 = VAR_9->port->bfad;
 unsigned long VAR_13;
 uint8_t VAR_14;

 FUNC_4(&VAR_12->bfad_lock, VAR_13);


 VAR_11 = FUNC_0(VAR_9, &VAR_12->bfa,
      VAR_9->num_req_sgles,
      VAR_9->num_rsp_sgles,
      VAR_3,
      VAR_4,
      VAR_5,
      VAR_6, VAR_2);
 if (!VAR_11) {
  FUNC_3(VAR_12, 0);
  FUNC_5(&VAR_12->bfad_lock, VAR_13);
  return VAR_0;
 }

 VAR_9->bfa_fcxp = VAR_11;

 VAR_14 = FUNC_2(&VAR_12->bfa, VAR_10->fchs.s_id);

 FUNC_1(VAR_11, VAR_9->bfa_rport, VAR_10->vf_id, VAR_14,
        VAR_10->cts, VAR_10->cos,
        VAR_8->request_payload.payload_len,
        &VAR_10->fchs, VAR_7, VAR_12,
        VAR_8->reply_payload.payload_len, VAR_10->tsecs);

 FUNC_5(&VAR_12->bfad_lock, VAR_13);

 return VAR_1;
}
