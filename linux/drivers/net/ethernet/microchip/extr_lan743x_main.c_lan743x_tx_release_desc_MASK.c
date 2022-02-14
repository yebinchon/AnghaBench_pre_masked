
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct lan743x_tx_descriptor {int flags; int data0; int * skb; scalar_t__ buffer_length; scalar_t__ dma_ptr; } ;
struct lan743x_tx_buffer_info {int flags; int data0; int * skb; scalar_t__ buffer_length; scalar_t__ dma_ptr; } ;
struct lan743x_tx {TYPE_2__* adapter; struct lan743x_tx_descriptor* buffer_info; struct lan743x_tx_descriptor* ring_cpu_ptr; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*,int *,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct lan743x_tx_descriptor*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct lan743x_tx *VAR_7,
        int VAR_8, bool VAR_9)
{
 struct lan743x_tx_buffer_info *VAR_10 = ((void*)0);
 struct lan743x_tx_descriptor *VAR_11 = ((void*)0);
 u32 VAR_12 = 0;
 bool VAR_13;

 VAR_11 = &VAR_7->ring_cpu_ptr[VAR_8];
 VAR_10 = &VAR_7->buffer_info[VAR_8];
 if (!(VAR_10->flags & VAR_1))
  goto done;

 VAR_12 = (VAR_11->data0) &
     VAR_6;
 if (VAR_12 == VAR_5)
  goto clean_up_data_descriptor;
 else
  goto clear_active;

clean_up_data_descriptor:
 if (VAR_10->dma_ptr) {
  if (VAR_10->flags &
      VAR_3) {
   FUNC_1(&VAR_7->adapter->pdev->dev,
           VAR_10->dma_ptr,
           VAR_10->buffer_length,
           VAR_0);
  } else {
   FUNC_2(&VAR_7->adapter->pdev->dev,
      VAR_10->dma_ptr,
      VAR_10->buffer_length,
      VAR_0);
  }
  VAR_10->dma_ptr = 0;
  VAR_10->buffer_length = 0;
 }
 if (!VAR_10->skb)
  goto clear_active;

 if (!(VAR_10->flags & VAR_4)) {
  FUNC_0(VAR_10->skb);
  goto clear_skb;
 }

 if (VAR_9) {
  FUNC_4(VAR_7->adapter);
  FUNC_0(VAR_10->skb);
 } else {
  VAR_13 = (VAR_10->flags &
          VAR_2) != 0;
  FUNC_3(VAR_7->adapter,
          VAR_10->skb, VAR_13);
 }

clear_skb:
 VAR_10->skb = ((void*)0);

clear_active:
 VAR_10->flags &= ~VAR_1;

done:
 FUNC_5(VAR_10, 0, sizeof(*VAR_10));
 FUNC_5(VAR_11, 0, sizeof(*VAR_11));
}
