
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt76x02_dev {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct mt76x02_dev*,int ,int ,int) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int) ;
 int FUNC_4 (struct mt76x02_dev*,int ) ;

__attribute__((used)) static void
FUNC_5(struct mt76x02_dev *VAR_9)
{
 u16 VAR_10;
 s8 VAR_11 = 0;

 VAR_10 = FUNC_4(VAR_9, VAR_3);

 VAR_11 = VAR_10 & 0x7f;
 if ((VAR_10 & 0xff) == 0xff)
  VAR_11 = 0;
 else if (VAR_10 & 0x80)
  VAR_11 = 0 - VAR_11;

 VAR_10 >>= 8;
 if (VAR_10 == 0x00 || VAR_10 == 0xff) {
  VAR_10 = FUNC_4(VAR_9, VAR_2);
  VAR_10 &= 0xff;

  if (VAR_10 == 0x00 || VAR_10 == 0xff)
   VAR_10 = 0x14;
 }

 VAR_10 &= 0x7f;
 FUNC_1(VAR_9, VAR_4, VAR_5, VAR_10 + VAR_11);
 FUNC_2(VAR_9, VAR_6, VAR_7);

 VAR_10 = FUNC_4(VAR_9, VAR_0);
 switch (FUNC_0(VAR_1, VAR_10)) {
 case 0:
  FUNC_3(VAR_9, VAR_8, 0x5c1fee80);
  break;
 case 1:
  FUNC_3(VAR_9, VAR_8, 0x5c1feed0);
  break;
 default:
  break;
 }
}
