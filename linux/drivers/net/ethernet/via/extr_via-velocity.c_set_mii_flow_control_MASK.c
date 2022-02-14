
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flow_cntl; } ;
struct velocity_info {int mac_regs; TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct velocity_info *VAR_3)
{

 switch (VAR_3->options.flow_cntl) {
 case 129:
  FUNC_0(VAR_1, VAR_2, VAR_3->mac_regs);
  FUNC_1(VAR_0, VAR_2, VAR_3->mac_regs);
  break;

 case 130:
  FUNC_1(VAR_1, VAR_2, VAR_3->mac_regs);
  FUNC_1(VAR_0, VAR_2, VAR_3->mac_regs);
  break;

 case 128:
  FUNC_1(VAR_1, VAR_2, VAR_3->mac_regs);
  FUNC_0(VAR_0, VAR_2, VAR_3->mac_regs);
  break;

 case 131:
  FUNC_0(VAR_1, VAR_2, VAR_3->mac_regs);
  FUNC_0(VAR_0, VAR_2, VAR_3->mac_regs);
  break;
 default:
  break;
 }
}
