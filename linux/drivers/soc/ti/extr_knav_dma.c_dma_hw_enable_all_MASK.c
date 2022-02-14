
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_dma_device {int max_tx_chan; TYPE_1__* reg_tx_chan; } ;
struct TYPE_2__ {int control; int mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct knav_dma_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->max_tx_chan; VAR_2++) {
  FUNC_0(0, &VAR_1->reg_tx_chan[VAR_2].mode);
  FUNC_0(VAR_0, &VAR_1->reg_tx_chan[VAR_2].control);
 }
}
