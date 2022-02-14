
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skb_frame_desc {int skb_dma; } ;
struct queue_entry_priv_mmio {int desc; } ;
struct queue_entry {TYPE_1__* queue; int skb; struct queue_entry_priv_mmio* priv_data; } ;
struct TYPE_2__ {scalar_t__ qid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct skb_frame_desc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(struct queue_entry *VAR_5)
{
 struct queue_entry_priv_mmio *VAR_6 = VAR_5->priv_data;
 struct skb_frame_desc *VAR_7 = FUNC_0(VAR_5->skb);
 u32 VAR_8;

 if (VAR_5->queue->qid == VAR_0) {
  VAR_8 = FUNC_1(VAR_6->desc, 5);
  FUNC_3(&VAR_8, VAR_2,
       VAR_7->skb_dma);
  FUNC_2(VAR_6->desc, 5, VAR_8);

  VAR_8 = FUNC_1(VAR_6->desc, 0);
  FUNC_3(&VAR_8, VAR_1, 1);
  FUNC_2(VAR_6->desc, 0, VAR_8);
 } else {
  VAR_8 = FUNC_1(VAR_6->desc, 0);
  FUNC_3(&VAR_8, VAR_4, 0);
  FUNC_3(&VAR_8, VAR_3, 0);
  FUNC_2(VAR_6->desc, 0, VAR_8);
 }
}
