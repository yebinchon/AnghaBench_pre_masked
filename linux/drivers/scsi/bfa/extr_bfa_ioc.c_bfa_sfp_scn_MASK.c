
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_sfp_scn_s {int event; } ;
struct bfi_mbmsg_s {int dummy; } ;
struct bfa_sfp_s {int lock; int state; int data_valid; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_sfp_s*,int ) ;
 int FUNC_2 (struct bfa_sfp_s*,struct bfi_sfp_scn_s*) ;
 int FUNC_3 (struct bfa_sfp_s*,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_sfp_s *VAR_6, struct bfi_mbmsg_s *VAR_7)
{
 struct bfi_sfp_scn_s *VAR_8 = (struct bfi_sfp_scn_s *) VAR_7;

 switch (VAR_8->event) {
 case 132:
  VAR_6->state = VAR_1;
  VAR_6->data_valid = 0;
  FUNC_2(VAR_6, VAR_8);
  break;
 case 130:
  VAR_6->state = VAR_2;
  VAR_6->data_valid = 0;
  FUNC_2(VAR_6, VAR_8);
  break;
 case 133:
  VAR_6->state = VAR_0;
  VAR_6->data_valid = 0;
  FUNC_2(VAR_6, VAR_8);
  break;
 case 129:
  VAR_6->state = VAR_3;
  FUNC_2(VAR_6, VAR_8);
  if (!VAR_6->lock)
   FUNC_1(VAR_6, VAR_5);
  break;
 case 131:
  FUNC_2(VAR_6, VAR_8);
  break;
 case 128:
  VAR_6->state = VAR_4;
  if (!VAR_6->lock)
   FUNC_1(VAR_6, VAR_5);
  break;
 default:
  FUNC_3(VAR_6, VAR_8->event);
  FUNC_0(1);
 }
}
