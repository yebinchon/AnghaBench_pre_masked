
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_amba_port {int im; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct uart_amba_port*,int) ;
 int FUNC_1 (int ,struct uart_amba_port*,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_amba_port *VAR_2)
{
 if (FUNC_0(VAR_2, 0)) {
  VAR_2->im |= VAR_1;
  FUNC_1(VAR_2->im, VAR_2, VAR_0);
 }
}
