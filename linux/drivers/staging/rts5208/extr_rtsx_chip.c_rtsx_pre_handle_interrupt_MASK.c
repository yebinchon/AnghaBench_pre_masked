
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_chip {int int_reg; int ocp_int; scalar_t__ sd_io; int need_reinit; int need_reset; scalar_t__ ms_show_cnt; scalar_t__ ms_reset_counter; int need_release; scalar_t__ xd_show_cnt; scalar_t__ xd_reset_counter; scalar_t__ sd_show_cnt; scalar_t__ sd_reset_counter; scalar_t__ auto_delink_cnt; scalar_t__ ss_counter; scalar_t__ ss_en; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
 int FUNC_1 (struct rtsx_chip*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct rtsx_chip*) ;
 scalar_t__ FUNC_4 (struct rtsx_chip*) ;
 void* FUNC_5 (struct rtsx_chip*,int ) ;
 int FUNC_6 (struct rtsx_chip*,int ) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct rtsx_chip *VAR_19)
{
 u32 VAR_20, VAR_21;
 bool VAR_22 = 0;






 if (VAR_19->ss_en) {
  VAR_19->ss_counter = 0;
  if (FUNC_4(VAR_19) == VAR_10) {
   VAR_22 = 1;
   FUNC_3(VAR_19);
   FUNC_6(VAR_19, VAR_9);
  }
 }

 VAR_21 = FUNC_5(VAR_19, VAR_7);
 VAR_19->int_reg = FUNC_5(VAR_19, VAR_8);

 if (((VAR_19->int_reg & VAR_21) == 0) ||
     (VAR_19->int_reg == 0xFFFFFFFF))
  return VAR_14;

 VAR_20 = VAR_19->int_reg &= (VAR_21 | 0x7FFFFF);

 if (VAR_20 & VAR_0) {
  VAR_19->auto_delink_cnt = 0;

  if (VAR_20 & VAR_12) {
   if (VAR_20 & VAR_11) {
    FUNC_7(VAR_13, &VAR_19->need_reset);
   } else {
    FUNC_7(VAR_13, &VAR_19->need_release);
    VAR_19->sd_reset_counter = 0;
    VAR_19->sd_show_cnt = 0;
    FUNC_2(VAR_13, &VAR_19->need_reset);
   }
  } else {







   if (VAR_22 && (VAR_20 & VAR_11))
    FUNC_7(VAR_13, &VAR_19->need_reinit);
  }
  if (!FUNC_1(VAR_19, 0x5288) || FUNC_0(VAR_19, VAR_6)) {
   if (VAR_20 & VAR_17) {
    if (VAR_20 & VAR_16) {
     FUNC_7(VAR_18, &VAR_19->need_reset);
    } else {
     FUNC_7(VAR_18, &VAR_19->need_release);
     VAR_19->xd_reset_counter = 0;
     VAR_19->xd_show_cnt = 0;
     FUNC_2(VAR_18, &VAR_19->need_reset);
    }
   } else {
    if (VAR_22 && (VAR_20 & VAR_16))
     FUNC_7(VAR_18, &VAR_19->need_reinit);
   }
  }
  if (VAR_20 & VAR_3) {
   if (VAR_20 & VAR_2) {
    FUNC_7(VAR_4, &VAR_19->need_reset);
   } else {
    FUNC_7(VAR_4, &VAR_19->need_release);
    VAR_19->ms_reset_counter = 0;
    VAR_19->ms_show_cnt = 0;
    FUNC_2(VAR_4, &VAR_19->need_reset);
   }
  } else {
   if (VAR_22 && (VAR_20 & VAR_2))
    FUNC_7(VAR_4, &VAR_19->need_reinit);
  }
 }





 if (VAR_19->sd_io && (VAR_19->int_reg & VAR_1))
  VAR_19->int_reg &= ~(u32)VAR_1;

 return VAR_15;
}
