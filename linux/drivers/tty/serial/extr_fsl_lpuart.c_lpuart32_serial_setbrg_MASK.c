
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int uartclk; int dev; } ;
struct lpuart_port {TYPE_1__ port; int lpuart_dma_tx_use; int lpuart_dma_rx_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct lpuart_port *VAR_7, unsigned int VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16 = VAR_7->port.uartclk;
 VAR_11 = VAR_8;
 VAR_10 = 0;
 VAR_9 = 0;

 for (VAR_12 = 4; VAR_12 <= 32; VAR_12++) {

  VAR_13 = (VAR_16 / (VAR_8 * VAR_12));
  if (VAR_13 == 0)
   VAR_13 = 1;





  VAR_14 = VAR_16 / (VAR_12 * VAR_13) - VAR_8;


  VAR_15 = VAR_16 / (VAR_12 * (VAR_13 + 1));
  if (VAR_14 > (VAR_8 - VAR_15)) {
   VAR_14 = VAR_8 - VAR_15;
   VAR_13++;
  }

  if (VAR_14 <= VAR_11) {
   VAR_11 = VAR_14;
   VAR_10 = VAR_12;
   VAR_9 = VAR_13;

   if (!VAR_11)
    break;
  }
 }


 if (VAR_11 > ((VAR_8 / 100) * 3))
  FUNC_0(VAR_7->port.dev,
    "unacceptable baud rate difference of more than 3%%\n");

 VAR_15 = FUNC_1(&VAR_7->port, VAR_0);

 if ((VAR_10 > 3) && (VAR_10 < 8))
  VAR_15 |= VAR_1;

 VAR_15 &= ~(VAR_2 << VAR_3);
 VAR_15 |= ((VAR_10-1) & VAR_2) << VAR_3;

 VAR_15 &= ~VAR_5;
 VAR_15 |= VAR_9 & VAR_5;

 if (!VAR_7->lpuart_dma_rx_use)
  VAR_15 &= ~VAR_4;
 if (!VAR_7->lpuart_dma_tx_use)
  VAR_15 &= ~VAR_6;

 FUNC_2(&VAR_7->port, VAR_15, VAR_0);
}
