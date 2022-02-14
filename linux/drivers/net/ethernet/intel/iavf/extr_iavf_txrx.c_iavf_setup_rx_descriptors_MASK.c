
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iavf_32byte_rx_desc {int dummy; } iavf_32byte_rx_desc ;
struct iavf_rx_buffer {int dummy; } ;
struct iavf_ring {int count; int size; int * rx_bi; scalar_t__ next_to_use; scalar_t__ next_to_clean; scalar_t__ next_to_alloc; int desc; int dma; int syncp; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,int,int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct iavf_ring *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4;


 FUNC_1(VAR_2->rx_bi);
 VAR_4 = sizeof(struct iavf_rx_buffer) * VAR_2->count;
 VAR_2->rx_bi = FUNC_5(VAR_4, VAR_1);
 if (!VAR_2->rx_bi)
  goto err;

 FUNC_6(&VAR_2->syncp);


 VAR_2->size = VAR_2->count * sizeof(union iavf_32byte_rx_desc);
 VAR_2->size = FUNC_0(VAR_2->size, 4096);
 VAR_2->desc = FUNC_3(VAR_3, VAR_2->size,
        &VAR_2->dma, VAR_1);

 if (!VAR_2->desc) {
  FUNC_2(VAR_3, "Unable to allocate memory for the Rx descriptor ring, size=%d\n",
    VAR_2->size);
  goto err;
 }

 VAR_2->next_to_alloc = 0;
 VAR_2->next_to_clean = 0;
 VAR_2->next_to_use = 0;

 return 0;
err:
 FUNC_4(VAR_2->rx_bi);
 VAR_2->rx_bi = ((void*)0);
 return -VAR_0;
}
