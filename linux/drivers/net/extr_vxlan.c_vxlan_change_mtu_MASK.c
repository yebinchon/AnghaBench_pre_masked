
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlan_rdst {int remote_ifindex; } ;
struct TYPE_2__ {int flags; } ;
struct vxlan_dev {TYPE_1__ cfg; int net; struct vxlan_rdst default_dst; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (int ,int ) ;
 struct vxlan_dev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, int VAR_5)
{
 struct vxlan_dev *VAR_6 = FUNC_1(VAR_4);
 struct vxlan_rdst *VAR_7 = &VAR_6->default_dst;
 struct net_device *VAR_8 = FUNC_0(VAR_6->net,
        VAR_7->remote_ifindex);
 bool VAR_9 = !!(VAR_6->cfg.flags & VAR_2);




 if (VAR_8) {
  int VAR_10 = VAR_8->mtu -
         (VAR_9 ? VAR_1 : VAR_3);
  if (VAR_5 > VAR_10)
   return -VAR_0;
 }

 VAR_4->mtu = VAR_5;
 return 0;
}
