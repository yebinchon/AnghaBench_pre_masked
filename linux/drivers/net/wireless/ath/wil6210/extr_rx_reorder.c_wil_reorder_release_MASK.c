
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_tid_ampdu_rx {int head_seq_num; scalar_t__* reorder_buf; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct wil_tid_ampdu_rx*,int ) ;
 int FUNC_1 (struct net_device*,struct wil_tid_ampdu_rx*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
    struct wil_tid_ampdu_rx *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1, VAR_1->head_seq_num);

 while (VAR_1->reorder_buf[VAR_2]) {
  FUNC_1(VAR_0, VAR_1, VAR_2);
  VAR_2 = FUNC_0(VAR_1, VAR_1->head_seq_num);
 }
}
