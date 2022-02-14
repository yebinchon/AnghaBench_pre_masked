
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xilinxfb_drvdata {int flags; int dcr_host; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct xilinxfb_drvdata *VAR_2, u32 VAR_3,
       u32 VAR_4)
{
 if (VAR_2->flags & VAR_0) {
  if (VAR_2->flags & VAR_1)
   FUNC_1(VAR_4, VAR_2->regs + (VAR_3 << 2));
  else
   FUNC_2(VAR_4, VAR_2->regs + (VAR_3 << 2));
 }




}
