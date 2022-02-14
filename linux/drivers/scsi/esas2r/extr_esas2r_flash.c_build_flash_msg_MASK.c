
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct esas2r_sg_context {scalar_t__ length; scalar_t__ cur_offset; } ;
struct esas2r_request {int req_stat; TYPE_3__* vrq; int interrupt_cb; scalar_t__ interrupt_cx; } ;
struct esas2r_flash_context {scalar_t__ func; scalar_t__ curr_len; int flsh_addr; struct esas2r_sg_context sgc; int interrupt_cb; } ;
struct esas2r_adapter {int dummy; } ;
struct TYPE_4__ {int * sge; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__ flash; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*,scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_request*,struct esas2r_sg_context*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct esas2r_request*,struct esas2r_adapter*) ;
 int FUNC_4 (struct esas2r_sg_context*,struct esas2r_adapter*,struct esas2r_request*,int *) ;

__attribute__((used)) static void FUNC_5(struct esas2r_adapter *VAR_3,
       struct esas2r_request *VAR_4)
{
 struct esas2r_flash_context *VAR_5 =
  (struct esas2r_flash_context *)VAR_4->interrupt_cx;
 struct esas2r_sg_context *VAR_6 = &VAR_5->sgc;
 u8 VAR_7 = 0;


 if (VAR_5->func == VAR_1) {
  if (VAR_6->cur_offset)
   VAR_7 = FUNC_2(VAR_6->cur_offset,
          VAR_6->length,
          0);
  VAR_4->interrupt_cb = VAR_2;
 } else {
  VAR_4->interrupt_cb = VAR_5->interrupt_cb;
 }
 FUNC_0(VAR_3,
          VAR_4,
          VAR_5->func,
          VAR_7,
          VAR_5->flsh_addr,
          VAR_6->length);

 FUNC_3(VAR_4, VAR_3);






 VAR_5->curr_len = VAR_5->sgc.length;

 if (VAR_6->cur_offset) {

  FUNC_4(VAR_6, VAR_3, VAR_4, &VAR_4->vrq->flash.data.sge[0]);

  if (!FUNC_1(VAR_3, VAR_4, VAR_6)) {
   VAR_4->req_stat = VAR_0;
   return;
  }
 } else {
  VAR_5->sgc.length = 0;
 }


 VAR_5->flsh_addr += VAR_5->curr_len;
}
