
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct udp_tunnel_info {int port; int type; } ;
struct net_device {int dummy; } ;
struct efx_udp_tunnel {int port; scalar_t__ type; } ;
struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int (* udp_tnl_del_port ) (struct efx_nic*,struct efx_udp_tunnel) ;} ;


 int FUNC_0 (int ) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct efx_nic*,struct efx_udp_tunnel) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, struct udp_tunnel_info *VAR_1)
{
 struct efx_nic *VAR_2 = FUNC_1(VAR_0);
 struct efx_udp_tunnel VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->type);
 if (VAR_4 < 0)
  return;

 VAR_3.type = (u16)VAR_4;
 VAR_3.port = VAR_1->port;

 if (VAR_2->type->udp_tnl_del_port)
  (void)VAR_2->type->udp_tnl_del_port(VAR_2, VAR_3);
}
