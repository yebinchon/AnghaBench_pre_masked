
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knav_dma_device {unsigned int rx_timeout; unsigned int tx_priority; unsigned int rx_priority; int max_rx_chan; int logical_queue_managers; unsigned int* qm_base_address; int lock; TYPE_2__* reg_global; TYPE_1__* reg_rx_chan; scalar_t__ loopback; } ;
struct TYPE_4__ {int * qm_base_address; int priority_control; int perf_control; int emulation_control; } ;
struct TYPE_3__ {int control; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int *) ;

__attribute__((used)) static void FUNC_4(struct knav_dma_device *VAR_6)
{
 unsigned VAR_7;
 int VAR_8;

 FUNC_1(&VAR_6->lock);
 VAR_7 = VAR_6->loopback ? VAR_1 : 0;
 FUNC_3(VAR_7, &VAR_6->reg_global->emulation_control);

 VAR_7 = FUNC_0(&VAR_6->reg_global->perf_control);
 VAR_7 |= ((VAR_6->rx_timeout & VAR_3) << VAR_4);
 FUNC_3(VAR_7, &VAR_6->reg_global->perf_control);

 VAR_7 = ((VAR_6->tx_priority << VAR_5) |
      (VAR_6->rx_priority << VAR_2));

 FUNC_3(VAR_7, &VAR_6->reg_global->priority_control);


 for (VAR_8 = 0; VAR_8 < VAR_6->max_rx_chan; VAR_8++)
  FUNC_3(VAR_0, &VAR_6->reg_rx_chan[VAR_8].control);

 for (VAR_8 = 0; VAR_8 < VAR_6->logical_queue_managers; VAR_8++)
  FUNC_3(VAR_6->qm_base_address[VAR_8],
          &VAR_6->reg_global->qm_base_address[VAR_8]);
 FUNC_2(&VAR_6->lock);
}
