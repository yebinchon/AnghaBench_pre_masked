
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct grcan_dma_buffer {size_t size; size_t handle; scalar_t__ buf; } ;
struct grcan_dma {size_t base_handle; scalar_t__ base_buf; struct grcan_dma_buffer rx; struct grcan_dma_buffer tx; scalar_t__ base_size; } ;
struct grcan_priv {struct grcan_dma dma; } ;


 void* FUNC_0 (size_t,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,size_t*,int ) ;
 size_t FUNC_2 (size_t,size_t) ;
 size_t FUNC_3 (size_t,size_t) ;
 struct grcan_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
          size_t VAR_4, size_t VAR_5)
{
 struct grcan_priv *VAR_6 = FUNC_4(VAR_3);
 struct grcan_dma *VAR_7 = &VAR_6->dma;
 struct grcan_dma_buffer *VAR_8 = VAR_5 > VAR_4 ? &VAR_7->rx : &VAR_7->tx;
 struct grcan_dma_buffer *VAR_9 = VAR_5 > VAR_4 ? &VAR_7->tx : &VAR_7->rx;
 size_t VAR_10;




 size_t VAR_11 = FUNC_2(VAR_4, VAR_5);
 size_t VAR_12 = FUNC_0(VAR_11, VAR_2);


 size_t VAR_13 = FUNC_3(VAR_4, VAR_5);


 VAR_7->base_size = VAR_12 + VAR_13 + VAR_2;
 VAR_7->base_buf = FUNC_1(&VAR_3->dev,
        VAR_7->base_size,
        &VAR_7->base_handle,
        VAR_1);

 if (!VAR_7->base_buf)
  return -VAR_0;

 VAR_7->tx.size = VAR_4;
 VAR_7->rx.size = VAR_5;

 VAR_8->handle = FUNC_0(VAR_7->base_handle, VAR_2);
 VAR_9->handle = VAR_8->handle + VAR_12;
 VAR_10 = VAR_8->handle - VAR_7->base_handle;

 VAR_8->buf = VAR_7->base_buf + VAR_10;
 VAR_9->buf = VAR_8->buf + VAR_12;

 return 0;
}
