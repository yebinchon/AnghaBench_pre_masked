
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlan_sock {int dummy; } ;
struct vxlan_net {int sock_lock; } ;
struct vxlan_dev_node {int hlist; struct vxlan_dev* vxlan; } ;
struct TYPE_2__ {int remote_vni; } ;
struct vxlan_dev {TYPE_1__ default_dst; int net; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int ) ;
 struct vxlan_net* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vxlan_sock*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct vxlan_sock *VAR_1, struct vxlan_dev *VAR_2,
        struct vxlan_dev_node *VAR_3)
{
 struct vxlan_net *VAR_4 = FUNC_1(VAR_2->net, VAR_0);
 __be32 VAR_5 = VAR_2->default_dst.remote_vni;

 VAR_3->vxlan = VAR_2;
 FUNC_2(&VAR_4->sock_lock);
 FUNC_0(&VAR_3->hlist, FUNC_4(VAR_1, VAR_5));
 FUNC_3(&VAR_4->sock_lock);
}
