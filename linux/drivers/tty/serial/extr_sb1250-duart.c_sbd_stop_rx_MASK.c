
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;
struct sbd_port {int dummy; } ;


 int FUNC_0 (int) ;
 struct sbd_port* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct sbd_port*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0)
{
 struct sbd_port *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1, FUNC_0((VAR_0->line) % 2), 0);
}
