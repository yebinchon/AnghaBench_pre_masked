
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_trunk_info {int port_speed; int logical_speed; } ;
struct TYPE_17__ {int speed; int logical_speed; } ;
struct TYPE_18__ {TYPE_8__ link_state; } ;
struct TYPE_15__ {scalar_t__ state; } ;
struct TYPE_14__ {scalar_t__ state; } ;
struct TYPE_13__ {scalar_t__ state; } ;
struct TYPE_12__ {scalar_t__ state; } ;
struct TYPE_16__ {TYPE_6__ link3; TYPE_5__ link2; TYPE_4__ link1; TYPE_3__ link0; } ;
struct lpfc_hba {scalar_t__ link_state; TYPE_9__ sli4_hba; TYPE_7__ trunk_link; } ;
struct get_trunk_info_req {int dummy; } ;
struct fc_bsg_request {int dummy; } ;
struct TYPE_10__ {scalar_t__ vendor_rsp; } ;
struct TYPE_11__ {TYPE_1__ vendor_reply; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; TYPE_2__ reply_data; } ;
struct bsg_job {int request_len; int reply_len; struct fc_bsg_reply* reply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,TYPE_9__*) ;
 int FUNC_1 (int ,struct lpfc_trunk_info*,int) ;
 int FUNC_2 (struct bsg_job*,int,int ) ;
 int FUNC_3 (struct bsg_job*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct lpfc_vport* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct bsg_job *VAR_18)
{
 struct lpfc_vport *VAR_19 = FUNC_5(FUNC_3(VAR_18));
 struct lpfc_hba *VAR_20 = VAR_19->phba;
 struct fc_bsg_reply *VAR_21 = VAR_18->reply;
 struct lpfc_trunk_info *VAR_22;
 int VAR_23 = 0;

 if (VAR_18->request_len <
     sizeof(struct fc_bsg_request) + sizeof(struct get_trunk_info_req)) {
  FUNC_4(VAR_20, VAR_1, VAR_3,
    "2744 Received GET TRUNK _INFO request below "
    "minimum size\n");
  VAR_23 = -VAR_0;
  goto job_error;
 }

 VAR_22 = (struct lpfc_trunk_info *)
  VAR_21->reply_data.vendor_reply.vendor_rsp;

 if (VAR_18->reply_len <
     sizeof(struct fc_bsg_request) + sizeof(struct lpfc_trunk_info)) {
  FUNC_4(VAR_20, VAR_2, VAR_3,
    "2728 Received GET TRUNK _INFO reply below "
    "minimum size\n");
  VAR_23 = -VAR_0;
  goto job_error;
 }
 if (VAR_22 == ((void*)0)) {
  VAR_23 = -VAR_0;
  goto job_error;
 }

 FUNC_1(VAR_9, VAR_22,
     (VAR_20->link_state >= VAR_4) ? 1 : 0);

 FUNC_1(VAR_10, VAR_22,
     (VAR_20->trunk_link.link0.state == VAR_4) ? 1 : 0);

 FUNC_1(VAR_11, VAR_22,
     (VAR_20->trunk_link.link1.state == VAR_4) ? 1 : 0);

 FUNC_1(VAR_12, VAR_22,
     (VAR_20->trunk_link.link2.state == VAR_4) ? 1 : 0);

 FUNC_1(VAR_13, VAR_22,
     (VAR_20->trunk_link.link3.state == VAR_4) ? 1 : 0);

 FUNC_1(VAR_14, VAR_22,
     FUNC_0(VAR_5, &VAR_20->sli4_hba));

 FUNC_1(VAR_15, VAR_22,
     FUNC_0(VAR_6, &VAR_20->sli4_hba));

 FUNC_1(VAR_16, VAR_22,
     FUNC_0(VAR_7, &VAR_20->sli4_hba));

 FUNC_1(VAR_17, VAR_22,
     FUNC_0(VAR_8, &VAR_20->sli4_hba));

 VAR_22->port_speed = VAR_20->sli4_hba.link_state.speed / 1000;
 VAR_22->logical_speed =
    VAR_20->sli4_hba.link_state.logical_speed / 1000;
job_error:
 VAR_21->result = VAR_23;
 if (!VAR_23)
  FUNC_2(VAR_18, VAR_21->result,
        VAR_21->reply_payload_rcv_len);
 return VAR_23;

}
