
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_hardware {int irq; int initializing; int tx_ready; unsigned short last_memtx_serial; int setup_timer; int work_rx; int tasklet; int lock; int rx_pool; int rx_queue; int * tx_queue; scalar_t__ rx_pool_size; scalar_t__ rx_bytes_queued; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ipw_hardware* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,unsigned long) ;
 int FUNC_5 (int *,int ,int ) ;

struct ipw_hardware *FUNC_6(void)
{
 int VAR_5;
 struct ipw_hardware *VAR_6 =
  FUNC_2(sizeof(struct ipw_hardware), VAR_0);

 if (!VAR_6)
  return ((void*)0);

 VAR_6->irq = -1;
 VAR_6->initializing = 1;
 VAR_6->tx_ready = 1;
 VAR_6->rx_bytes_queued = 0;
 VAR_6->rx_pool_size = 0;
 VAR_6->last_memtx_serial = (unsigned short) 0xffff;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_0(&VAR_6->tx_queue[VAR_5]);

 FUNC_0(&VAR_6->rx_queue);
 FUNC_0(&VAR_6->rx_pool);
 FUNC_3(&VAR_6->lock);
 FUNC_4(&VAR_6->tasklet, VAR_3, (unsigned long) VAR_6);
 FUNC_1(&VAR_6->work_rx, VAR_2);
 FUNC_5(&VAR_6->setup_timer, VAR_4, 0);

 return VAR_6;
}
