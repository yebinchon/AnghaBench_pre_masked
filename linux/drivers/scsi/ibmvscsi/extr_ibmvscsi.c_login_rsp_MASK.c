
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct srp_event_struct {TYPE_4__* xfer_iu; struct ibmvscsi_host_data* hostdata; } ;
struct ibmvscsi_host_data {int work_wait_q; int action; int request_limit; scalar_t__ client_migrated; int dev; } ;
struct TYPE_6__ {int opcode; int req_lim_delta; } ;
struct TYPE_5__ {int reason; } ;
struct TYPE_7__ {TYPE_2__ login_rsp; TYPE_1__ login_rej; } ;
struct TYPE_8__ {TYPE_3__ srp; } ;


 int VAR_0 ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct srp_event_struct *VAR_1)
{
 struct ibmvscsi_host_data *VAR_2 = VAR_1->hostdata;
 switch (VAR_1->xfer_iu->srp.login_rsp.opcode) {
 case 128:
  break;
 case 129:
  FUNC_3(VAR_2->dev, "SRP_LOGIN_REJ reason %u\n",
    VAR_1->xfer_iu->srp.login_rej.reason);

  FUNC_0(&VAR_2->request_limit, -1);
  return;
 default:
  FUNC_2(VAR_2->dev, "Invalid login response typecode 0x%02x!\n",
   VAR_1->xfer_iu->srp.login_rsp.opcode);

  FUNC_0(&VAR_2->request_limit, -1);
  return;
 }

 FUNC_3(VAR_2->dev, "SRP_LOGIN succeeded\n");
 VAR_2->client_migrated = 0;





 FUNC_0(&VAR_2->request_limit,
     FUNC_1(VAR_1->xfer_iu->srp.login_rsp.req_lim_delta));


 VAR_2->action = VAR_0;
 FUNC_4(&VAR_2->work_wait_q);
}
