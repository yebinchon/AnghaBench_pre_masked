
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_mci {int dev; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct dw_mci *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 if ((VAR_6 & VAR_0) &&
     !(VAR_6 & VAR_1)) {
  if (FUNC_1(VAR_5->regs + VAR_2,
           VAR_7,
           !(VAR_7 & VAR_3),
           10, 500 * VAR_4))
   FUNC_0(VAR_5->dev, "Busy; trying anyway\n");
 }
}
