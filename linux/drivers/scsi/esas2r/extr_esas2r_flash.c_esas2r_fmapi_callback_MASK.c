
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct esas2r_request {scalar_t__ req_stat; int (* interrupt_cb ) (struct esas2r_adapter*,struct esas2r_request*) ;scalar_t__ interrupt_cx; TYPE_2__* vrq; } ;
struct TYPE_3__ {int * cur_offset; } ;
struct esas2r_flash_context {int (* interrupt_cb ) (struct esas2r_adapter*,struct esas2r_request*) ;TYPE_1__ sgc; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_vda_flash_req {int sub_func; } ;
struct TYPE_4__ {struct atto_vda_flash_req flash; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;

__attribute__((used)) static void FUNC_1(struct esas2r_adapter *VAR_3,
      struct esas2r_request *VAR_4)
{
 struct atto_vda_flash_req *VAR_5 = &VAR_4->vrq->flash;
 struct esas2r_flash_context *VAR_6 =
  (struct esas2r_flash_context *)VAR_4->interrupt_cx;

 if (VAR_4->req_stat == VAR_1) {

  switch (VAR_5->sub_func) {
  case 129:
   if (VAR_6->sgc.cur_offset == ((void*)0))
    goto commit;

   VAR_5->sub_func = 128;
   VAR_4->req_stat = VAR_0;
   break;

  case 128:
commit:
   VAR_5->sub_func = VAR_2;
   VAR_4->req_stat = VAR_0;
   VAR_4->interrupt_cb = VAR_6->interrupt_cb;
   break;

  default:
   break;
  }
 }

 if (VAR_4->req_stat != VAR_0)





  (*VAR_6->interrupt_cb)(VAR_3, VAR_4);
}
