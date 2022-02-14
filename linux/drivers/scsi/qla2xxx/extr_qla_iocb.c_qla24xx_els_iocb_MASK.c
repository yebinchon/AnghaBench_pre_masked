
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_19__ {int command_code; } ;
struct TYPE_18__ {int els_code; } ;
struct TYPE_20__ {TYPE_3__ h_els; TYPE_2__ r_els; } ;
struct fc_bsg_request {TYPE_4__ rqst_data; } ;
struct els_entry_24xx {int entry_count; void* rx_len; int rx_address; void* tx_len; int tx_address; void* tx_byte_count; void* rx_byte_count; scalar_t__ control_flags; int * port_id; int opcode; void* rx_dsd_count; int sof_type; int vp_index; void* tx_dsd_count; void* nport_handle; int handle; scalar_t__ entry_status; scalar_t__ sys_define; int entry_type; } ;
struct TYPE_25__ {int sg_list; int payload_len; int sg_cnt; } ;
struct TYPE_24__ {int sg_list; int payload_len; int sg_cnt; } ;
struct bsg_job {TYPE_9__ reply_payload; TYPE_8__ request_payload; struct fc_bsg_request* request; } ;
struct TYPE_17__ {struct bsg_job* bsg_job; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_11__* vha; TYPE_7__* fcport; int handle; TYPE_1__ u; } ;
typedef TYPE_12__ srb_t ;
struct TYPE_21__ {int domain; int area; int al_pa; } ;
struct TYPE_22__ {TYPE_5__ b; } ;
struct TYPE_23__ {TYPE_6__ d_id; int loop_id; } ;
struct TYPE_14__ {int control_requests; } ;
struct TYPE_15__ {TYPE_10__ qla_stats; int vp_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(srb_t *VAR_3, struct els_entry_24xx *VAR_4)
{
 struct bsg_job *VAR_5 = VAR_3->u.bsg_job;
 struct fc_bsg_request *VAR_6 = VAR_5->request;

        VAR_4->entry_type = VAR_0;
        VAR_4->entry_count = 1;
        VAR_4->sys_define = 0;
        VAR_4->entry_status = 0;
        VAR_4->handle = VAR_3->handle;
        VAR_4->nport_handle = FUNC_0(VAR_3->fcport->loop_id);
 VAR_4->tx_dsd_count = FUNC_0(VAR_5->request_payload.sg_cnt);
 VAR_4->vp_index = VAR_3->vha->vp_idx;
        VAR_4->sof_type = VAR_1;
 VAR_4->rx_dsd_count = FUNC_0(VAR_5->reply_payload.sg_cnt);

 VAR_4->opcode =
     VAR_3->type == VAR_2 ?
     VAR_6->rqst_data.r_els.els_code :
     VAR_6->rqst_data.h_els.command_code;
        VAR_4->port_id[0] = VAR_3->fcport->d_id.b.al_pa;
        VAR_4->port_id[1] = VAR_3->fcport->d_id.b.area;
        VAR_4->port_id[2] = VAR_3->fcport->d_id.b.domain;
        VAR_4->control_flags = 0;
        VAR_4->rx_byte_count =
            FUNC_1(VAR_5->reply_payload.payload_len);
        VAR_4->tx_byte_count =
            FUNC_1(VAR_5->request_payload.payload_len);

 FUNC_2(FUNC_3(VAR_5->request_payload.sg_list),
      &VAR_4->tx_address);
        VAR_4->tx_len = FUNC_1(FUNC_4
            (VAR_5->request_payload.sg_list));

 FUNC_2(FUNC_3(VAR_5->reply_payload.sg_list),
      &VAR_4->rx_address);
        VAR_4->rx_len = FUNC_1(FUNC_4
            (VAR_5->reply_payload.sg_list));

 VAR_3->vha->qla_stats.control_requests++;
}
