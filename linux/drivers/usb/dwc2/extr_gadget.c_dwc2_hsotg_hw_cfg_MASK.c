
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dwc2_hsotg_ep {int dummy; } ;
struct TYPE_2__ {int num_dev_ep; int dev_ep_dirs; scalar_t__ en_multiple_tx_fifo; int total_fifo_size; } ;
struct dwc2_hsotg {int num_of_eps; int fifo_mem; scalar_t__ dedicated_fifos; int dev; TYPE_1__ hw_params; void** eps_out; void** eps_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,char*,int ) ;
 void* FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct dwc2_hsotg *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;



 VAR_2->num_of_eps = VAR_2->hw_params.num_dev_ep;


 VAR_2->num_of_eps++;

 VAR_2->eps_in[0] = FUNC_1(VAR_2->dev,
     sizeof(struct dwc2_hsotg_ep),
     VAR_1);
 if (!VAR_2->eps_in[0])
  return -VAR_0;

 VAR_2->eps_out[0] = VAR_2->eps_in[0];

 VAR_3 = VAR_2->hw_params.dev_ep_dirs;
 for (VAR_5 = 1, VAR_3 >>= 2; VAR_5 < VAR_2->num_of_eps; VAR_5++, VAR_3 >>= 2) {
  VAR_4 = VAR_3 & 3;

  if (!(VAR_4 & 2)) {
   VAR_2->eps_in[VAR_5] = FUNC_1(VAR_2->dev,
    sizeof(struct dwc2_hsotg_ep), VAR_1);
   if (!VAR_2->eps_in[VAR_5])
    return -VAR_0;
  }

  if (!(VAR_4 & 1)) {
   VAR_2->eps_out[VAR_5] = FUNC_1(VAR_2->dev,
    sizeof(struct dwc2_hsotg_ep), VAR_1);
   if (!VAR_2->eps_out[VAR_5])
    return -VAR_0;
  }
 }

 VAR_2->fifo_mem = VAR_2->hw_params.total_fifo_size;
 VAR_2->dedicated_fifos = VAR_2->hw_params.en_multiple_tx_fifo;

 FUNC_0(VAR_2->dev, "EPs: %d, %s fifos, %d entries in SPRAM\n",
   VAR_2->num_of_eps,
   VAR_2->dedicated_fifos ? "dedicated" : "shared",
   VAR_2->fifo_mem);
 return 0;
}
