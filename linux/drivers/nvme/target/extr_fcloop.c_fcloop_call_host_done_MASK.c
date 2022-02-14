
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmefc_fcp_req {int status; int (* done ) (struct nvmefc_fcp_req*) ;struct fcloop_ini_fcpreq* private; } ;
struct fcloop_ini_fcpreq {int inilock; int * tfcp_req; } ;
struct fcloop_fcpreq {int dummy; } ;


 int FUNC_0 (struct fcloop_fcpreq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvmefc_fcp_req*) ;

__attribute__((used)) static void
FUNC_4(struct nvmefc_fcp_req *VAR_0,
   struct fcloop_fcpreq *VAR_1, int VAR_2)
{
 struct fcloop_ini_fcpreq *VAR_3 = ((void*)0);

 if (VAR_0) {
  VAR_3 = VAR_0->private;
  FUNC_1(&VAR_3->inilock);
  VAR_3->tfcp_req = ((void*)0);
  FUNC_2(&VAR_3->inilock);

  VAR_0->status = VAR_2;
  VAR_0->done(VAR_0);
 }


 FUNC_0(VAR_1);
}
