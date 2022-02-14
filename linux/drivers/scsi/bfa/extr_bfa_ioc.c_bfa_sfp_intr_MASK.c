
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_id; } ;
struct bfi_mbmsg_s {TYPE_1__ mh; } ;
struct bfa_sfp_s {int dummy; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_sfp_s*,struct bfi_mbmsg_s*) ;
 int FUNC_2 (struct bfa_sfp_s*,struct bfi_mbmsg_s*) ;
 int FUNC_3 (struct bfa_sfp_s*,int) ;

void
FUNC_4(void *VAR_0, struct bfi_mbmsg_s *VAR_1)
{
 struct bfa_sfp_s *VAR_2 = VAR_0;

 switch (VAR_1->mh.msg_id) {
 case 128:
  FUNC_2(VAR_2, VAR_1);
  break;

 case 129:
  FUNC_1(VAR_2, VAR_1);
  break;

 default:
  FUNC_3(VAR_2, VAR_1->mh.msg_id);
  FUNC_0(1);
 }
}
