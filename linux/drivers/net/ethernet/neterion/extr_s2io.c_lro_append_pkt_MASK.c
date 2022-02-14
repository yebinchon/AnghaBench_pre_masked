
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct swStat {int clubbed_frms_cnt; } ;
struct sk_buff {scalar_t__ truesize; struct sk_buff* next; scalar_t__ len; int data_len; } ;
struct TYPE_5__ {TYPE_1__* stats_info; } ;
struct s2io_nic {TYPE_2__ mac_control; } ;
struct lro {struct sk_buff* last_frag; int frags_len; struct sk_buff* parent; } ;
struct TYPE_6__ {struct sk_buff* frag_list; } ;
struct TYPE_4__ {struct swStat sw_stat; } ;


 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct s2io_nic *VAR_0, struct lro *VAR_1,
      struct sk_buff *VAR_2, u32 VAR_3)
{
 struct sk_buff *VAR_4 = VAR_1->parent;
 struct swStat *VAR_5 = &VAR_0->mac_control.stats_info->sw_stat;

 VAR_4->len += VAR_3;
 VAR_4->data_len = VAR_1->frags_len;
 FUNC_0(VAR_2, (VAR_2->len - VAR_3));
 if (FUNC_1(VAR_4)->frag_list)
  VAR_1->last_frag->next = VAR_2;
 else
  FUNC_1(VAR_4)->frag_list = VAR_2;
 VAR_4->truesize += VAR_2->truesize;
 VAR_1->last_frag = VAR_2;
 VAR_5->clubbed_frms_cnt++;
}
