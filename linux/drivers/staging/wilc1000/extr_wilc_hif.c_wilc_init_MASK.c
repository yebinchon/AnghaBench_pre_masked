
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {int periodic_rssi; struct host_if_drv* hif_drv; struct wilc* wilc; } ;
struct wilc {scalar_t__ clients_count; int deinit_lock; } ;
struct net_device {int dummy; } ;
struct host_if_drv {scalar_t__ p2p_timeout; int hif_state; int remain_on_ch_timer; int connect_timer; int scan_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct host_if_drv* FUNC_0 (int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 struct wilc_vif* FUNC_4 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,int ,int ) ;

int FUNC_6(struct net_device *VAR_8, struct host_if_drv **VAR_9)
{
 struct host_if_drv *VAR_10;
 struct wilc_vif *VAR_11 = FUNC_4(VAR_8);
 struct wilc *VAR_12 = VAR_11->wilc;

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 *VAR_9 = VAR_10;

 VAR_11->hif_drv = VAR_10;

 if (VAR_12->clients_count == 0)
  FUNC_3(&VAR_12->deinit_lock);

 FUNC_5(&VAR_11->periodic_rssi, VAR_3, 0);
 FUNC_1(&VAR_11->periodic_rssi, VAR_4 + FUNC_2(5000));

 FUNC_5(&VAR_10->scan_timer, VAR_7, 0);
 FUNC_5(&VAR_10->connect_timer, VAR_6, 0);
 FUNC_5(&VAR_10->remain_on_ch_timer, VAR_5, 0);

 VAR_10->hif_state = VAR_2;

 VAR_10->p2p_timeout = 0;

 VAR_12->clients_count++;

 return 0;
}
