
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpuart_port {int port; int lpuart_dma_tx_use; int lpuart_dma_rx_use; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (int *,int ) ;
 int FUNC_1 (struct lpuart_port*) ;
 int FUNC_2 (struct lpuart_port*) ;
 int FUNC_3 (int *,unsigned long,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct lpuart_port *VAR_8 = VAR_7;
 unsigned long VAR_9, VAR_10;

 VAR_9 = FUNC_0(&VAR_8->port, VAR_1);
 VAR_10 = FUNC_0(&VAR_8->port, VAR_4);
 VAR_10 = VAR_10 >> VAR_5;

 if ((VAR_9 & VAR_2 || VAR_10 > 0) && !VAR_8->lpuart_dma_rx_use)
  FUNC_1(VAR_8);

 if ((VAR_9 & VAR_3) && !VAR_8->lpuart_dma_tx_use)
  FUNC_2(VAR_8);

 FUNC_3(&VAR_8->port, VAR_9, VAR_1);
 return VAR_0;
}
