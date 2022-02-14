
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {scalar_t__ mtu; int priv_flags; int max_mtu; int min_mtu; } ;
struct net {int dummy; } ;
struct macvlan_port {int dev; int vlans; scalar_t__ count; } ;
struct macvlan_dev {scalar_t__ mode; int list; int flags; int set_features; struct macvlan_port* port; struct net_device* dev; struct net_device* lowerdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 struct net_device* FUNC_0 (struct net*,void*) ;
 int FUNC_1 (struct net_device*,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct macvlan_dev*,int,struct nlattr**) ;
 struct net_device* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct macvlan_port*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 struct macvlan_port* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct macvlan_port*) ;
 struct macvlan_dev* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,struct net_device*,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*,struct net_device*) ;
 int FUNC_17 (struct nlattr*) ;
 void* FUNC_18 (struct nlattr*) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct net_device*) ;

int FUNC_21(struct net *VAR_14, struct net_device *VAR_15,
      struct nlattr *VAR_16[], struct nlattr *VAR_17[],
      struct netlink_ext_ack *VAR_18)
{
 struct macvlan_dev *VAR_19 = FUNC_12(VAR_15);
 struct macvlan_port *VAR_20;
 struct net_device *VAR_21;
 int VAR_22;
 int VAR_23;
 bool VAR_24 = 0;

 if (!VAR_16[VAR_5])
  return -VAR_0;

 VAR_21 = FUNC_0(VAR_14, FUNC_18(VAR_16[VAR_5]));
 if (VAR_21 == ((void*)0))
  return -VAR_1;




 if (FUNC_14(VAR_21))
  VAR_21 = FUNC_6(VAR_21);

 if (!VAR_16[VAR_9])
  VAR_15->mtu = VAR_21->mtu;
 else if (VAR_15->mtu > VAR_21->mtu)
  return -VAR_0;


 VAR_15->min_mtu = VAR_2;
 VAR_15->max_mtu = VAR_21->max_mtu;

 if (!VAR_16[VAR_4])
  FUNC_2(VAR_15);

 if (!FUNC_15(VAR_21)) {
  VAR_22 = FUNC_8(VAR_21);
  if (VAR_22 < 0)
   return VAR_22;
  VAR_24 = 1;
 }
 VAR_20 = FUNC_10(VAR_21);


 if (FUNC_7(VAR_20)) {



  VAR_22 = -VAR_0;
  goto destroy_macvlan_port;
 }

 VAR_19->lowerdev = VAR_21;
 VAR_19->dev = VAR_15;
 VAR_19->port = VAR_20;
 VAR_19->set_features = VAR_10;

 VAR_19->mode = VAR_13;
 if (VAR_17 && VAR_17[VAR_8])
  VAR_19->mode = FUNC_18(VAR_17[VAR_8]);

 if (VAR_17 && VAR_17[VAR_6])
  VAR_19->flags = FUNC_17(VAR_17[VAR_6]);

 if (VAR_19->mode == VAR_11) {
  if (VAR_20->count) {
   VAR_22 = -VAR_0;
   goto destroy_macvlan_port;
  }
  FUNC_11(VAR_20);
  FUNC_1(VAR_15, VAR_21);
 }

 if (VAR_17 && VAR_17[VAR_7]) {
  if (VAR_19->mode != VAR_12) {
   VAR_22 = -VAR_0;
   goto destroy_macvlan_port;
  }
  VAR_23 = FUNC_18(VAR_17[VAR_7]);
  VAR_22 = FUNC_5(VAR_19, VAR_23, VAR_17);
  if (VAR_22)
   goto destroy_macvlan_port;
 }

 VAR_22 = FUNC_19(VAR_15);
 if (VAR_22 < 0)
  goto destroy_macvlan_port;

 VAR_15->priv_flags |= VAR_3;
 VAR_22 = FUNC_13(VAR_21, VAR_15, VAR_18);
 if (VAR_22)
  goto unregister_netdev;

 FUNC_4(&VAR_19->list, &VAR_20->vlans);
 FUNC_16(VAR_21, VAR_15);
 FUNC_3(VAR_15);

 return 0;

unregister_netdev:

 FUNC_20(VAR_15);
 return VAR_22;
destroy_macvlan_port:



 if (VAR_24 && FUNC_10(VAR_21))
  FUNC_9(VAR_20->dev);
 return VAR_22;
}
