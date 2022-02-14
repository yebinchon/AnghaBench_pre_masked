
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int dev; int update_features; int count_rx_dropped; int count_tx_dropped; int tap_features; int queue_list; } ;
struct macvtap_dev {TYPE_1__ vlan; TYPE_2__ tap; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct net*,struct net_device*,struct nlattr**,struct nlattr**,struct netlink_ext_ack*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct macvtap_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,TYPE_2__*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct net *VAR_5, struct net_device *VAR_6,
      struct nlattr *VAR_7[], struct nlattr *VAR_8[],
      struct netlink_ext_ack *VAR_9)
{
 struct macvtap_dev *VAR_10 = FUNC_2(VAR_6);
 int VAR_11;

 FUNC_0(&VAR_10->tap.queue_list);




 VAR_10->tap.tap_features = VAR_0;




 VAR_10->tap.count_tx_dropped = VAR_2;
 VAR_10->tap.count_rx_dropped = VAR_1;
 VAR_10->tap.update_features = VAR_3;

 VAR_11 = FUNC_3(VAR_6, VAR_4, &VAR_10->tap);
 if (VAR_11)
  return VAR_11;




 VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_11) {
  FUNC_4(VAR_6);
  return VAR_11;
 }

 VAR_10->tap.dev = VAR_10->vlan.dev;

 return 0;
}
