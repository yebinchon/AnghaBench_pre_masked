
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct req_que {int num_outstanding_cmds; TYPE_3__** outstanding_cmds; } ;
struct qla_hw_data {int max_req_queues; int hardware_lock; TYPE_2__* isp_ops; struct req_que** req_q_map; } ;
struct fc_bsg_reply {int result; } ;
struct bsg_job {struct fc_bsg_reply* reply; } ;
struct TYPE_10__ {struct bsg_job* bsg_job; } ;
struct TYPE_12__ {scalar_t__ type; int (* free ) (TYPE_3__*) ;TYPE_1__ u; } ;
typedef TYPE_3__ srb_t ;
struct TYPE_13__ {struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_11__ {scalar_t__ (* abort_command ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bsg_job*) ;
 int FUNC_1 (int ,TYPE_4__*,int,char*) ;
 int VAR_5 ;
 int FUNC_2 (int ,TYPE_4__*,int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

int
FUNC_8(struct bsg_job *VAR_8)
{
 struct fc_bsg_reply *VAR_9 = VAR_8->reply;
 scsi_qla_host_t *VAR_10 = FUNC_3(FUNC_0(VAR_8));
 struct qla_hw_data *VAR_11 = VAR_10->hw;
 srb_t *VAR_12;
 int VAR_13, VAR_14;
 unsigned long VAR_15;
 struct req_que *VAR_16;


 FUNC_4(&VAR_11->hardware_lock, VAR_15);
 for (VAR_14 = 0; VAR_14 < VAR_11->max_req_queues; VAR_14++) {
  VAR_16 = VAR_11->req_q_map[VAR_14];
  if (!VAR_16)
   continue;

  for (VAR_13 = 1; VAR_13 < VAR_16->num_outstanding_cmds; VAR_13++) {
   VAR_12 = VAR_16->outstanding_cmds[VAR_13];
   if (VAR_12) {
    if (((VAR_12->type == VAR_2) ||
     (VAR_12->type == VAR_3) ||
     (VAR_12->type == VAR_4))
     && (VAR_12->u.bsg_job == VAR_8)) {
     VAR_16->outstanding_cmds[VAR_13] = ((void*)0);
     FUNC_5(&VAR_11->hardware_lock, VAR_15);
     if (VAR_11->isp_ops->abort_command(VAR_12)) {
      FUNC_2(VAR_7, VAR_10, 0x7089,
          "mbx abort_command "
          "failed.\n");
      VAR_9->result = -VAR_0;
     } else {
      FUNC_1(VAR_5, VAR_10, 0x708a,
          "mbx abort_command "
          "success.\n");
      VAR_9->result = 0;
     }
     FUNC_4(&VAR_11->hardware_lock, VAR_15);
     goto done;
    }
   }
  }
 }
 FUNC_5(&VAR_11->hardware_lock, VAR_15);
 FUNC_2(VAR_6, VAR_10, 0x708b, "SRB not found to abort.\n");
 VAR_9->result = -VAR_1;
 return 0;

done:
 FUNC_5(&VAR_11->hardware_lock, VAR_15);
 VAR_12->free(VAR_12);
 return 0;
}
