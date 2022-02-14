
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_bar {int frame_control; } ;
struct carl9170_bar_list_entry {int list; struct sk_buff* skb; } ;
struct ar9170 {int * bar_list_lock; int * bar_list; } ;
struct _carl9170_tx_superframe {scalar_t__ frame_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct carl9170_bar_list_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ar9170 *VAR_1, struct sk_buff *VAR_2)
{
 struct _carl9170_tx_superframe *VAR_3 = (void *) VAR_2->data;
 struct ieee80211_bar *VAR_4 = (void *) VAR_3->frame_data;

 if (FUNC_7(FUNC_1(VAR_4->frame_control)) &&
     VAR_2->len >= sizeof(struct ieee80211_bar)) {
  struct carl9170_bar_list_entry *VAR_5;
  unsigned int VAR_6 = FUNC_4(VAR_2);

  VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
  if (!FUNC_0(!VAR_5)) {
   VAR_5->skb = VAR_2;
   FUNC_5(&VAR_1->bar_list_lock[VAR_6]);
   FUNC_3(&VAR_5->list, &VAR_1->bar_list[VAR_6]);
   FUNC_6(&VAR_1->bar_list_lock[VAR_6]);
  }
 }
}
