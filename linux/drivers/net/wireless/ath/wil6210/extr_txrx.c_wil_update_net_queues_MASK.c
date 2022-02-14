
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_ring {int dummy; } ;
struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int net_queue_lock; } ;


 int FUNC_0 (struct wil6210_priv*,struct wil6210_vif*,struct wil_ring*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct wil6210_priv *VAR_0, struct wil6210_vif *VAR_1,
      struct wil_ring *VAR_2, bool VAR_3)
{
 FUNC_1(&VAR_0->net_queue_lock);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->net_queue_lock);
}
