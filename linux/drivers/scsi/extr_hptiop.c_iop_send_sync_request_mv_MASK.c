
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ internal_req_phy; struct hpt_iop_request_header* internal_req; } ;
struct TYPE_3__ {TYPE_2__ mv; } ;
struct hptiop_hba {scalar_t__ msg_done; TYPE_1__ u; } ;
struct hpt_iop_request_header {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hptiop_hba*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,struct hptiop_hba*) ;

__attribute__((used)) static int FUNC_4(struct hptiop_hba *VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 struct hpt_iop_request_header *VAR_5 = VAR_2->u.mv.internal_req;
 u32 VAR_6;

 VAR_2->msg_done = 0;
 VAR_5->flags |= FUNC_0(VAR_0);
 FUNC_3(VAR_2->u.mv.internal_req_phy |
   VAR_1 | VAR_3, VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  FUNC_1(VAR_2);
  if (VAR_2->msg_done)
   return 0;
  FUNC_2(1);
 }
 return -1;
}
