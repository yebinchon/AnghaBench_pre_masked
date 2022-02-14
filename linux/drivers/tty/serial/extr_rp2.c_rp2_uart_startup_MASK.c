
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct rp2_uart_port {int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rp2_uart_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct rp2_uart_port*) ;
 int FUNC_2 (struct rp2_uart_port*,int ,int) ;
 int FUNC_3 (struct rp2_uart_port*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_6)
{
 struct rp2_uart_port *VAR_7 = FUNC_0(VAR_6);

 FUNC_1(VAR_7);
 FUNC_3(VAR_7, VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_7, VAR_1, VAR_5,
  VAR_4);
 FUNC_3(VAR_7, VAR_0, 0, 0);
 FUNC_2(VAR_7, VAR_7->idx, 1);

 return 0;
}
