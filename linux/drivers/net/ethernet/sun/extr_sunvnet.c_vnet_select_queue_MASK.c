
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnet_port {int q_index; } ;
struct vnet {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 struct vnet_port* FUNC_0 (struct vnet*,struct sk_buff*) ;
 struct vnet* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u16 FUNC_2(struct net_device *VAR_0, struct sk_buff *VAR_1,
        struct net_device *VAR_2)
{
 struct vnet *VAR_3 = FUNC_1(VAR_0);
 struct vnet_port *VAR_4 = FUNC_0(VAR_3, VAR_1);

 if (!VAR_4)
  return 0;

 return VAR_4->q_index;
}
