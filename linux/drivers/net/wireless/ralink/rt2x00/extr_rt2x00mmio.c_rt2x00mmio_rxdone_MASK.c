
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct skb_frame_desc {int desc_len; int desc; } ;
struct rt2x00_dev {TYPE_2__* ops; struct data_queue* rx; } ;
struct queue_entry_priv_mmio {int desc; } ;
struct queue_entry {TYPE_3__* queue; int skb; struct queue_entry_priv_mmio* priv_data; } ;
struct data_queue {int dummy; } ;
struct TYPE_6__ {int desc_size; } ;
struct TYPE_5__ {TYPE_1__* lib; } ;
struct TYPE_4__ {scalar_t__ (* get_entry_state ) (struct queue_entry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct skb_frame_desc* FUNC_0 (int ) ;
 int FUNC_1 (struct queue_entry*) ;
 int FUNC_2 (struct queue_entry*) ;
 int FUNC_3 (struct queue_entry*,int ) ;
 struct queue_entry* FUNC_4 (struct data_queue*,int ) ;
 scalar_t__ FUNC_5 (struct queue_entry*) ;

bool FUNC_6(struct rt2x00_dev *VAR_2)
{
 struct data_queue *VAR_3 = VAR_2->rx;
 struct queue_entry *VAR_4;
 struct queue_entry_priv_mmio *VAR_5;
 struct skb_frame_desc *VAR_6;
 int VAR_7 = 16;

 while (--VAR_7) {
  VAR_4 = FUNC_4(VAR_3, VAR_1);
  VAR_5 = VAR_4->priv_data;

  if (VAR_2->ops->lib->get_entry_state(VAR_4))
   break;




  VAR_6 = FUNC_0(VAR_4->skb);
  VAR_6->desc = VAR_5->desc;
  VAR_6->desc_len = VAR_4->queue->desc_size;





  FUNC_2(VAR_4);
  FUNC_1(VAR_4);




  FUNC_3(VAR_4, VAR_0);
 }

 return !VAR_7;
}
