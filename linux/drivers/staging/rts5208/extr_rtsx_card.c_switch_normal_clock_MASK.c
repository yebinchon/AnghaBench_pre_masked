
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int cur_clk; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_3 (int) ;

int FUNC_4(struct rtsx_chip *VAR_17, int VAR_18)
{
 int VAR_19;
 u8 VAR_20, VAR_21, VAR_22;
 int VAR_23 = 0;

 if (VAR_17->cur_clk == VAR_18)
  return VAR_16;

 switch (VAR_18) {
 case 134:
  FUNC_0(FUNC_1(VAR_17), "Switch clock to 20MHz\n");
  VAR_20 = VAR_14;
  VAR_21 = VAR_4;
  VAR_22 = 7;
  break;

 case 132:
  FUNC_0(FUNC_1(VAR_17), "Switch clock to 30MHz\n");
  VAR_20 = VAR_11;
  VAR_21 = VAR_4;
  VAR_22 = 7;
  break;

 case 131:
  FUNC_0(FUNC_1(VAR_17), "Switch clock to 40MHz\n");
  VAR_20 = VAR_14;
  VAR_21 = VAR_3;
  VAR_22 = 7;
  break;

 case 130:
  FUNC_0(FUNC_1(VAR_17), "Switch clock to 50MHz\n");
  VAR_20 = VAR_10;
  VAR_21 = VAR_3;
  VAR_22 = 6;
  break;

 case 129:
  FUNC_0(FUNC_1(VAR_17), "Switch clock to 60MHz\n");
  VAR_20 = VAR_11;
  VAR_21 = VAR_3;
  VAR_22 = 6;
  break;

 case 128:
  FUNC_0(FUNC_1(VAR_17), "Switch clock to 80MHz\n");
  VAR_20 = VAR_14;
  VAR_21 = VAR_2;
  VAR_22 = 5;
  break;

 case 137:
  FUNC_0(FUNC_1(VAR_17), "Switch clock to 100MHz\n");
  VAR_20 = VAR_10;
  VAR_21 = VAR_2;
  VAR_22 = 5;
  break;

 case 136:
  FUNC_0(FUNC_1(VAR_17), "Switch clock to 120MHz\n");
  VAR_20 = VAR_11;
  VAR_21 = VAR_2;
  VAR_22 = 5;
  break;

 case 135:
  FUNC_0(FUNC_1(VAR_17), "Switch clock to 150MHz\n");
  VAR_20 = VAR_12;
  VAR_21 = VAR_2;
  VAR_22 = 4;
  break;

 case 133:
  FUNC_0(FUNC_1(VAR_17), "Switch clock to 200MHz\n");
  VAR_20 = VAR_13;
  VAR_21 = VAR_2;
  VAR_22 = 4;
  break;

 default:
  FUNC_0(FUNC_1(VAR_17), "Try to switch to an illegal clock (%d)\n",
   VAR_18);
  return VAR_15;
 }

 VAR_19 = FUNC_2(VAR_17, VAR_0, 0xFF, VAR_5);
 if (VAR_19)
  return VAR_19;
 if (VAR_23) {
  VAR_19 = FUNC_2(VAR_17, VAR_8,
          VAR_7, 0);
  if (VAR_19)
   return VAR_19;
  VAR_19 = FUNC_2(VAR_17, VAR_9,
          VAR_7, 0);
  if (VAR_19)
   return VAR_19;
 }
 VAR_19 = FUNC_2(VAR_17, VAR_1, 0xFF,
         (VAR_21 << 4) | VAR_22);
 if (VAR_19)
  return VAR_19;
 VAR_19 = FUNC_2(VAR_17, VAR_6, 0xFF, VAR_20);
 if (VAR_19)
  return VAR_19;

 if (VAR_23) {
  FUNC_3(200);
  VAR_19 = FUNC_2(VAR_17, VAR_8,
          VAR_7, VAR_7);
  if (VAR_19)
   return VAR_19;
  VAR_19 = FUNC_2(VAR_17, VAR_9,
          VAR_7, VAR_7);
  if (VAR_19)
   return VAR_19;
  FUNC_3(200);
 }
 VAR_19 = FUNC_2(VAR_17, VAR_0, 0xFF, 0);
 if (VAR_19)
  return VAR_19;

 VAR_17->cur_clk = VAR_18;

 return VAR_16;
}
