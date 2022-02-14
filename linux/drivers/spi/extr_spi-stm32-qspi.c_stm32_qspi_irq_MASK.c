
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_qspi {int data_completion; scalar_t__ io_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct stm32_qspi *VAR_9 = (struct stm32_qspi *)VAR_8;
 u32 VAR_10, VAR_11;

 VAR_11 = FUNC_1(VAR_9->io_base + VAR_4);

 if (VAR_11 & (VAR_6 | VAR_5)) {

  VAR_10 = FUNC_1(VAR_9->io_base + VAR_3);
  VAR_10 &= ~VAR_0 & ~VAR_1;
  FUNC_2(VAR_10, VAR_9->io_base + VAR_3);
  FUNC_0(&VAR_9->data_completion);
 }

 return VAR_2;
}
