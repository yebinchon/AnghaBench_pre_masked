
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt76x02_dev {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int ,int) ;
 int FUNC_5 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_6 (struct mt76x02_dev*,int,int) ;
 int FUNC_7 (struct mt76x02_dev*,int ) ;

__attribute__((used)) static void FUNC_8(struct mt76x02_dev *VAR_16)
{
 s8 VAR_17 = 0;
 u16 VAR_18;

 VAR_18 = FUNC_7(VAR_16, VAR_6);

 VAR_17 = VAR_18 & 0x7f;
 if ((VAR_18 & 0xff) == 0xff)
  VAR_17 = 0;
 else if (VAR_18 & 0x80)
  VAR_17 = 0 - VAR_17;

 VAR_18 >>= 8;
 if (VAR_18 == 0x00 || VAR_18 == 0xff) {
  VAR_18 = FUNC_7(VAR_16, VAR_5);
  VAR_18 &= 0xff;

  if (VAR_18 == 0x00 || VAR_18 == 0xff)
   VAR_18 = 0x14;
 }

 VAR_18 &= 0x7f;
 FUNC_4(VAR_16, FUNC_1(VAR_0, VAR_11),
         VAR_12, VAR_18 + VAR_17);
 FUNC_5(VAR_16, FUNC_1(VAR_0, VAR_13), VAR_14);

 FUNC_6(VAR_16, 0x504, 0x06000000);
 FUNC_6(VAR_16, 0x50c, 0x08800000);
 FUNC_2(5);
 FUNC_6(VAR_16, 0x504, 0x0);


 FUNC_4(VAR_16, VAR_9,
         VAR_10, 0xd);
 FUNC_4(VAR_16, VAR_1, VAR_2, 1);


 FUNC_3(VAR_16, VAR_7, VAR_8);

 VAR_18 = FUNC_7(VAR_16, VAR_3);
 switch (FUNC_0(VAR_4, VAR_18)) {
 case 0:
  FUNC_6(VAR_16, VAR_15, 0x5c1fee80);
  break;
 case 1:
  FUNC_6(VAR_16, VAR_15, 0x5c1feed0);
  break;
 default:
  break;
 }
}
