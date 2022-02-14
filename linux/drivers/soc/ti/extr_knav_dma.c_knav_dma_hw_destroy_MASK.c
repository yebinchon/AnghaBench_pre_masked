
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knav_dma_device {int max_rx_chan; int max_tx_chan; int lock; TYPE_2__* reg_tx_chan; TYPE_1__* reg_rx_chan; } ;
struct TYPE_4__ {int control; } ;
struct TYPE_3__ {int control; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,int *) ;

__attribute__((used)) static void FUNC_3(struct knav_dma_device *VAR_2)
{
 int VAR_3;
 unsigned VAR_4;

 FUNC_0(&VAR_2->lock);
 VAR_4 = ~VAR_0 & VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_2->max_rx_chan; VAR_3++)
  FUNC_2(VAR_4, &VAR_2->reg_rx_chan[VAR_3].control);

 for (VAR_3 = 0; VAR_3 < VAR_2->max_tx_chan; VAR_3++)
  FUNC_2(VAR_4, &VAR_2->reg_tx_chan[VAR_3].control);
 FUNC_1(&VAR_2->lock);
}
