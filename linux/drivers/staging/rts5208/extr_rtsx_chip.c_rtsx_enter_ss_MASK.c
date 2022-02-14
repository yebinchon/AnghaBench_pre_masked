
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_chip {int phy_debug_mode; scalar_t__ auto_delink_en; scalar_t__ power_down_in_ss; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct rtsx_chip*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*,int) ;
 int FUNC_7 (struct rtsx_chip*) ;
 int FUNC_8 (struct rtsx_chip*,int ) ;
 int FUNC_9 (struct rtsx_chip*,int ) ;
 int FUNC_10 (struct rtsx_chip*,int,int,int,int) ;
 int FUNC_11 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_12 (struct rtsx_chip*,int ,int ) ;

void FUNC_13(struct rtsx_chip *VAR_9)
{
 FUNC_3(FUNC_4(VAR_9), "Enter Selective Suspend State!\n");

 FUNC_11(VAR_9, VAR_3, VAR_4, VAR_4);

 if (VAR_9->power_down_in_ss) {
  FUNC_7(VAR_9);
  FUNC_6(VAR_9, VAR_8 | VAR_5);
 }

 if (FUNC_1(VAR_9))
  FUNC_10(VAR_9, FUNC_0(VAR_9, 0x5288) ? 2 : 1,
      0xC0, 0xFF00, 0x0100);

 if (VAR_9->auto_delink_en) {
  FUNC_11(VAR_9, VAR_2, 0x01, 0x01);
 } else {
  if (!VAR_9->phy_debug_mode) {
   u32 VAR_10;

   VAR_10 = FUNC_8(VAR_9, VAR_6);
   VAR_10 |= VAR_0;
   FUNC_12(VAR_9, VAR_6, VAR_10);
  }

  FUNC_11(VAR_9, VAR_1, 0x02, 0);
 }

 FUNC_5(VAR_9);

 FUNC_2(VAR_9);
 FUNC_9(VAR_9, VAR_7);
}
