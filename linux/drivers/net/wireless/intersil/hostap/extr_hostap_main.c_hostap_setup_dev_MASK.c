
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int * ethtool_ops; int mtu; int * netdev_ops; int priv_flags; int * header_ops; int type; int watchdog_timeo; int * wireless_handlers; TYPE_1__* wireless_data; int max_mtu; int min_mtu; } ;
struct TYPE_4__ {int * spy_data; } ;
struct hostap_interface {TYPE_1__ wireless_data; int spy_data; } ;
struct TYPE_5__ {int mtu; } ;
typedef TYPE_2__ local_info_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 int VAR_11 ;

void FUNC_2(struct net_device *VAR_12, local_info_t *VAR_13,
        int VAR_14)
{
 struct hostap_interface *VAR_15;

 VAR_15 = FUNC_1(VAR_12);
 FUNC_0(VAR_12);
 VAR_12->min_mtu = VAR_4;
 VAR_12->max_mtu = VAR_3;
 VAR_12->priv_flags &= ~VAR_2;


 if (VAR_15) {


  VAR_15->wireless_data.spy_data = &VAR_15->spy_data;
  VAR_12->wireless_data = &VAR_15->wireless_data;
 }
 VAR_12->wireless_handlers = &VAR_7;
 VAR_12->watchdog_timeo = VAR_5;

 switch(VAR_14) {
 case 129:
  VAR_12->priv_flags |= VAR_1;
  VAR_12->netdev_ops = &VAR_9;
  VAR_12->type = VAR_0;
  VAR_12->header_ops = &VAR_6;
  break;
 case 128:
  VAR_12->netdev_ops = &VAR_8;
  break;
 default:
  VAR_12->priv_flags |= VAR_1;
  VAR_12->netdev_ops = &VAR_10;
 }

 VAR_12->mtu = VAR_13->mtu;


 VAR_12->ethtool_ops = &VAR_11;

}
