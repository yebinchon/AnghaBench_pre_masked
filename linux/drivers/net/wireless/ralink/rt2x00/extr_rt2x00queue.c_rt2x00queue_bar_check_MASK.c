
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_dev {int bar_list_lock; int bar_list; scalar_t__ extra_tx_headroom; } ;
struct rt2x00_bar_list_entry {int list; int start_seq_num; int control; int ta; int ra; scalar_t__ block_acked; struct queue_entry* entry; } ;
struct queue_entry {TYPE_2__* skb; TYPE_1__* queue; } ;
struct ieee80211_bar {int start_seq_num; int control; int ta; int ra; int frame_control; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct rt2x00_bar_list_entry* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct queue_entry *VAR_1)
{
 struct rt2x00_dev *VAR_2 = VAR_1->queue->rt2x00dev;
 struct ieee80211_bar *VAR_3 = (void *) (VAR_1->skb->data +
        VAR_2->extra_tx_headroom);
 struct rt2x00_bar_list_entry *VAR_4;

 if (FUNC_2(!FUNC_0(VAR_3->frame_control)))
  return;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);






 if (!VAR_4)
  return;

 VAR_4->entry = VAR_1;
 VAR_4->block_acked = 0;







 FUNC_4(VAR_4->ra, VAR_3->ra, sizeof(VAR_3->ra));
 FUNC_4(VAR_4->ta, VAR_3->ta, sizeof(VAR_3->ta));
 VAR_4->control = VAR_3->control;
 VAR_4->start_seq_num = VAR_3->start_seq_num;




 FUNC_5(&VAR_2->bar_list_lock);
 FUNC_3(&VAR_4->list, &VAR_2->bar_list);
 FUNC_6(&VAR_2->bar_list_lock);
}
