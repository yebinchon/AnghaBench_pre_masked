
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum brcm_sata_phy_rxaeq_mode { ____Placeholder_brcm_sata_phy_rxaeq_mode } brcm_sata_phy_rxaeq_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static enum brcm_sata_phy_rxaeq_mode FUNC_1(const char *VAR_3)
{
 if (!FUNC_0(VAR_3, "auto"))
  return VAR_0;
 else if (!FUNC_0(VAR_3, "manual"))
  return VAR_1;
 else
  return VAR_2;
}
