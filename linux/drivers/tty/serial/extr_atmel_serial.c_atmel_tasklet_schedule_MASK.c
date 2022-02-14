
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tasklet_struct {int dummy; } ;
struct atmel_uart_port {int tasklet_shutdown; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tasklet_struct*) ;

__attribute__((used)) static void FUNC_2(struct atmel_uart_port *VAR_0,
       struct tasklet_struct *VAR_1)
{
 if (!FUNC_0(&VAR_0->tasklet_shutdown))
  FUNC_1(VAR_1);
}
