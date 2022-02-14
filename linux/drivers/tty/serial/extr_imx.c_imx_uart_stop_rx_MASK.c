
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;
struct imx_port {scalar_t__ dma_is_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct imx_port*,int ) ;
 int FUNC_1 (struct imx_port*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_7)
{
 struct imx_port *VAR_8 = (struct imx_port *)VAR_7;
 u32 VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_8, VAR_0);
 VAR_10 = FUNC_0(VAR_8, VAR_4);

 if (VAR_8->dma_is_enabled) {
  VAR_9 &= ~(VAR_3 | VAR_1);
 } else {
  VAR_9 &= ~VAR_2;
  VAR_10 &= ~VAR_5;
 }
 FUNC_1(VAR_8, VAR_9, VAR_0);

 VAR_10 &= ~VAR_6;
 FUNC_1(VAR_8, VAR_10, VAR_4);
}
