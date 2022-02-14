
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_fsf_req {int pool; struct zfcp_fsf_req* qtcb; TYPE_2__* adapter; } ;
struct TYPE_3__ {int qtcb_pool; } ;
struct TYPE_4__ {TYPE_1__ pool; } ;


 int FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (int ,struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct zfcp_fsf_req*,int) ;
 int VAR_0 ;
 int FUNC_4 (struct zfcp_fsf_req*) ;

void FUNC_5(struct zfcp_fsf_req *VAR_1)
{
 if (FUNC_2(VAR_1->pool)) {
  if (FUNC_2(!FUNC_4(VAR_1)))
   FUNC_3(VAR_1->qtcb, VAR_1->adapter->pool.qtcb_pool);
  FUNC_3(VAR_1, VAR_1->pool);
  return;
 }

 if (FUNC_2(!FUNC_4(VAR_1)))
  FUNC_1(VAR_0, VAR_1->qtcb);
 FUNC_0(VAR_1);
}
