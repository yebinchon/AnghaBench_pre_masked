
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {struct hpt_iop_request_header* req_virt; } ;
struct TYPE_6__ {TYPE_4__ internal_req; } ;
struct TYPE_7__ {TYPE_2__ mvfrey; } ;
struct hptiop_hba {scalar_t__ msg_done; TYPE_3__ u; TYPE_1__* ops; } ;
struct hpt_iop_request_header {int flags; } ;
struct TYPE_5__ {int (* post_req ) (struct hptiop_hba*,TYPE_4__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hptiop_hba*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct hptiop_hba*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(struct hptiop_hba *VAR_1,
     u32 VAR_2, u32 VAR_3)
{
 struct hpt_iop_request_header *VAR_4 =
  VAR_1->u.mvfrey.internal_req.req_virt;
 u32 VAR_5;

 VAR_1->msg_done = 0;
 VAR_4->flags |= FUNC_0(VAR_0);
 VAR_1->ops->post_req(VAR_1, &(VAR_1->u.mvfrey.internal_req));

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  FUNC_1(VAR_1);
  if (VAR_1->msg_done)
   break;
  FUNC_2(1);
 }
 return VAR_1->msg_done ? 0 : -1;
}
