
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmefc_fcp_req {struct fcloop_ini_fcpreq* private; } ;
struct nvme_fc_remote_port {int dummy; } ;
struct nvme_fc_local_port {int dummy; } ;
struct fcloop_ini_fcpreq {int inilock; struct fcloop_fcpreq* tfcp_req; } ;
struct fcloop_fcpreq {int inistate; int abort_rcv_work; int reqlock; } ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct fcloop_fcpreq*) ;
 int FUNC_2 (struct fcloop_fcpreq*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct nvme_fc_local_port *VAR_1,
   struct nvme_fc_remote_port *VAR_2,
   void *VAR_3,
   struct nvmefc_fcp_req *VAR_4)
{
 struct fcloop_ini_fcpreq *VAR_5 = VAR_4->private;
 struct fcloop_fcpreq *VAR_6;
 bool VAR_7 = 1;

 FUNC_4(&VAR_5->inilock);
 VAR_6 = VAR_5->tfcp_req;
 if (VAR_6)
  FUNC_1(VAR_6);
 FUNC_6(&VAR_5->inilock);

 if (!VAR_6)

  return;


 FUNC_5(&VAR_6->reqlock);
 switch (VAR_6->inistate) {
 case 128:
 case 130:
  VAR_6->inistate = VAR_0;
  break;
 case 129:
  VAR_7 = 0;
  break;
 default:
  FUNC_7(&VAR_6->reqlock);
  FUNC_0(1);
  return;
 }
 FUNC_7(&VAR_6->reqlock);

 if (VAR_7)

  FUNC_0(!FUNC_3(&VAR_6->abort_rcv_work));
 else {




  FUNC_2(VAR_6);
 }
}
