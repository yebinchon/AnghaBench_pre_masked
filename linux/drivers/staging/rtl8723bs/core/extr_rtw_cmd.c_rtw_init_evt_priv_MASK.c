
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evt_priv {int c2h_wk_alive; int c2h_queue; int c2h_wk; scalar_t__ evt_done_cnt; int event_seq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct evt_priv *VAR_3)
{

 FUNC_1(&VAR_3->event_seq, 0);
 VAR_3->evt_done_cnt = 0;

 FUNC_0(&VAR_3->c2h_wk, VAR_2, ((void*)0));
 VAR_3->c2h_wk_alive = 0;
 VAR_3->c2h_queue = FUNC_2(VAR_0+1);
 if (!VAR_3->c2h_queue)
  return -VAR_1;

 return 0;
}
