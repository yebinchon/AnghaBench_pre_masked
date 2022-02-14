
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct TYPE_2__ {int (* command ) (struct uart_port*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int ) ;

__attribute__((used)) static void
FUNC_4(struct uart_port *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 FUNC_0(&VAR_3->lock, VAR_5);

 if (VAR_4 == -1)
  VAR_2->command(VAR_3, VAR_0);
 else
  VAR_2->command(VAR_3, VAR_1);

 FUNC_1(&VAR_3->lock, VAR_5);
}
