
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bnx2x_udp_tunnel {scalar_t__ dst_port; scalar_t__ count; } ;
struct bnx2x {int dev; struct bnx2x_udp_tunnel* udp_tunnel_ports; } ;
typedef enum bnx2x_udp_port_type { ____Placeholder_bnx2x_udp_port_type } bnx2x_udp_port_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_2, u16 VAR_3,
     enum bnx2x_udp_port_type VAR_4)
{
 struct bnx2x_udp_tunnel *VAR_5 = &VAR_2->udp_tunnel_ports[VAR_4];

 if (!FUNC_2(VAR_2) || FUNC_0(VAR_2))
  return;

 if (!VAR_5->count || VAR_5->dst_port != VAR_3) {
  FUNC_1(VAR_0, "Invalid UDP tunnel [%d] port\n",
     VAR_4);
  return;
 }


 VAR_5->count--;
 if (VAR_5->count)
  return;
 VAR_5->dst_port = 0;

 if (FUNC_4(VAR_2->dev))
  FUNC_3(VAR_2, VAR_1, 0);
 else
  FUNC_1(VAR_0, "Deleted UDP tunnel [%d] port %d\n",
     VAR_4, VAR_3);
}
