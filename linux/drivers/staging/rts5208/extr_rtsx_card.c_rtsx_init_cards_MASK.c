
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int need_release; int int_reg; int card_exist; int ocp_stat; int card_ejected; int card_fail; size_t* card2lun; scalar_t__ need_reinit; scalar_t__ need_reset; scalar_t__* rw_fail_cnt; int lun_mc; int sd_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*,int) ;
 int FUNC_2 (int ,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct rtsx_chip*) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_4 (struct rtsx_chip*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (struct rtsx_chip*,scalar_t__*,int*) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct rtsx_chip*) ;
 int FUNC_9 (struct rtsx_chip*) ;
 int FUNC_10 (struct rtsx_chip*) ;
 int FUNC_11 (struct rtsx_chip*) ;
 int FUNC_12 (struct rtsx_chip*) ;
 int FUNC_13 (struct rtsx_chip*,int) ;
 scalar_t__ FUNC_14 (struct rtsx_chip*) ;
 int FUNC_15 (struct rtsx_chip*,int ) ;
 int FUNC_16 (struct rtsx_chip*) ;
 int FUNC_17 (struct rtsx_chip*) ;
 int FUNC_18 (struct rtsx_chip*,int ) ;
 int FUNC_19 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_20 (struct rtsx_chip*,int ) ;

void FUNC_21(struct rtsx_chip *VAR_21)
{
 if (FUNC_4(VAR_21) && (FUNC_14(VAR_21) != VAR_14)) {
  FUNC_7(FUNC_12(VAR_21), "Reset chip in polling thread!\n");
  FUNC_17(VAR_21);
  FUNC_3(VAR_21);
 }





 if (VAR_21->need_release) {
  if (FUNC_1(VAR_21, 0x5288) && FUNC_0(VAR_21, VAR_10)) {
   if (VAR_21->int_reg & VAR_19) {
    FUNC_6(VAR_16, &VAR_21->need_release);
    FUNC_6(VAR_7, &VAR_21->need_release);
   }
  }

  if (!(VAR_21->card_exist & VAR_15) && !VAR_21->sd_io)
   FUNC_6(VAR_16, &VAR_21->need_release);
  if (!(VAR_21->card_exist & VAR_18))
   FUNC_6(VAR_20, &VAR_21->need_release);
  if (!(VAR_21->card_exist & VAR_6))
   FUNC_6(VAR_7, &VAR_21->need_release);

  FUNC_7(FUNC_12(VAR_21), "chip->need_release = 0x%x\n",
   (unsigned int)(VAR_21->need_release));
  if (VAR_21->need_release) {
   FUNC_18(VAR_21, VAR_13);
   FUNC_13(VAR_21, VAR_17 | VAR_9);
  }

  if (VAR_21->need_release & VAR_15) {
   FUNC_6(VAR_16, &VAR_21->need_release);
   VAR_21->card_exist &= ~VAR_15;
   VAR_21->card_ejected &= ~VAR_15;
   VAR_21->card_fail &= ~VAR_15;
   FUNC_2(VAR_21->lun_mc, VAR_21->card2lun[VAR_15]);
   VAR_21->rw_fail_cnt[VAR_21->card2lun[VAR_15]] = 0;
   FUNC_19(VAR_21, VAR_11, VAR_12, VAR_12);

   FUNC_10(VAR_21);
   FUNC_9(VAR_21);
  }

  if (VAR_21->need_release & VAR_18) {
   FUNC_6(VAR_20, &VAR_21->need_release);
   VAR_21->card_exist &= ~VAR_18;
   VAR_21->card_ejected &= ~VAR_18;
   VAR_21->card_fail &= ~VAR_18;
   FUNC_2(VAR_21->lun_mc, VAR_21->card2lun[VAR_18]);
   VAR_21->rw_fail_cnt[VAR_21->card2lun[VAR_18]] = 0;

   FUNC_11(VAR_21);

   if (FUNC_1(VAR_21, 0x5288) &&
       FUNC_0(VAR_21, VAR_10))
    FUNC_19(VAR_21, VAR_4,
          0xC0, 0xC0);
  }

  if (VAR_21->need_release & VAR_6) {
   FUNC_6(VAR_7, &VAR_21->need_release);
   VAR_21->card_exist &= ~VAR_6;
   VAR_21->card_ejected &= ~VAR_6;
   VAR_21->card_fail &= ~VAR_6;
   FUNC_2(VAR_21->lun_mc, VAR_21->card2lun[VAR_6]);
   VAR_21->rw_fail_cnt[VAR_21->card2lun[VAR_6]] = 0;

   FUNC_8(VAR_21);
  }

  FUNC_7(FUNC_12(VAR_21), "chip->card_exist = 0x%x\n",
   VAR_21->card_exist);

  if (!VAR_21->card_exist)
   FUNC_20(VAR_21, VAR_5);
 }

 if (VAR_21->need_reset) {
  FUNC_7(FUNC_12(VAR_21), "chip->need_reset = 0x%x\n",
   (unsigned int)(VAR_21->need_reset));

  FUNC_16(VAR_21);
 }

 if (VAR_21->need_reinit) {
  FUNC_7(FUNC_12(VAR_21), "chip->need_reinit = 0x%x\n",
   (unsigned int)(VAR_21->need_reinit));

  FUNC_15(VAR_21, 0);
 }
}
