
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;
struct mxs_auart_port {int gpios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct mxs_auart_port*,int ) ;
 int FUNC_2 (int,struct mxs_auart_port*,int ) ;
 struct mxs_auart_port* FUNC_3 (struct uart_port*) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_4, unsigned VAR_5)
{
 struct mxs_auart_port *VAR_6 = FUNC_3(VAR_4);

 u32 VAR_7 = FUNC_1(VAR_6, VAR_2);

 VAR_7 &= ~(VAR_1 | VAR_0);
 if (VAR_5 & VAR_3) {
  if (FUNC_4(VAR_4))
   VAR_7 |= VAR_1;
  else
   VAR_7 |= VAR_0;
 }

 FUNC_2(VAR_7, VAR_6, VAR_2);

 FUNC_0(VAR_6->gpios, VAR_5);
}
