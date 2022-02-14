
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmefc_ls_req {int rqstlen; int rqstaddr; struct fcloop_lsreq* private; } ;
struct nvme_fc_remote_port {struct fcloop_rport* private; } ;
struct nvme_fc_local_port {int dummy; } ;
struct fcloop_rport {TYPE_1__* targetport; } ;
struct fcloop_lsreq {int tgt_ls_req; int * tport; int status; int work; struct nvmefc_ls_req* lsreq; } ;
struct TYPE_2__ {int * private; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct nvme_fc_local_port *VAR_2,
   struct nvme_fc_remote_port *VAR_3,
   struct nvmefc_ls_req *VAR_4)
{
 struct fcloop_lsreq *VAR_5 = VAR_4->private;
 struct fcloop_rport *VAR_6 = VAR_3->private;
 int VAR_7 = 0;

 VAR_5->lsreq = VAR_4;
 FUNC_0(&VAR_5->work, VAR_1);

 if (!VAR_6->targetport) {
  VAR_5->status = -VAR_0;
  VAR_5->tport = ((void*)0);
  FUNC_2(&VAR_5->work);
  return VAR_7;
 }

 VAR_5->status = 0;
 VAR_5->tport = VAR_6->targetport->private;
 VAR_7 = FUNC_1(VAR_6->targetport, &VAR_5->tgt_ls_req,
     VAR_4->rqstaddr, VAR_4->rqstlen);

 return VAR_7;
}
