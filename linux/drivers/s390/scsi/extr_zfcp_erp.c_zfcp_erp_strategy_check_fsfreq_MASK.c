
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_fsf_req {int status; struct zfcp_erp_action* erp_action; } ;
struct zfcp_erp_action {int status; int fsf_req_id; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {TYPE_1__* req_list; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct zfcp_fsf_req* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,struct zfcp_erp_action*) ;

__attribute__((used)) static void FUNC_4(struct zfcp_erp_action *VAR_3)
{
 struct zfcp_adapter *VAR_4 = VAR_3->adapter;
 struct zfcp_fsf_req *VAR_5;

 if (!VAR_3->fsf_req_id)
  return;

 FUNC_1(&VAR_4->req_list->lock);
 VAR_5 = FUNC_0(VAR_4->req_list, VAR_3->fsf_req_id);
 if (VAR_5 && VAR_5->erp_action == VAR_3) {
  if (VAR_3->status & (VAR_0 |
       VAR_1)) {
   VAR_5->status |= VAR_2;
   FUNC_3("erscf_1", VAR_3);
   VAR_5->erp_action = ((void*)0);
  }
  if (VAR_3->status & VAR_1)
   FUNC_3("erscf_2", VAR_3);
  if (VAR_5->status & VAR_2)
   VAR_3->fsf_req_id = 0;
 } else
  VAR_3->fsf_req_id = 0;
 FUNC_2(&VAR_4->req_list->lock);
}
