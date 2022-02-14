
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct synquacer_spi {scalar_t__ tx_words; int transfer_done; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct synquacer_spi*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 uint32_t VAR_7;
 struct synquacer_spi *VAR_8 = VAR_6;

 VAR_7 = FUNC_1(VAR_8->regs + VAR_3);
 if (VAR_7 & VAR_4) {
  if (VAR_8->tx_words == 0) {
   FUNC_3(0, VAR_8->regs + VAR_2);
   FUNC_0(&VAR_8->transfer_done);
  } else {
   FUNC_2(VAR_8);
  }
  return VAR_0;
 }

 return VAR_1;
}
