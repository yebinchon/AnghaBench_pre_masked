
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union igc_adv_rx_desc {int dummy; } igc_adv_rx_desc ;
struct igc_rx_buffer {int dummy; } ;
struct igc_ring {int count; int size; int * rx_buffer_info; scalar_t__ next_to_use; scalar_t__ next_to_clean; scalar_t__ next_to_alloc; int desc; int dma; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int,int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;

int FUNC_5(struct igc_ring *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4, VAR_5;

 VAR_4 = sizeof(struct igc_rx_buffer) * VAR_2->count;
 VAR_2->rx_buffer_info = FUNC_4(VAR_4);
 if (!VAR_2->rx_buffer_info)
  goto err;

 VAR_5 = sizeof(union igc_adv_rx_desc);


 VAR_2->size = VAR_2->count * VAR_5;
 VAR_2->size = FUNC_0(VAR_2->size, 4096);

 VAR_2->desc = FUNC_2(VAR_3, VAR_2->size,
        &VAR_2->dma, VAR_1);

 if (!VAR_2->desc)
  goto err;

 VAR_2->next_to_alloc = 0;
 VAR_2->next_to_clean = 0;
 VAR_2->next_to_use = 0;

 return 0;

err:
 FUNC_3(VAR_2->rx_buffer_info);
 VAR_2->rx_buffer_info = ((void*)0);
 FUNC_1(VAR_3,
  "Unable to allocate memory for the receive descriptor ring\n");
 return -VAR_0;
}
