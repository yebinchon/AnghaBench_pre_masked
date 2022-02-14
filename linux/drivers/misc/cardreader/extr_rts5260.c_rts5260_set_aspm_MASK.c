
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_cr_option {scalar_t__ dev_aspm_mode; } ;
struct rtsx_pcr {int aspm_enabled; int aspm_en; scalar_t__ pcie_cap; struct rtsx_cr_option option; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct rtsx_pcr*,scalar_t__,int ,int) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtsx_pcr *VAR_7, bool VAR_8)
{
 struct rtsx_cr_option *VAR_9 = &VAR_7->option;
 u8 VAR_10 = 0;

 if (VAR_7->aspm_enabled == VAR_8)
  return;

 if (VAR_9->dev_aspm_mode == VAR_3) {
  if (VAR_8)
   VAR_10 = VAR_7->aspm_en;
  FUNC_0(VAR_7, VAR_7->pcie_cap + VAR_6,
      VAR_1, VAR_10);
 } else if (VAR_9->dev_aspm_mode == VAR_2) {
  u8 VAR_11 = VAR_5 | VAR_4;

  if (!VAR_8)
   VAR_10 = VAR_4;
  FUNC_1(VAR_7, VAR_0, VAR_11, VAR_10);
 }

 VAR_7->aspm_enabled = VAR_8;
}
