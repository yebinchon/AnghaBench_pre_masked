
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int delayed_listen_work; int discovery_expired_work; int discovery_timer; } ;
struct wil6210_vif {int enable_tx_key_worker; int probe_client_worker; TYPE_1__ p2p; int disconnect_worker; int scan_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wil6210_vif*) ;

__attribute__((used)) static void FUNC_3(struct wil6210_vif *VAR_0)
{
 FUNC_1(&VAR_0->scan_timer);
 FUNC_1(&VAR_0->p2p.discovery_timer);
 FUNC_0(&VAR_0->disconnect_worker);
 FUNC_0(&VAR_0->p2p.discovery_expired_work);
 FUNC_0(&VAR_0->p2p.delayed_listen_work);
 FUNC_2(VAR_0);
 FUNC_0(&VAR_0->probe_client_worker);
 FUNC_0(&VAR_0->enable_tx_key_worker);
}
