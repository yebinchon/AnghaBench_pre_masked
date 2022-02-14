
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc18xx_eeprom_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (struct lpc18xx_eeprom_dev*,int ) ;
 int FUNC_1 (struct lpc18xx_eeprom_dev*,int ,int ) ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct lpc18xx_eeprom_dev *VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10;


 VAR_9 = VAR_7 + FUNC_2(VAR_5 * 10);

 while (FUNC_3(VAR_9)) {
  VAR_10 = FUNC_0(VAR_8, VAR_1);

  if (VAR_10 & VAR_4) {
   FUNC_1(VAR_8, VAR_2,
     VAR_3);
   return 0;
  }

  FUNC_4(VAR_5 * VAR_6,
        (VAR_5 + 1) * VAR_6);
 }

 return -VAR_0;
}
