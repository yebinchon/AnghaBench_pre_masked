
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mt76x02_dev {int dummy; } ;
typedef enum mt76x02_eeprom_modes { ____Placeholder_mt76x02_eeprom_modes } mt76x02_eeprom_modes ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int,int ,int) ;
 int FUNC_4 (struct mt76x02_dev*,int ) ;
 int FUNC_5 (struct mt76x02_dev*,int ,int) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct mt76x02_dev *VAR_6, u16 VAR_7, u8 *VAR_8,
     enum mt76x02_eeprom_modes VAR_9)
{
 u32 VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_6, VAR_1);
 VAR_10 &= ~(VAR_2 |
   VAR_5);
 VAR_10 |= FUNC_0(VAR_2, VAR_7 & ~0xf);
 VAR_10 |= FUNC_0(VAR_5, VAR_9);
 VAR_10 |= VAR_4;
 FUNC_5(VAR_6, VAR_1, VAR_10);

 if (!FUNC_3(VAR_6, VAR_1, VAR_4, 0, 1000))
  return -VAR_0;

 FUNC_7(2);

 VAR_10 = FUNC_4(VAR_6, VAR_1);
 if ((VAR_10 & VAR_3) == VAR_3) {
  FUNC_2(VAR_8, 0xff, 16);
  return 0;
 }

 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  VAR_10 = FUNC_4(VAR_6, FUNC_1(VAR_11));
  FUNC_6(VAR_10, VAR_8 + 4 * VAR_11);
 }

 return 0;
}
