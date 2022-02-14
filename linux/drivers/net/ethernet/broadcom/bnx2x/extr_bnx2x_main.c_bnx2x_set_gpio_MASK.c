
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,int,int) ;
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
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ) ;

int FUNC_6(struct bnx2x *VAR_12, int VAR_13, u32 VAR_14, u8 VAR_15)
{

 int VAR_16 = (FUNC_2(VAR_12, VAR_10) &&
    FUNC_2(VAR_12, VAR_11)) ^ VAR_15;
 int VAR_17 = VAR_13 +
   (VAR_16 ? VAR_6 : 0);
 u32 VAR_18 = (1 << VAR_17);
 u32 VAR_19;

 if (VAR_13 > VAR_2) {
  FUNC_0("Invalid GPIO %d\n", VAR_13);
  return -VAR_0;
 }

 FUNC_4(VAR_12, VAR_1);

 VAR_19 = (FUNC_2(VAR_12, VAR_8) & VAR_4);

 switch (VAR_14) {
 case 128:
  FUNC_1(VAR_9,
     "Set GPIO %d (shift %d) -> output low\n",
     VAR_13, VAR_17);

  VAR_19 &= ~(VAR_18 << VAR_5);
  VAR_19 |= (VAR_18 << VAR_3);
  break;

 case 129:
  FUNC_1(VAR_9,
     "Set GPIO %d (shift %d) -> output high\n",
     VAR_13, VAR_17);

  VAR_19 &= ~(VAR_18 << VAR_5);
  VAR_19 |= (VAR_18 << VAR_7);
  break;

 case 130:
  FUNC_1(VAR_9,
     "Set GPIO %d (shift %d) -> input\n",
     VAR_13, VAR_17);

  VAR_19 |= (VAR_18 << VAR_5);
  break;

 default:
  break;
 }

 FUNC_3(VAR_12, VAR_8, VAR_19);
 FUNC_5(VAR_12, VAR_1);

 return 0;
}
