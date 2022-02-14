
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wil_tid_ampdu_rx {int head_seq_num; scalar_t__ stored_mpdu_num; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct wil_tid_ampdu_rx*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct net_device*,struct wil_tid_ampdu_rx*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
           struct wil_tid_ampdu_rx *VAR_1,
           u16 VAR_2)
{
 int VAR_3;







 while (FUNC_1(VAR_1->head_seq_num, VAR_2) && VAR_1->stored_mpdu_num) {
  VAR_3 = FUNC_0(VAR_1, VAR_1->head_seq_num);
  FUNC_2(VAR_0, VAR_1, VAR_3);
 }
 VAR_1->head_seq_num = VAR_2;
}
