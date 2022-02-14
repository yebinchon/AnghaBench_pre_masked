
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct vxlan_rdst {struct net_device* remote_dev; int remote_ifindex; int remote_vni; int remote_ip; } ;
struct TYPE_2__ {scalar_t__ age_interval; int dst_port; } ;
struct vxlan_dev {int net; int age_timer; TYPE_1__ cfg; int * hash_lock; struct vxlan_rdst default_dst; } ;
struct vxlan_config {scalar_t__ age_interval; int remote_ifindex; int vni; int remote_ip; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vxlan_dev*,int ,int ,int ,int ,int ,int ,int) ;
 int VAR_5 ;
 size_t FUNC_1 (struct vxlan_dev*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct net_device*,struct net_device*,struct net_device*) ;
 int FUNC_4 (struct net_device*,struct net_device*,struct net_device*) ;
 int FUNC_5 (struct net_device*,struct net_device*,struct net_device*,struct netlink_ext_ack*) ;
 struct vxlan_dev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (struct net_device*,struct vxlan_config*,struct net_device*,int ,int) ;
 int FUNC_13 (int ,struct vxlan_config*,struct net_device**,struct vxlan_dev*,struct netlink_ext_ack*) ;
 int FUNC_14 (struct vxlan_dev*,int ,int *,int,int,int ,int ,int ,int ,int ,int,struct netlink_ext_ack*) ;
 int FUNC_15 (struct nlattr**,struct nlattr**,struct net_device*,struct vxlan_config*,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_7, struct nlattr *VAR_8[],
       struct nlattr *VAR_9[],
       struct netlink_ext_ack *VAR_10)
{
 struct vxlan_dev *VAR_11 = FUNC_6(VAR_7);
 struct net_device *VAR_12;
 struct vxlan_config VAR_13;
 struct vxlan_rdst *VAR_14;
 int VAR_15;

 VAR_14 = &VAR_11->default_dst;
 VAR_15 = FUNC_15(VAR_8, VAR_9, VAR_7, &VAR_13, 1, VAR_10);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_13(VAR_11->net, &VAR_13, &VAR_12,
        VAR_11, VAR_10);
 if (VAR_15)
  return VAR_15;

 if (VAR_14->remote_dev == VAR_12)
  VAR_12 = ((void*)0);

 VAR_15 = FUNC_5(VAR_14->remote_dev, VAR_12, VAR_7,
          VAR_10);
 if (VAR_15)
  return VAR_15;


 if (!FUNC_11(&VAR_13.remote_ip, &VAR_14->remote_ip)) {
  u32 VAR_16 = FUNC_1(VAR_11, VAR_5, VAR_13.vni);

  FUNC_8(&VAR_11->hash_lock[VAR_16]);
  if (!FUNC_10(&VAR_13.remote_ip)) {
   VAR_15 = FUNC_14(VAR_11, VAR_5,
            &VAR_13.remote_ip,
            VAR_4 | VAR_3,
            VAR_0 | VAR_1,
            VAR_11->cfg.dst_port,
            VAR_13.vni, VAR_13.vni,
            VAR_13.remote_ifindex,
            VAR_2, 1, VAR_10);
   if (VAR_15) {
    FUNC_9(&VAR_11->hash_lock[VAR_16]);
    FUNC_3(VAR_14->remote_dev,
            VAR_12, VAR_7);
    return VAR_15;
   }
  }
  if (!FUNC_10(&VAR_14->remote_ip))
   FUNC_0(VAR_11, VAR_5,
        VAR_14->remote_ip,
        VAR_11->cfg.dst_port,
        VAR_14->remote_vni,
        VAR_14->remote_vni,
        VAR_14->remote_ifindex,
        1);
  FUNC_9(&VAR_11->hash_lock[VAR_16]);
 }

 if (VAR_13.age_interval != VAR_11->cfg.age_interval)
  FUNC_2(&VAR_11->age_timer, VAR_6);

 FUNC_4(VAR_14->remote_dev, VAR_12, VAR_7);
 if (VAR_12 && VAR_12 != VAR_14->remote_dev) {
  VAR_14->remote_dev = VAR_12;
  FUNC_7(VAR_12);
 }
 FUNC_12(VAR_7, &VAR_13, VAR_12, VAR_11->net, 1);
 return 0;
}
