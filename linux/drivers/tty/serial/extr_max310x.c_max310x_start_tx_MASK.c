
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct max310x_one {int tx_work; } ;


 int FUNC_0 (int *) ;
 struct max310x_one* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0)
{
 struct max310x_one *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->tx_work);
}
