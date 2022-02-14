
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bnx2x_udp_tunnel {int count; scalar_t__ dst_port; } ;
struct bnx2x {int dev; struct bnx2x_udp_tunnel* udp_tunnel_ports; } ;
typedef enum bnx2x_udp_port_type { ____Placeholder_bnx2x_udp_port_type } bnx2x_udp_port_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_2, u16 VAR_3,
     enum bnx2x_udp_port_type VAR_4)
{
 struct bnx2x_udp_tunnel *VAR_5 = &VAR_2->udp_tunnel_ports[VAR_4];

 if (!FUNC_4(VAR_2->dev) || !FUNC_2(VAR_2) || FUNC_0(VAR_2))
  return;

 if (VAR_5->count && VAR_5->dst_port == VAR_3) {
  VAR_5->count++;
  return;
 }

 if (VAR_5->count) {
  FUNC_1(VAR_0,
     "UDP tunnel [%d] -  destination port limit reached\n",
     VAR_4);
  return;
 }

 VAR_5->dst_port = VAR_3;
 VAR_5->count = 1;
 FUNC_3(VAR_2, VAR_1, 0);
}
