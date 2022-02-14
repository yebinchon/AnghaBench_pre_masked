
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; int dev; } ;
struct sccnxp_port {int imr; } ;


 int VAR_0 ;
 struct sccnxp_port* FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_1, int VAR_2)
{
 struct sccnxp_port *VAR_3 = FUNC_0(VAR_1->dev);

 VAR_3->imr &= ~(VAR_2 << (VAR_1->line * 4));
 FUNC_1(VAR_1, VAR_0, VAR_3->imr);
}
