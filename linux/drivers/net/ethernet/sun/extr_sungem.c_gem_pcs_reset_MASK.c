
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gem {int dev; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct gem *VAR_2)
{
 int VAR_3;
 u32 VAR_4;


 VAR_4 = FUNC_1(VAR_2->regs + VAR_0);
 VAR_4 |= VAR_1;
 FUNC_3(VAR_4, VAR_2->regs + VAR_0);

 VAR_3 = 32;
 while (FUNC_1(VAR_2->regs + VAR_0) & VAR_1) {
  FUNC_2(100);
  if (VAR_3-- <= 0)
   break;
 }
 if (VAR_3 < 0)
  FUNC_0(VAR_2->dev, "PCS reset bit would not clear\n");
}
