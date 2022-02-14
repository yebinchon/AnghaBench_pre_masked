
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net_device {int priv_flags; } ;
struct TYPE_2__ {struct net_device* loopback_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct net_device*,struct netlink_ext_ack*) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct net_device*,int *,int *,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct net_device *VAR_3,
       struct netlink_ext_ack *VAR_4)
{
 int VAR_5;




 if (VAR_3 == FUNC_2(VAR_2)->loopback_dev) {
  FUNC_0(VAR_4,
          "Can not enslave loopback device to a VRF");
  return -VAR_0;
 }

 VAR_3->priv_flags |= VAR_1;
 VAR_5 = FUNC_3(VAR_3, VAR_2, ((void*)0), ((void*)0), VAR_4);
 if (VAR_5 < 0)
  goto err;

 FUNC_1(VAR_3, VAR_4);

 return 0;

err:
 VAR_3->priv_flags &= ~VAR_1;
 return VAR_5;
}
