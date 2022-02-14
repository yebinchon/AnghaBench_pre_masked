
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct lpuart_port {TYPE_1__ lpuart_timer; scalar_t__ dma_rx_timeout; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct lpuart_port *VAR_2)
{
 FUNC_1(&VAR_2->lpuart_timer, VAR_1, 0);
 VAR_2->lpuart_timer.expires = VAR_0 + VAR_2->dma_rx_timeout;
 FUNC_0(&VAR_2->lpuart_timer);
}
