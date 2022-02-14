
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct esas2r_request {scalar_t__ req_stat; int (* comp_cb ) (struct esas2r_adapter*,struct esas2r_request*) ;TYPE_3__* vrq; int (* interrupt_cb ) (struct esas2r_adapter*,struct esas2r_request*) ;} ;
struct esas2r_adapter {int flags; } ;
struct TYPE_5__ {scalar_t__ function; } ;
struct TYPE_4__ {scalar_t__ sub_func; } ;
struct TYPE_6__ {TYPE_2__ scsi; TYPE_1__ flash; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_2 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_3 (struct esas2r_adapter*,struct esas2r_request*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_6 (struct esas2r_adapter*,struct esas2r_request*) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct esas2r_adapter *VAR_6,
        struct esas2r_request *VAR_7)
{
 if (VAR_7->vrq->scsi.function == VAR_4
     && VAR_7->vrq->flash.sub_func == VAR_3)
  FUNC_0(VAR_0, &VAR_6->flags);



 if (VAR_7->interrupt_cb) {
  (*VAR_7->interrupt_cb)(VAR_6, VAR_7);

  if (VAR_7->req_stat == VAR_1) {
   FUNC_3(VAR_6, VAR_7);
   return;
  }
 }

 if (FUNC_4(VAR_7->vrq->scsi.function == VAR_5)
     && FUNC_7(VAR_7->req_stat != VAR_2)) {
  FUNC_1(VAR_6, VAR_7);
  FUNC_2(VAR_6, VAR_7);
 }

 (*VAR_7->comp_cb)(VAR_6, VAR_7);
}
