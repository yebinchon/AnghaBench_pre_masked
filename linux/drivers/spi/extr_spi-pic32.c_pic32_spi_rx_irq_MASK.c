
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_spi {scalar_t__ rx_end; scalar_t__ rx; int xfer_done; int rx_irq; int fault_irq; int (* rx_fifo ) (struct pic32_spi*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pic32_spi*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct pic32_spi *VAR_3 = VAR_2;

 VAR_3->rx_fifo(VAR_3);


 if (VAR_3->rx_end == VAR_3->rx) {

  FUNC_1(VAR_3->fault_irq);
  FUNC_1(VAR_3->rx_irq);


  FUNC_0(&VAR_3->xfer_done);
 }

 return VAR_0;
}
