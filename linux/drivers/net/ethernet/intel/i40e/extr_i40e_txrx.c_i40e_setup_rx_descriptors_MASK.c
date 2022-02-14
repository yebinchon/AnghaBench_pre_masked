
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union i40e_32byte_rx_desc {int dummy; } i40e_32byte_rx_desc ;
struct i40e_rx_buffer {int dummy; } ;
struct i40e_ring {int count; int size; int * rx_bi; TYPE_1__* vsi; int xdp_prog; int queue_index; int netdev; int xdp_rxq; scalar_t__ next_to_use; scalar_t__ next_to_clean; scalar_t__ next_to_alloc; int desc; int dma; int syncp; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; int xdp_prog; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,int,int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;

int FUNC_8(struct i40e_ring *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 int VAR_5 = -VAR_0;
 int VAR_6;


 FUNC_1(VAR_3->rx_bi);
 VAR_6 = sizeof(struct i40e_rx_buffer) * VAR_3->count;
 VAR_3->rx_bi = FUNC_5(VAR_6, VAR_1);
 if (!VAR_3->rx_bi)
  goto err;

 FUNC_6(&VAR_3->syncp);


 VAR_3->size = VAR_3->count * sizeof(union i40e_32byte_rx_desc);
 VAR_3->size = FUNC_0(VAR_3->size, 4096);
 VAR_3->desc = FUNC_3(VAR_4, VAR_3->size,
        &VAR_3->dma, VAR_1);

 if (!VAR_3->desc) {
  FUNC_2(VAR_4, "Unable to allocate memory for the Rx descriptor ring, size=%d\n",
    VAR_3->size);
  goto err;
 }

 VAR_3->next_to_alloc = 0;
 VAR_3->next_to_clean = 0;
 VAR_3->next_to_use = 0;


 if (VAR_3->vsi->type == VAR_2) {
  VAR_5 = FUNC_7(&VAR_3->xdp_rxq, VAR_3->netdev,
           VAR_3->queue_index);
  if (VAR_5 < 0)
   goto err;
 }

 VAR_3->xdp_prog = VAR_3->vsi->xdp_prog;

 return 0;
err:
 FUNC_4(VAR_3->rx_bi);
 VAR_3->rx_bi = ((void*)0);
 return VAR_5;
}
