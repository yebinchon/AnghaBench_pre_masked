
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_tunnel_info {scalar_t__ sa_family; int type; int port; } ;
struct net_device {int dummy; } ;
struct bnxt {int vxlan_port_cnt; int nge_port_cnt; int sp_event; int nge_port; int vxlan_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct bnxt*) ;
 struct bnxt* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4,
    struct udp_tunnel_info *VAR_5)
{
 struct bnxt *VAR_6 = FUNC_1(VAR_4);

 if (VAR_5->sa_family != VAR_1 && VAR_5->sa_family != VAR_0)
  return;

 if (!FUNC_2(VAR_4))
  return;

 switch (VAR_5->type) {
 case 128:
  if (VAR_6->vxlan_port_cnt && VAR_6->vxlan_port != VAR_5->port)
   return;

  VAR_6->vxlan_port_cnt++;
  if (VAR_6->vxlan_port_cnt == 1) {
   VAR_6->vxlan_port = VAR_5->port;
   FUNC_3(VAR_3, &VAR_6->sp_event);
   FUNC_0(VAR_6);
  }
  break;
 case 129:
  if (VAR_6->nge_port_cnt && VAR_6->nge_port != VAR_5->port)
   return;

  VAR_6->nge_port_cnt++;
  if (VAR_6->nge_port_cnt == 1) {
   VAR_6->nge_port = VAR_5->port;
   FUNC_3(VAR_2, &VAR_6->sp_event);
  }
  break;
 default:
  return;
 }

 FUNC_0(VAR_6);
}
