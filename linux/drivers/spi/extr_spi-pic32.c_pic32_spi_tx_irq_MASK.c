
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_spi {scalar_t__ tx_end; scalar_t__ tx; int tx_irq; int (* tx_fifo ) (struct pic32_spi*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pic32_spi*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct pic32_spi *VAR_3 = VAR_2;

 VAR_3->tx_fifo(VAR_3);


 if (VAR_3->tx_end == VAR_3->tx)
  FUNC_0(VAR_3->tx_irq);

 return VAR_0;
}
