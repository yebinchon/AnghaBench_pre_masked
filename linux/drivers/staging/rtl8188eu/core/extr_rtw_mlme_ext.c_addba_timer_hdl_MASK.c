
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ht_priv {int candidate_tid_bitmap; scalar_t__ ampdu_enable; scalar_t__ ht_option; } ;
struct sta_info {struct ht_priv htpriv; } ;


 int VAR_0 ;
 struct sta_info* FUNC_0 (int ,struct timer_list*,int ) ;
 struct sta_info* VAR_1 ;

void FUNC_1(struct timer_list *VAR_2)
{
 struct sta_info *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 struct ht_priv *VAR_4;

 if (!VAR_3)
  return;

 VAR_4 = &VAR_3->htpriv;

 if ((VAR_4->ht_option) && (VAR_4->ampdu_enable)) {
  if (VAR_4->candidate_tid_bitmap)
   VAR_4->candidate_tid_bitmap = 0x0;
 }
}
