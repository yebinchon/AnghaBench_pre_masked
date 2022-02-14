
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_qspi {int pending; int cmd_completion; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_5, void *VAR_6)
{
 struct atmel_qspi *VAR_7 = VAR_6;
 u32 VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_1(VAR_7->regs + VAR_3);
 VAR_9 = FUNC_1(VAR_7->regs + VAR_2);
 VAR_10 = VAR_8 & VAR_9;

 if (!VAR_10)
  return VAR_1;

 VAR_7->pending |= VAR_10;
 if ((VAR_7->pending & VAR_4) == VAR_4)
  FUNC_0(&VAR_7->cmd_completion);

 return VAR_0;
}
