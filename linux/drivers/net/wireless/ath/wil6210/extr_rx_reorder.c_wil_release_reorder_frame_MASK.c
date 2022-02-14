
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_tid_ampdu_rx {int head_seq_num; struct sk_buff** reorder_buf; int stored_mpdu_num; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
          struct wil_tid_ampdu_rx *VAR_1,
          int VAR_2)
{
 struct sk_buff *VAR_3 = VAR_1->reorder_buf[VAR_2];

 if (!VAR_3)
  goto no_frame;


 VAR_1->stored_mpdu_num--;
 VAR_1->reorder_buf[VAR_2] = ((void*)0);
 FUNC_1(VAR_3, VAR_0);

no_frame:
 VAR_1->head_seq_num = FUNC_0(VAR_1->head_seq_num);
}
