
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct imx_port {scalar_t__ dma_is_txing; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct imx_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_3)
{
 struct imx_port *VAR_4 = (struct imx_port *)VAR_3;
 unsigned int VAR_5;

 VAR_5 = (FUNC_0(VAR_4, VAR_1) & VAR_2) ? VAR_0 : 0;


 if (VAR_4->dma_is_txing)
  VAR_5 = 0;

 return VAR_5;
}
