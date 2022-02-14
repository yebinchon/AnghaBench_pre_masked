
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int rt; } ;
struct rt2x00_dev {TYPE_1__ chip; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ,unsigned int) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (struct rt2x00_dev*) ;
 int FUNC_7 (struct rt2x00_dev*) ;
 int FUNC_8 (struct rt2x00_dev*) ;
 int FUNC_9 (struct rt2x00_dev*) ;
 int FUNC_10 (struct rt2x00_dev*) ;
 int FUNC_11 (struct rt2x00_dev*) ;
 int FUNC_12 (struct rt2x00_dev*) ;
 int FUNC_13 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_14 (struct rt2x00_dev*) ;
 int FUNC_15 (int,int ) ;

__attribute__((used)) static void FUNC_16(struct rt2x00_dev *VAR_4)
{
 unsigned int VAR_5;
 u16 VAR_6;
 u8 VAR_7;
 u8 VAR_8;

 if (FUNC_14(VAR_4))
  FUNC_3(VAR_4);

 switch (VAR_4->chip.rt) {
 case 144:
 case 143:
 case 142:
  FUNC_2(VAR_4);
  break;
 case 141:
 case 140:
 case 139:
  FUNC_4(VAR_4);
  break;
 case 138:
  FUNC_5(VAR_4);
  break;
 case 137:
 case 132:
  FUNC_6(VAR_4);
  break;
 case 136:
  FUNC_7(VAR_4);
  break;
 case 135:
  FUNC_8(VAR_4);
  break;
 case 134:
  FUNC_9(VAR_4);
  return;
 case 133:
  FUNC_10(VAR_4);
  return;
 case 131:
 case 130:
  FUNC_11(VAR_4);
  break;
 case 129:
  FUNC_12(VAR_4);
  return;
 case 128:
  FUNC_13(VAR_4);
  break;
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_6 = FUNC_1(VAR_4,
             VAR_2, VAR_5);

  if (VAR_6 != 0xffff && VAR_6 != 0x0000) {
   VAR_7 = FUNC_15(VAR_6, VAR_0);
   VAR_8 = FUNC_15(VAR_6, VAR_3);
   FUNC_0(VAR_4, VAR_7, VAR_8);
  }
 }
}
