
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {scalar_t__ asic_code; scalar_t__ aspm_enabled; scalar_t__ dynamic_aspm; scalar_t__ aspm_l0s_l1_en; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int) ;
 int FUNC_5 (struct rtsx_chip*,int,int) ;
 int FUNC_6 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_7 (int) ;

void FUNC_8(struct rtsx_chip *VAR_2)
{
 if (FUNC_0(VAR_2, 0x5208))
  FUNC_3(VAR_2);

 if (VAR_2->aspm_l0s_l1_en && VAR_2->dynamic_aspm && VAR_2->aspm_enabled) {
  FUNC_1(FUNC_2(VAR_2), "Try to disable ASPM\n");
  VAR_2->aspm_enabled = 0;

  if (VAR_2->asic_code && FUNC_0(VAR_2, 0x5208))
   FUNC_5(VAR_2, 0x07, 0x0129);
  if (FUNC_0(VAR_2, 0x5208))
   FUNC_6(VAR_2, VAR_0,
         0xF3, 0x30);
  else
   FUNC_4(VAR_2, VAR_1, 0x00);

  FUNC_7(1);
 }
}
