
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union fm10k_rx_desc {int dummy; } fm10k_rx_desc ;
struct fm10k_rx_buffer {int dummy; } ;
struct fm10k_ring {int count; int size; int * rx_buffer; int desc; int dma; int syncp; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;

int FUNC_5(struct fm10k_ring *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4;

 VAR_4 = sizeof(struct fm10k_rx_buffer) * VAR_2->count;

 VAR_2->rx_buffer = FUNC_4(VAR_4);
 if (!VAR_2->rx_buffer)
  goto err;

 FUNC_2(&VAR_2->syncp);


 VAR_2->size = VAR_2->count * sizeof(union fm10k_rx_desc);
 VAR_2->size = FUNC_0(VAR_2->size, 4096);

 VAR_2->desc = FUNC_1(VAR_3, VAR_2->size,
        &VAR_2->dma, VAR_1);
 if (!VAR_2->desc)
  goto err;

 return 0;
err:
 FUNC_3(VAR_2->rx_buffer);
 VAR_2->rx_buffer = ((void*)0);
 return -VAR_0;
}
