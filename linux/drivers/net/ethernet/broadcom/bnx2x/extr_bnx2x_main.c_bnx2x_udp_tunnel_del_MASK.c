
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct udp_tunnel_info {int type; int port; } ;
struct net_device {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct bnx2x*,int ,int ) ;
 struct bnx2x* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
     struct udp_tunnel_info *VAR_3)
{
 struct bnx2x *VAR_4 = FUNC_1(VAR_2);
 u16 VAR_5 = FUNC_2(VAR_3->port);

 switch (VAR_3->type) {
 case 128:
  FUNC_0(VAR_4, VAR_5, VAR_1);
  break;
 case 129:
  FUNC_0(VAR_4, VAR_5, VAR_0);
  break;
 default:
  break;
 }
}
