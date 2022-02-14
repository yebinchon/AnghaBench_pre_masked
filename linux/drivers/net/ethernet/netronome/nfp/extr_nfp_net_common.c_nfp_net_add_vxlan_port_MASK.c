
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_tunnel_info {scalar_t__ type; int port; } ;
struct nfp_net {int * vxlan_usecnt; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nfp_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nfp_net*,int ) ;
 int FUNC_2 (struct nfp_net*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
       struct udp_tunnel_info *VAR_3)
{
 struct nfp_net *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 if (VAR_3->type != VAR_1)
  return;

 VAR_5 = FUNC_1(VAR_4, VAR_3->port);
 if (VAR_5 == -VAR_0)
  return;

 if (!VAR_4->vxlan_usecnt[VAR_5]++)
  FUNC_2(VAR_4, VAR_5, VAR_3->port);
}
