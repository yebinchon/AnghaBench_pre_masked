
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct uart_port {TYPE_1__ rs485; } ;
struct imx_port {scalar_t__ dma_is_txing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct imx_port*,int ) ;
 int FUNC_1 (struct imx_port*,int*) ;
 int FUNC_2 (struct imx_port*,int*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct imx_port*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_9)
{
 struct imx_port *VAR_10 = (struct imx_port *)VAR_9;
 u32 VAR_11;





 if (VAR_10->dma_is_txing)
  return;

 VAR_11 = FUNC_0(VAR_10, VAR_2);
 FUNC_4(VAR_10, VAR_11 & ~VAR_3, VAR_2);


 if (VAR_9->rs485.flags & VAR_0 &&
     FUNC_0(VAR_10, VAR_7) & VAR_8) {
  u32 VAR_12 = FUNC_0(VAR_10, VAR_4), VAR_13;
  if (VAR_9->rs485.flags & VAR_1)
   FUNC_1(VAR_10, &VAR_12);
  else
   FUNC_2(VAR_10, &VAR_12);
  FUNC_4(VAR_10, VAR_12, VAR_4);

  FUNC_3(VAR_9);

  VAR_13 = FUNC_0(VAR_10, VAR_5);
  VAR_13 &= ~VAR_6;
  FUNC_4(VAR_10, VAR_13, VAR_5);
 }
}
