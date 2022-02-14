
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssusb_mtk {int ippc_base; } ;
typedef enum mtu3_dr_force_mode { ____Placeholder_mtu3_dr_force_mode } mtu3_dr_force_mode ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(struct ssusb_mtk *VAR_2,
     enum mtu3_dr_force_mode VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2->ippc_base, FUNC_0(0));
 switch (VAR_3) {
 case 130:
  VAR_4 |= VAR_0 | VAR_1;
  break;
 case 129:
  VAR_4 |= VAR_0;
  VAR_4 &= ~VAR_1;
  break;
 case 128:
  VAR_4 &= ~(VAR_0 | VAR_1);
  break;
 default:
  return;
 }
 FUNC_2(VAR_2->ippc_base, FUNC_0(0), VAR_4);
}
