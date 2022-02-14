
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_lite {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,scalar_t__) ;

void FUNC_5(struct fimc_lite *VAR_6)
{
 unsigned long VAR_7 = VAR_5 + FUNC_0(VAR_4);
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_6->regs + VAR_0);
 VAR_8 |= VAR_3;
 FUNC_4(VAR_8, VAR_6->regs + VAR_0);

 while (FUNC_2(VAR_7)) {
  VAR_8 = FUNC_1(VAR_6->regs + VAR_0);
  if (VAR_8 & VAR_2)
   break;
  FUNC_3(1000, 5000);
 }

 VAR_8 |= VAR_1;
 FUNC_4(VAR_8, VAR_6->regs + VAR_0);
}
