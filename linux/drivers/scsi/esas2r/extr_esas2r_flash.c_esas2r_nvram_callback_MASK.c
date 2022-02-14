
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esas2r_request {scalar_t__ req_stat; TYPE_1__* vrq; } ;
struct esas2r_adapter {int nvram_semaphore; int flags; } ;
struct atto_vda_flash_req {int sub_func; } ;
struct TYPE_2__ {struct atto_vda_flash_req flash; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (struct esas2r_adapter*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct esas2r_adapter *VAR_3,
      struct esas2r_request *VAR_4)
{
 struct atto_vda_flash_req *VAR_5 = &VAR_4->vrq->flash;

 if (VAR_4->req_stat == VAR_2) {


  switch (VAR_5->sub_func) {
  case 131:
   VAR_5->sub_func = 128;
   VAR_4->req_stat = VAR_1;
   break;

  case 128:
   VAR_5->sub_func = 130;
   VAR_4->req_stat = VAR_1;
   break;

  case 129:
   FUNC_2(VAR_3);
   break;

  case 130:
  default:
   break;
  }
 }

 if (VAR_4->req_stat != VAR_1) {

  if (VAR_4->req_stat == VAR_2)
   FUNC_3(VAR_0, &VAR_3->flags);
  else
   FUNC_0(VAR_0, &VAR_3->flags);

  FUNC_1(VAR_3);

  FUNC_4(&VAR_3->nvram_semaphore);
 }
}
