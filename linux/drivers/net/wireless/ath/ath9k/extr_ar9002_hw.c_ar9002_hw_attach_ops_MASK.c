
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_private_ops {int init_hang_checks; int init_mode_gain_regs; } ;
struct ath_hw_ops {int config_pci_powersave; } ;
struct ath_hw {int dummy; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct ath_hw*) ;
 struct ath_hw_ops* FUNC_6 (struct ath_hw*) ;
 struct ath_hw_private_ops* FUNC_7 (struct ath_hw*) ;

int FUNC_8(struct ath_hw *VAR_3)
{
 struct ath_hw_private_ops *VAR_4 = FUNC_7(VAR_3);
 struct ath_hw_ops *VAR_5 = FUNC_6(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_4->init_mode_gain_regs = VAR_2;
 VAR_4->init_hang_checks = VAR_1;

 VAR_5->config_pci_powersave = VAR_0;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6)
  return VAR_6;

 if (FUNC_0(VAR_3))
  FUNC_4(VAR_3);

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 return 0;
}
