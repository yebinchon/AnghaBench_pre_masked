
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_id; } ;
union bfi_cee_i2h_msg_u {TYPE_1__ mh; } ;
struct bfi_mbmsg {int dummy; } ;
struct bfi_cee_get_rsp {int cmd_status; } ;
struct bfa_cee {int dummy; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_cee*,int ) ;
 int FUNC_2 (struct bfa_cee*,int ) ;
 int FUNC_3 (struct bfa_cee*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0, struct bfi_mbmsg *VAR_1)
{
 union bfi_cee_i2h_msg_u *VAR_2;
 struct bfi_cee_get_rsp *VAR_3;
 struct bfa_cee *VAR_4 = (struct bfa_cee *) VAR_0;
 VAR_2 = (union bfi_cee_i2h_msg_u *) VAR_1;
 VAR_3 = (struct bfi_cee_get_rsp *) VAR_1;
 switch (VAR_2->mh.msg_id) {
 case 130:
  FUNC_1(VAR_4, VAR_3->cmd_status);
  break;
 case 129:
  FUNC_2(VAR_4, VAR_3->cmd_status);
  break;
 case 128:
  FUNC_3(VAR_4, VAR_3->cmd_status);
  break;
 default:
  FUNC_0(1);
 }
}
