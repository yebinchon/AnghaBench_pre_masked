
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct mt76x02_dev*) ;
 int FUNC_3 (struct mt76x02_dev*,int ) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int) ;

void FUNC_5(struct mt76x02_dev *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_5 = FUNC_3(VAR_4, FUNC_1(VAR_0, 8));
 VAR_6 = FUNC_3(VAR_4, FUNC_1(VAR_0, 4));

 VAR_7 = (VAR_5 & 0x00007e00) >> 9;
 VAR_8 = VAR_6 & ~0x1f000000;
 VAR_8 += (((VAR_7 + 1) >> 1) << 24);
 FUNC_4(VAR_4, FUNC_1(VAR_0, 4), VAR_8);

 VAR_9 = FUNC_0(VAR_2, VAR_8);
 VAR_9 += VAR_7;
 VAR_9 -= (VAR_5 & 0x00000038) >> 3;
 VAR_9 = (VAR_9 << 16) | 0x00000307;
 FUNC_4(VAR_4, FUNC_1(VAR_1, 31), VAR_9);

 if (FUNC_2(VAR_4)) {
  FUNC_4(VAR_4, FUNC_1(VAR_1, 32), 0x00040071);
 } else {

  FUNC_4(VAR_4, FUNC_1(VAR_1, 0), 0);

  FUNC_4(VAR_4, FUNC_1(VAR_1, 0), VAR_3 << 16);
 }
}
