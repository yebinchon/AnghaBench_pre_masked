
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_dev_in_eps; int num_dev_perio_in_ep; scalar_t__ en_multiple_tx_fifo; } ;
struct dwc2_hsotg {TYPE_1__ hw_params; } ;



int FUNC_0(struct dwc2_hsotg *VAR_0)
{
 if (VAR_0->hw_params.en_multiple_tx_fifo)

  return VAR_0->hw_params.num_dev_in_eps;
 else

  return VAR_0->hw_params.num_dev_perio_in_ep;
}
