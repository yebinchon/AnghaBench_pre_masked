
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_data_hdr {int dummy; } ;
struct net_device {int needs_free_netdev; int hw_features; int needed_headroom; int watchdog_timeo; int * netdev_ops; } ;
struct ath6kl_llc_snap_hdr {int dummy; } ;
struct ath6kl {int fw_capabilities; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct ath6kl* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct net_device *VAR_9)
{
 struct ath6kl *VAR_10 = FUNC_0(VAR_9);

 VAR_9->netdev_ops = &VAR_8;
 VAR_9->needs_free_netdev = 1;
 VAR_9->watchdog_timeo = VAR_2;

 VAR_9->needed_headroom = VAR_3;
 VAR_9->needed_headroom += FUNC_1(sizeof(struct ath6kl_llc_snap_hdr) +
     sizeof(struct wmi_data_hdr) +
     VAR_4 +
     VAR_7 +
     VAR_1, 4);

 if (!FUNC_2(VAR_0,
        VAR_10->fw_capabilities))
  VAR_9->hw_features |= VAR_5 | VAR_6;

 return;
}
