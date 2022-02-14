
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_cr_option {scalar_t__ dev_aspm_mode; } ;
struct rtsx_pcr {int aspm_enabled; int aspm_en; struct rtsx_cr_option option; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtsx_pcr*) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rtsx_pcr *VAR_4, bool VAR_5)
{
 struct rtsx_cr_option *VAR_6 = &VAR_4->option;

 if (VAR_4->aspm_enabled == VAR_5)
  return;

 if (VAR_6->dev_aspm_mode == VAR_2) {
  if (VAR_5)
   FUNC_1(VAR_4);
  else
   FUNC_0(VAR_4);
 } else if (VAR_6->dev_aspm_mode == VAR_1) {
  u8 VAR_7 = VAR_3;
  u8 VAR_8 = 0;

  if (VAR_5)
   VAR_8 = VAR_4->aspm_en;
  FUNC_2(VAR_4, VAR_0, VAR_7, VAR_8);
 }

 VAR_4->aspm_enabled = VAR_5;
}
