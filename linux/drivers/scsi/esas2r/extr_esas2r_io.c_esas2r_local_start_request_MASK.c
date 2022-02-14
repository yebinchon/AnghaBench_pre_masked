
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sub_func; } ;
struct TYPE_4__ {scalar_t__ function; } ;
struct esas2r_request {int req_list; TYPE_2__ flash; struct esas2r_request* vrq; TYPE_1__ scsi; TYPE_3__* vrq_md; } ;
struct esas2r_adapter {int active_list; int flags; } ;
struct TYPE_6__ {struct esas2r_request* phys_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_1 (char*,struct esas2r_request*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct esas2r_adapter *VAR_3,
    struct esas2r_request *VAR_4)
{
 FUNC_2();
 FUNC_1("rq=%p", VAR_4);
 FUNC_1("rq->vrq:%p", VAR_4->vrq);
 FUNC_1("rq->vrq_md->phys_addr:%x", VAR_4->vrq_md->phys_addr);

 if (FUNC_6(VAR_4->vrq->scsi.function == VAR_2
       && VAR_4->vrq->flash.sub_func == VAR_1))
  FUNC_5(VAR_0, &VAR_3->flags);

 FUNC_4(&VAR_4->req_list, &VAR_3->active_list);
 FUNC_0(VAR_3, VAR_4);
 FUNC_3();
 return;
}
