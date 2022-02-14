
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cas {scalar_t__ regs; int dev; int phy_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct cas *VAR_17, int VAR_18)
{
 int VAR_19;


 if (VAR_18 && !FUNC_0(VAR_17->phy_type)) {






  FUNC_5((VAR_16 | VAR_15 | VAR_14),
         VAR_17->regs + VAR_12);
 } else {
  FUNC_5(VAR_16 | VAR_15, VAR_17->regs + VAR_12);
 }


 FUNC_1(3);

 VAR_19 = VAR_13;
 while (VAR_19-- > 0) {
  u32 VAR_20 = FUNC_3(VAR_17->regs + VAR_12);
  if ((VAR_20 & (VAR_16 | VAR_15)) == 0)
   goto done;
  FUNC_4(10);
 }
 FUNC_2(VAR_17->dev, "sw reset failed\n");

done:

 FUNC_5(VAR_0 | VAR_1 |
        VAR_2, VAR_17->regs + VAR_9);





 FUNC_5(0xFFFFFFFFU & ~(VAR_3 | VAR_6 |
          VAR_7 | VAR_5 |
          VAR_4), VAR_17->regs +
        VAR_10);




 FUNC_5(VAR_8, VAR_17->regs + VAR_11);
}
