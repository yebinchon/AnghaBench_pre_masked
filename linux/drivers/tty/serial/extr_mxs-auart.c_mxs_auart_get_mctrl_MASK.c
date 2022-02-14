
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
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct mxs_auart_port*,int ) ;
 struct mxs_auart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static u32 FUNC_3(struct uart_port *VAR_3)
{
 struct mxs_auart_port *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5 = FUNC_1(VAR_4, VAR_1);
 u32 VAR_6 = 0;

 if (VAR_5 & VAR_0)
  VAR_6 |= VAR_2;

 return FUNC_0(VAR_4->gpios, &VAR_6);
}
