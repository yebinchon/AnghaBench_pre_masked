
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int auto_delink_cnt; scalar_t__ card_exist; scalar_t__ asic_code; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int,int) ;
 int FUNC_5 (struct rtsx_chip*,int ) ;
 int FUNC_6 (struct rtsx_chip*,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct rtsx_chip *VAR_3, int VAR_4,
          int VAR_5)
{
 u8 VAR_6;

 FUNC_5(VAR_3, VAR_2);

 if (VAR_3->asic_code && FUNC_0(VAR_3, 0x5208))
  FUNC_4(VAR_3, 0x1C, 2);

 if (VAR_3->card_exist)
  FUNC_1(FUNC_2(VAR_3), "False card inserted, do force delink\n");
 else
  FUNC_1(FUNC_2(VAR_3), "No card inserted, do delink\n");

 if (VAR_4)
  FUNC_6(VAR_3, VAR_1, 0x03, 1);

 if (VAR_3->card_exist)
  VAR_6 = 0x02;
 else
  VAR_6 = 0x0A;

 FUNC_6(VAR_3, VAR_0, VAR_6, VAR_6);

 if (VAR_4)
  FUNC_3(VAR_3);

 if (VAR_3->card_exist)
  VAR_3->auto_delink_cnt = VAR_5 + 1;
}
