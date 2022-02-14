
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlan_rdst {struct net_device* remote_dev; int remote_vni; scalar_t__ remote_ifindex; int remote_ip; } ;
struct vxlan_net {int vxlan_list; } ;
struct vxlan_fdb {int dummy; } ;
struct TYPE_2__ {int dst_port; } ;
struct vxlan_dev {int next; TYPE_1__ cfg; struct vxlan_rdst default_dst; } ;
struct vxlan_config {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int * ethtool_ops; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 int FUNC_1 (struct vxlan_fdb*) ;
 int VAR_4 ;
 int FUNC_2 (struct vxlan_fdb*) ;
 int FUNC_3 (int *,int *) ;
 struct vxlan_net* FUNC_4 (struct net*,int ) ;
 struct vxlan_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_7 (struct net_device*,struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int *) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct net*,struct net_device*,struct vxlan_config*,int,struct netlink_ext_ack*) ;
 int VAR_5 ;
 int FUNC_13 (struct vxlan_dev*,int ,int *,int,int ,int ,int ,scalar_t__,int ,struct vxlan_fdb**) ;
 int FUNC_14 (struct vxlan_dev*,struct vxlan_fdb*,int,int) ;
 int FUNC_15 (struct vxlan_dev*,int ,int ,struct vxlan_fdb*) ;
 int FUNC_16 (struct vxlan_dev*,struct vxlan_fdb*,int ,int ,int,struct netlink_ext_ack*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_17(struct net *VAR_7, struct net_device *VAR_8,
         struct vxlan_config *VAR_9,
         struct netlink_ext_ack *VAR_10)
{
 struct vxlan_net *VAR_11 = FUNC_4(VAR_7, VAR_6);
 struct vxlan_dev *VAR_12 = FUNC_5(VAR_8);
 struct net_device *VAR_13 = ((void*)0);
 struct vxlan_fdb *VAR_14 = ((void*)0);
 bool VAR_15 = 0;
 struct vxlan_rdst *VAR_16;
 int VAR_17;

 VAR_16 = &VAR_12->default_dst;
 VAR_17 = FUNC_12(VAR_7, VAR_8, VAR_9, 0, VAR_10);
 if (VAR_17)
  return VAR_17;

 VAR_8->ethtool_ops = &VAR_5;


 if (!FUNC_11(&VAR_16->remote_ip)) {
  VAR_17 = FUNC_13(VAR_12, VAR_4,
           &VAR_16->remote_ip,
           VAR_2 | VAR_1,
           VAR_12->cfg.dst_port,
           VAR_16->remote_vni,
           VAR_16->remote_vni,
           VAR_16->remote_ifindex,
           VAR_0, &VAR_14);
  if (VAR_17)
   return VAR_17;
 }

 VAR_17 = FUNC_8(VAR_8);
 if (VAR_17)
  goto errout;
 VAR_15 = 1;

 if (VAR_16->remote_ifindex) {
  VAR_13 = FUNC_0(VAR_7, VAR_16->remote_ifindex);
  if (!VAR_13)
   goto errout;

  VAR_17 = FUNC_6(VAR_13, VAR_8, VAR_10);
  if (VAR_17)
   goto errout;
 }

 VAR_17 = FUNC_9(VAR_8, ((void*)0));
 if (VAR_17)
  goto unlink;

 if (VAR_14) {
  FUNC_15(VAR_12, VAR_4, VAR_16->remote_vni, VAR_14);


  VAR_17 = FUNC_16(VAR_12, VAR_14, FUNC_2(VAR_14),
           VAR_3, 1, VAR_10);
  if (VAR_17) {
   FUNC_14(VAR_12, VAR_14, 0, 0);
   if (VAR_13)
    FUNC_7(VAR_13, VAR_8);
   goto unregister;
  }
 }

 FUNC_3(&VAR_12->next, &VAR_11->vxlan_list);
 if (VAR_13)
  VAR_16->remote_dev = VAR_13;
 return 0;
unlink:
 if (VAR_13)
  FUNC_7(VAR_13, VAR_8);
errout:




 if (VAR_14)
  FUNC_1(VAR_14);
unregister:
 if (VAR_15)
  FUNC_10(VAR_8);
 return VAR_17;
}
