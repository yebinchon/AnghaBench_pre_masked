
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct mxs_auart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct mxs_auart_port*,int ) ;
 struct mxs_auart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_4)
{
 struct mxs_auart_port *VAR_5 = FUNC_1(VAR_4);

 if ((FUNC_0(VAR_5, VAR_2) &
   (VAR_1 | VAR_0)) == VAR_1)
  return VAR_3;

 return 0;
}
