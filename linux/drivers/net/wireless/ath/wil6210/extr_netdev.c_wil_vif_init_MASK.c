
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int delayed_listen_work; int discovery_expired_work; int discovery_timer; } ;
struct wil6210_vif {int bcast_ring; int net_queue_stopped; int probe_client_pending; int enable_tx_key_worker; TYPE_1__ p2p; int disconnect_worker; int probe_client_worker; int scan_timer; int connect_timer; int probe_client_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(struct wil6210_vif *VAR_8)
{
 VAR_8->bcast_ring = -1;

 FUNC_2(&VAR_8->probe_client_mutex);

 FUNC_3(&VAR_8->connect_timer, VAR_0, 0);
 FUNC_3(&VAR_8->scan_timer, VAR_7, 0);
 FUNC_3(&VAR_8->p2p.discovery_timer, VAR_4, 0);

 FUNC_1(&VAR_8->probe_client_worker, VAR_6);
 FUNC_1(&VAR_8->disconnect_worker, VAR_1);
 FUNC_1(&VAR_8->p2p.discovery_expired_work, VAR_5);
 FUNC_1(&VAR_8->p2p.delayed_listen_work, VAR_3);
 FUNC_1(&VAR_8->enable_tx_key_worker, VAR_2);

 FUNC_0(&VAR_8->probe_client_pending);

 VAR_8->net_queue_stopped = 1;
}
