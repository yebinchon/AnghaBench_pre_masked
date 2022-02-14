
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_nfc {scalar_t__ regs; int complete; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct sunxi_nfc *VAR_7 = VAR_6;
 u32 VAR_8 = FUNC_1(VAR_7->regs + VAR_4);
 u32 VAR_9 = FUNC_1(VAR_7->regs + VAR_3);

 if (!(VAR_9 & VAR_8))
  return VAR_1;

 if ((VAR_9 & VAR_8) == VAR_9)
  FUNC_0(&VAR_7->complete);

 FUNC_2(VAR_8 & VAR_2, VAR_7->regs + VAR_4);
 FUNC_2(~VAR_8 & VAR_9 & VAR_2, VAR_7->regs + VAR_3);

 return VAR_0;
}
