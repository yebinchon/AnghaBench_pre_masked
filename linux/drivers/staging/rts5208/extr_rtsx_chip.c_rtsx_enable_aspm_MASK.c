
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtsx_chip {int aspm_l0s_l1_en; int aspm_enabled; int* aspm_level; scalar_t__ asic_code; scalar_t__ dynamic_aspm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int,int,int,int) ;
 int FUNC_5 (struct rtsx_chip*,int ,int) ;
 int FUNC_6 (struct rtsx_chip*,int,int ) ;
 int FUNC_7 (struct rtsx_chip*,int ,int,int) ;

void FUNC_8(struct rtsx_chip *VAR_2)
{
 if (VAR_2->aspm_l0s_l1_en && VAR_2->dynamic_aspm && !VAR_2->aspm_enabled) {
  FUNC_2(FUNC_3(VAR_2), "Try to enable ASPM\n");
  VAR_2->aspm_enabled = 1;

  if (VAR_2->asic_code && FUNC_0(VAR_2, 0x5208))
   FUNC_6(VAR_2, 0x07, 0);
  if (FUNC_0(VAR_2, 0x5208)) {
   FUNC_7(VAR_2, VAR_0, 0xF3,
         0x30 | VAR_2->aspm_level[0]);
  } else {
   FUNC_5(VAR_2, VAR_1,
            VAR_2->aspm_l0s_l1_en);
  }

  if (FUNC_1(VAR_2)) {
   u16 VAR_3 = VAR_2->aspm_l0s_l1_en | 0x0100;

   FUNC_4(VAR_2, FUNC_0(VAR_2, 0x5288) ? 2 : 1,
       0xC0, 0xFFF, VAR_3);
  }
 }
}
