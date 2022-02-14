
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

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, u32 VAR_1)
{
 struct vnet_port *VAR_2 = FUNC_0(VAR_0);

 VAR_2->vp->msg_enable = VAR_1;
}
