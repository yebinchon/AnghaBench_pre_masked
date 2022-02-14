
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int auto_delink_cnt; int delink_stage1_step; int delink_stage2_step; int delink_stage3_step; scalar_t__ asic_code; scalar_t__ ss_en; scalar_t__ aspm_l0s_l1_en; scalar_t__ auto_delink_in_L1; scalar_t__ sd_io; scalar_t__ card_ejected; scalar_t__ card_ready; int auto_delink_allowed; int auto_delink_en; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct rtsx_chip*,int,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int,int) ;
 int FUNC_6 (struct rtsx_chip*,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct rtsx_chip *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 int VAR_5;

 if (!VAR_1->auto_delink_en || !VAR_1->auto_delink_allowed ||
     VAR_1->card_ready || VAR_1->card_ejected || VAR_1->sd_io) {
  VAR_1->auto_delink_cnt = 0;
  return;
 }

 VAR_5 = VAR_1->auto_delink_in_L1 &&
  (VAR_1->aspm_l0s_l1_en || VAR_1->ss_en);

 VAR_2 = VAR_1->delink_stage1_step;
 VAR_3 = VAR_2 + VAR_1->delink_stage2_step;
 VAR_4 = VAR_3 + VAR_1->delink_stage3_step;

 if (VAR_1->auto_delink_cnt > VAR_4)
  return;

 if (VAR_1->auto_delink_cnt == VAR_2)
  FUNC_2(VAR_1, VAR_5, VAR_4);

 if (VAR_1->auto_delink_cnt == VAR_3) {
  FUNC_1(FUNC_3(VAR_1), "Try to do force delink\n");

  if (VAR_5)
   FUNC_4(VAR_1);

  if (VAR_1->asic_code && FUNC_0(VAR_1, 0x5208))
   FUNC_5(VAR_1, 0x1C, 2);

  FUNC_6(VAR_1, VAR_0, 0x0A, 0x0A);
 }

 VAR_1->auto_delink_cnt++;
}
