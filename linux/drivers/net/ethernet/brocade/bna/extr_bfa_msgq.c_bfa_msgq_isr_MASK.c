
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_id; } ;
struct bfi_mbmsg {TYPE_1__ mh; } ;
struct bfa_msgq {int cmdq; int rspq; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct bfi_mbmsg*) ;
 int FUNC_2 (int *,struct bfi_mbmsg*) ;
 int FUNC_3 (struct bfa_msgq*,struct bfi_mbmsg*) ;
 int FUNC_4 (int *,struct bfi_mbmsg*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, struct bfi_mbmsg *VAR_1)
{
 struct bfa_msgq *VAR_2 = (struct bfa_msgq *)VAR_0;

 switch (VAR_1->mh.msg_id) {
 case 128:
  FUNC_3(VAR_2, VAR_1);
  break;

 case 129:
  FUNC_4(&VAR_2->rspq, VAR_1);
  break;

 case 130:
  FUNC_1(&VAR_2->cmdq, VAR_1);
  break;

 case 131:
  FUNC_2(&VAR_2->cmdq, VAR_1);
  break;

 default:
  FUNC_0(1);
 }
}
