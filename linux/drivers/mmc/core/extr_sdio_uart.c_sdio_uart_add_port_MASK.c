
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_uart_port {int index; int xmit_fifo; int write_lock; int func_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 struct sdio_uart_port** VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct sdio_uart_port *VAR_7)
{
 int VAR_8, VAR_9 = -VAR_0;

 FUNC_1(&VAR_7->func_lock);
 FUNC_3(&VAR_7->write_lock);
 if (FUNC_0(&VAR_7->xmit_fifo, VAR_2, VAR_3))
  return -VAR_1;

 FUNC_2(&VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (!VAR_5[VAR_8]) {
   VAR_7->index = VAR_8;
   VAR_5[VAR_8] = VAR_7;
   VAR_9 = 0;
   break;
  }
 }
 FUNC_4(&VAR_6);

 return VAR_9;
}
