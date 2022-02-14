
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnet_port {int q_index; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 struct vnet_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u16 FUNC_1(struct net_device *VAR_0, struct sk_buff *VAR_1,
       struct net_device *VAR_2)
{
 struct vnet_port *VAR_3 = FUNC_0(VAR_0);

 if (!VAR_3)
  return 0;

 return VAR_3->q_index;
}
