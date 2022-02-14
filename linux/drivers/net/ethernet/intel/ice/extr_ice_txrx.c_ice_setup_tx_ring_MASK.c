
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_tx_desc {int dummy; } ;
struct TYPE_2__ {int prev_pkt; } ;
struct ice_ring {int count; int * tx_buf; TYPE_1__ tx_stats; scalar_t__ next_to_clean; scalar_t__ next_to_use; int size; int desc; int dma; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct device*,int *) ;
 int * FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int ,int *,int ) ;

int FUNC_6(struct ice_ring *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;

 if (!VAR_4)
  return -VAR_0;


 FUNC_1(VAR_3->tx_buf);
 VAR_3->tx_buf =
  FUNC_4(VAR_4, sizeof(*VAR_3->tx_buf) * VAR_3->count,
        VAR_1);
 if (!VAR_3->tx_buf)
  return -VAR_0;


 VAR_3->size = FUNC_0(VAR_3->count * sizeof(struct ice_tx_desc),
         VAR_2);
 VAR_3->desc = FUNC_5(VAR_4, VAR_3->size, &VAR_3->dma,
         VAR_1);
 if (!VAR_3->desc) {
  FUNC_2(VAR_4, "Unable to allocate memory for the Tx descriptor ring, size=%d\n",
   VAR_3->size);
  goto err;
 }

 VAR_3->next_to_use = 0;
 VAR_3->next_to_clean = 0;
 VAR_3->tx_stats.prev_pkt = -1;
 return 0;

err:
 FUNC_3(VAR_4, VAR_3->tx_buf);
 VAR_3->tx_buf = ((void*)0);
 return -VAR_0;
}
