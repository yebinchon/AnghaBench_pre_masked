
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {int req_fc_auto_adv; struct bnx2x* bp; } ;
struct bnx2x_phy {int req_flow_ctrl; } ;
struct bnx2x {int dummy; } ;







 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct bnx2x_phy *VAR_5,
         struct link_params *VAR_6, u16 *VAR_7)
{
 struct bnx2x *VAR_8 = VAR_6->bp;
 *VAR_7 = VAR_0;




 switch (VAR_5->req_flow_ctrl) {
 case 132:
  switch (VAR_6->req_fc_auto_adv) {
  case 131:
  case 129:
   *VAR_7 |= VAR_2;
   break;
  case 128:
   *VAR_7 |=
    VAR_1;
   break;
  default:
   break;
  }
  break;
 case 128:
  *VAR_7 |= VAR_1;
  break;

 case 129:
 case 131:
  *VAR_7 |= VAR_2;
  break;

 case 130:
 default:
  *VAR_7 |= VAR_3;
  break;
 }
 FUNC_0(VAR_4, "ieee_fc = 0x%x\n", *VAR_7);
}
