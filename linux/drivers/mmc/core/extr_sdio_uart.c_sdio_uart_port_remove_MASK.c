
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct sdio_uart_port {size_t index; TYPE_1__ port; int func_lock; struct sdio_func* func; } ;
struct sdio_func {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_uart_port*) ;
 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_10(struct sdio_uart_port *VAR_2)
{
 struct sdio_func *VAR_3;

 FUNC_7(&VAR_1);
 VAR_0[VAR_2->index] = ((void*)0);
 FUNC_8(&VAR_1);
 FUNC_0(&VAR_2->port.mutex);
 FUNC_0(&VAR_2->func_lock);
 VAR_3 = VAR_2->func;
 FUNC_2(VAR_3);
 VAR_2->func = ((void*)0);
 FUNC_1(&VAR_2->func_lock);

 FUNC_9(&VAR_2->port, 0);
 FUNC_1(&VAR_2->port.mutex);
 FUNC_5(VAR_3);
 FUNC_3(VAR_3);
 FUNC_4(VAR_3);

 FUNC_6(VAR_2);
}
