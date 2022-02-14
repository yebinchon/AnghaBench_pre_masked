
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int need_reset; int card_exist; scalar_t__ xd_show_cnt; scalar_t__ sd_show_cnt; scalar_t__ ms_show_cnt; scalar_t__ chip_insert_with_sdio; } ;


 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*,int) ;
 int FUNC_8 (struct rtsx_chip*,int ) ;
 int FUNC_9 (struct rtsx_chip*,int ,int ,int ) ;

void FUNC_10(struct rtsx_chip *VAR_12)
{
 if (!VAR_12->need_reset)
  return;

 FUNC_8(VAR_12, VAR_7);

 FUNC_7(VAR_12, VAR_10 | VAR_3);

 FUNC_6(VAR_12);

 if ((VAR_12->need_reset & VAR_8) && VAR_12->chip_insert_with_sdio)
  FUNC_2(VAR_9, &VAR_12->need_reset);

 if (VAR_12->need_reset & VAR_11) {
  VAR_12->card_exist |= VAR_11;

  if (VAR_12->xd_show_cnt >= VAR_0)
   FUNC_5(VAR_12);
  else
   VAR_12->xd_show_cnt++;
 }
 if (FUNC_1(VAR_12, 0x5288) && FUNC_0(VAR_12, VAR_4)) {
  if (VAR_12->card_exist & VAR_11) {
   FUNC_2(VAR_9, &VAR_12->need_reset);
   FUNC_2(VAR_2, &VAR_12->need_reset);
  }
 }
 if (VAR_12->need_reset & VAR_8) {
  VAR_12->card_exist |= VAR_8;

  if (VAR_12->sd_show_cnt >= VAR_0) {
   FUNC_9(VAR_12, VAR_5, VAR_6, VAR_6);
   FUNC_4(VAR_12);
  } else {
   VAR_12->sd_show_cnt++;
  }
 }
 if (VAR_12->need_reset & VAR_1) {
  VAR_12->card_exist |= VAR_1;

  if (VAR_12->ms_show_cnt >= VAR_0)
   FUNC_3(VAR_12);
  else
   VAR_12->ms_show_cnt++;
 }
}
