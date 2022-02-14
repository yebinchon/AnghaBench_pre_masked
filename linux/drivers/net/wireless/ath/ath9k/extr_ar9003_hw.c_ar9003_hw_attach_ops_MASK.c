
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hw_private_ops {int detect_mac_hang; int init_hang_checks; int init_mode_gain_regs; } ;
struct ath_hw_ops {int config_pci_powersave; } ;
struct TYPE_4__ {int ia_array; } ;
struct TYPE_3__ {int ia_array; } ;
struct ath_hw {TYPE_2__ iniPcieSerdesLowPower; TYPE_1__ iniPcieSerdes; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct ath_hw*) ;
 struct ath_hw_ops* FUNC_7 (struct ath_hw*) ;
 struct ath_hw_private_ops* FUNC_8 (struct ath_hw*) ;

void FUNC_9(struct ath_hw *VAR_4)
{
 struct ath_hw_private_ops *VAR_5 = FUNC_8(VAR_4);
 struct ath_hw_ops *VAR_6 = FUNC_7(VAR_4);

 FUNC_6(VAR_4);

 if (FUNC_0(VAR_4)) {
  FUNC_1(!VAR_4->iniPcieSerdes.ia_array);
  FUNC_1(!VAR_4->iniPcieSerdesLowPower.ia_array);
 }

 VAR_5->init_mode_gain_regs = VAR_3;
 VAR_5->init_hang_checks = VAR_2;
 VAR_5->detect_mac_hang = VAR_1;

 VAR_6->config_pci_powersave = VAR_0;

 FUNC_5(VAR_4);
 FUNC_3(VAR_4);
 FUNC_4(VAR_4);
 FUNC_2(VAR_4);
}
