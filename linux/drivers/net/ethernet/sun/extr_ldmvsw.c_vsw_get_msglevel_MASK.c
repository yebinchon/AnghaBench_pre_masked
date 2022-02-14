
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vnet_port {TYPE_1__* vp; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int msg_enable; } ;


 struct vnet_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_0)
{
 struct vnet_port *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->vp->msg_enable;
}
