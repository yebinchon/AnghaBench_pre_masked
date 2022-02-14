
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct msm_dma {scalar_t__ count; } ;
struct msm_port {int imr; struct msm_dma tx_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct msm_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2)
{
 struct msm_port *VAR_3 = FUNC_0(VAR_2);
 struct msm_dma *VAR_4 = &VAR_3->tx_dma;


 if (VAR_4->count)
  return;

 VAR_3->imr |= VAR_1;
 FUNC_1(VAR_2, VAR_3->imr, VAR_0);
}
