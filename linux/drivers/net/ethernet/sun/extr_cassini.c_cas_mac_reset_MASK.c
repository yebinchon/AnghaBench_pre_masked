
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas {scalar_t__ regs; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct cas *VAR_4)
{
 int VAR_5;


 FUNC_3(0x1, VAR_4->regs + VAR_2);
 FUNC_3(0x1, VAR_4->regs + VAR_0);


 VAR_5 = VAR_3;
 while (VAR_5-- > 0) {
  if (FUNC_1(VAR_4->regs + VAR_2) == 0)
   break;
  FUNC_2(10);
 }


 VAR_5 = VAR_3;
 while (VAR_5-- > 0) {
  if (FUNC_1(VAR_4->regs + VAR_0) == 0)
   break;
  FUNC_2(10);
 }

 if (FUNC_1(VAR_4->regs + VAR_2) |
     FUNC_1(VAR_4->regs + VAR_0))
  FUNC_0(VAR_4->dev, "mac tx[%d]/rx[%d] reset failed [%08x]\n",
      FUNC_1(VAR_4->regs + VAR_2),
      FUNC_1(VAR_4->regs + VAR_0),
      FUNC_1(VAR_4->regs + VAR_1));
}
