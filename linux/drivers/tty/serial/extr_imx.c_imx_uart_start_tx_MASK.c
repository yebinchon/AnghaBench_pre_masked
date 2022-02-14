
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int flags; } ;
struct uart_port {TYPE_3__* state; TYPE_1__ rs485; } ;
struct TYPE_5__ {scalar_t__ x_char; } ;
struct imx_port {TYPE_2__ port; scalar_t__ dma_is_enabled; } ;
struct TYPE_6__ {int xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct imx_port*) ;
 int FUNC_1 (struct imx_port*,int ) ;
 int FUNC_2 (struct imx_port*,int*) ;
 int FUNC_3 (struct imx_port*,int*) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct imx_port*,int,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct uart_port*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_9)
{
 struct imx_port *VAR_10 = (struct imx_port *)VAR_9;
 u32 VAR_11;

 if (!VAR_10->port.x_char && FUNC_6(&VAR_9->state->xmit))
  return;

 if (VAR_9->rs485.flags & VAR_0) {
  u32 VAR_12;

  VAR_12 = FUNC_1(VAR_10, VAR_6);
  if (VAR_9->rs485.flags & VAR_1)
   FUNC_2(VAR_10, &VAR_12);
  else
   FUNC_3(VAR_10, &VAR_12);
  FUNC_5(VAR_10, VAR_12, VAR_6);

  if (!(VAR_9->rs485.flags & VAR_2))
   FUNC_4(VAR_9);





  if (!VAR_10->dma_is_enabled) {
   u32 VAR_13 = FUNC_1(VAR_10, VAR_7);
   VAR_13 |= VAR_8;
   FUNC_5(VAR_10, VAR_13, VAR_7);
  }
 }

 if (!VAR_10->dma_is_enabled) {
  VAR_11 = FUNC_1(VAR_10, VAR_3);
  FUNC_5(VAR_10, VAR_11 | VAR_4, VAR_3);
 }

 if (VAR_10->dma_is_enabled) {
  if (VAR_10->port.x_char) {


   VAR_11 = FUNC_1(VAR_10, VAR_3);
   VAR_11 &= ~VAR_5;
   VAR_11 |= VAR_4;
   FUNC_5(VAR_10, VAR_11, VAR_3);
   return;
  }

  if (!FUNC_6(&VAR_9->state->xmit) &&
      !FUNC_7(VAR_9))
   FUNC_0(VAR_10);
  return;
 }
}
