
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmefc_fcp_req {struct fcloop_ini_fcpreq* private; } ;
struct nvme_fc_remote_port {struct fcloop_rport* private; } ;
struct nvme_fc_local_port {int dummy; } ;
struct fcloop_rport {TYPE_1__* targetport; } ;
struct fcloop_ini_fcpreq {int inilock; struct fcloop_fcpreq* tfcp_req; struct nvmefc_fcp_req* fcpreq; } ;
struct fcloop_fcpreq {int fcp_rcv_work; int ref; int tio_done_work; int abort_rcv_work; int reqlock; int inistate; int tport; struct nvmefc_fcp_req* fcpreq; } ;
struct TYPE_2__ {int private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 struct fcloop_fcpreq* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct nvme_fc_local_port *VAR_7,
   struct nvme_fc_remote_port *VAR_8,
   void *VAR_9,
   struct nvmefc_fcp_req *VAR_10)
{
 struct fcloop_rport *VAR_11 = VAR_8->private;
 struct fcloop_ini_fcpreq *VAR_12 = VAR_10->private;
 struct fcloop_fcpreq *VAR_13;

 if (!VAR_11->targetport)
  return -VAR_0;

 VAR_13 = FUNC_2(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_12->fcpreq = VAR_10;
 VAR_12->tfcp_req = VAR_13;
 FUNC_4(&VAR_12->inilock);

 VAR_13->fcpreq = VAR_10;
 VAR_13->tport = VAR_11->targetport->private;
 VAR_13->inistate = VAR_3;
 FUNC_4(&VAR_13->reqlock);
 FUNC_0(&VAR_13->fcp_rcv_work, VAR_5);
 FUNC_0(&VAR_13->abort_rcv_work, VAR_4);
 FUNC_0(&VAR_13->tio_done_work, VAR_6);
 FUNC_1(&VAR_13->ref);

 FUNC_3(&VAR_13->fcp_rcv_work);

 return 0;
}
