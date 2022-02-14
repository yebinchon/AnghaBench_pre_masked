
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {void* port_name; int port_id; void* node_name; } ;
struct ibmvfc_target {int kref; int service_parms_change; int service_parms; int scsi_id; TYPE_3__ ids; } ;
struct TYPE_8__ {int port_name; int node_name; } ;
struct TYPE_6__ {int status; } ;
struct ibmvfc_port_login {int fc_explain; int fc_type; int error; int status; TYPE_4__ service_parms_change; TYPE_4__ service_parms; TYPE_2__ common; } ;
struct ibmvfc_host {int reinit; int work_wait_q; int discovery_threads; } ;
struct ibmvfc_event {TYPE_1__* xfer_iu; struct ibmvfc_host* vhost; struct ibmvfc_target* tgt; } ;
struct TYPE_5__ {struct ibmvfc_port_login plogi; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ibmvfc_event*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ibmvfc_target*,int ) ;
 int VAR_3 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct ibmvfc_target*,int ) ;
 int FUNC_8 (struct ibmvfc_target*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,TYPE_4__*,int) ;
 int FUNC_11 (struct ibmvfc_target*,char*) ;
 int FUNC_12 (struct ibmvfc_target*,int,char*,int ,int,int,int ,int,int ,int,int) ;
 int FUNC_13 (int *) ;
 void* FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct ibmvfc_event *VAR_6)
{
 struct ibmvfc_target *VAR_7 = VAR_6->tgt;
 struct ibmvfc_host *VAR_8 = VAR_6->vhost;
 struct ibmvfc_port_login *VAR_9 = &VAR_6->xfer_iu->plogi;
 u32 VAR_10 = FUNC_0(VAR_9->common.status);
 int VAR_11 = VAR_0;

 VAR_8->discovery_threads--;
 FUNC_8(VAR_7, VAR_2);
 switch (VAR_10) {
 case 128:
  FUNC_11(VAR_7, "Port Login succeeded\n");
  if (VAR_7->ids.port_name &&
      VAR_7->ids.port_name != FUNC_14(VAR_9->service_parms.port_name)) {
   VAR_8->reinit = 1;
   FUNC_11(VAR_7, "Port re-init required\n");
   break;
  }
  VAR_7->ids.node_name = FUNC_14(VAR_9->service_parms.node_name);
  VAR_7->ids.port_name = FUNC_14(VAR_9->service_parms.port_name);
  VAR_7->ids.port_id = VAR_7->scsi_id;
  FUNC_10(&VAR_7->service_parms, &VAR_9->service_parms,
         sizeof(VAR_7->service_parms));
  FUNC_10(&VAR_7->service_parms_change, &VAR_9->service_parms_change,
         sizeof(VAR_7->service_parms_change));
  FUNC_5(VAR_7, VAR_5);
  break;
 case 130:
  break;
 case 131:
  FUNC_7(VAR_7, VAR_4);
  break;
 case 129:
 default:
  if (FUNC_6(FUNC_0(VAR_9->status), FUNC_0(VAR_9->error)))
   VAR_11 += FUNC_7(VAR_7, VAR_4);
  else
   FUNC_8(VAR_7, VAR_1);

  FUNC_12(VAR_7, VAR_11, "Port Login failed: %s (%x:%x) %s (%x) %s (%x) rc=0x%02X\n",
   FUNC_2(FUNC_0(VAR_9->status), FUNC_0(VAR_9->error)),
          FUNC_0(VAR_9->status), FUNC_0(VAR_9->error),
   FUNC_3(FUNC_0(VAR_9->fc_type)), FUNC_0(VAR_9->fc_type),
   FUNC_4(FUNC_0(VAR_9->fc_explain)), FUNC_0(VAR_9->fc_explain), VAR_10);
  break;
 }

 FUNC_9(&VAR_7->kref, VAR_3);
 FUNC_1(VAR_6);
 FUNC_13(&VAR_8->work_wait_q);
}
