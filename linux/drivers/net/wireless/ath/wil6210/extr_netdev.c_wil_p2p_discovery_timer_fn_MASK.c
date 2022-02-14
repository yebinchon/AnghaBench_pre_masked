
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int discovery_expired_work; } ;
struct wil6210_vif {TYPE_1__ p2p; } ;
struct wil6210_priv {int dummy; } ;
struct timer_list {int dummy; } ;
struct TYPE_4__ {int discovery_timer; } ;


 struct wil6210_vif* FUNC_0 (int ,struct timer_list*,int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int *) ;
 struct wil6210_vif* VAR_1 ;
 struct wil6210_priv* FUNC_2 (struct wil6210_vif*) ;
 int FUNC_3 (struct wil6210_priv*,char*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct wil6210_vif *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0.discovery_timer);
 struct wil6210_priv *VAR_4 = FUNC_2(VAR_3);

 FUNC_3(VAR_4, "p2p_discovery_timer_fn\n");

 FUNC_1(&VAR_3->p2p.discovery_expired_work);
}
