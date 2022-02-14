
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtsx_cr_option {int ltr_l1off_sspwrgate; int ltr_l1off_snooze_sspwrgate; } ;
struct rtsx_pcr {struct rtsx_cr_option option; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtsx_pcr*,int ) ;
 int FUNC_1 (struct rtsx_pcr*,int ) ;
 int FUNC_2 (struct rtsx_pcr*,int ) ;

__attribute__((used)) static void FUNC_3(struct rtsx_pcr *VAR_7, int VAR_8)
{
 struct rtsx_cr_option *VAR_9 = &VAR_7->option;
 u32 VAR_10 = FUNC_1(VAR_7, VAR_5);
 int VAR_11 = (VAR_10 & VAR_6) | (VAR_10 & VAR_4);
 int VAR_12, VAR_13;
 u8 VAR_14 = 0;

 VAR_12 = FUNC_0(VAR_7, VAR_0);
 VAR_13 = FUNC_0(VAR_7, VAR_1);

 if (VAR_8) {

  if (VAR_12)
   VAR_14 = VAR_9->ltr_l1off_snooze_sspwrgate;
 } else {

  if (VAR_13)
   VAR_14 = VAR_9->ltr_l1off_sspwrgate;
 }

 if (VAR_12 || VAR_13) {
  if (FUNC_0(VAR_7,
     VAR_3)) {
   if (VAR_11)
    VAR_14 &= ~VAR_2;
   else
    VAR_14 |= VAR_2;
  }
 }
 FUNC_2(VAR_7, VAR_14);
}
