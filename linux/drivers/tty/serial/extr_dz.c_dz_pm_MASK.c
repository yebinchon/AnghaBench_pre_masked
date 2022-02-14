
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_3__ {int lock; } ;
struct dz_port {TYPE_1__ port; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct dz_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 struct dz_port *VAR_3 = FUNC_4(VAR_0);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->port.lock, VAR_4);
 if (VAR_1 < 3)
  FUNC_0(&VAR_3->port);
 else
  FUNC_1(&VAR_3->port);
 FUNC_3(&VAR_3->port.lock, VAR_4);
}
