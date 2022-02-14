
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlr_net_priv {scalar_t__ phy_speed; int port_id; int base_addr; } ;
struct phy_device {scalar_t__ speed; scalar_t__ link; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct xlr_net_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ) ;
 struct phy_device* FUNC_2 (struct xlr_net_priv*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct xlr_net_priv*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1)
{
 struct xlr_net_priv *VAR_2 = FUNC_0(VAR_1);
 struct phy_device *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_3(VAR_2->base_addr, VAR_0);
 if (VAR_3->link) {
  if (VAR_3->speed != VAR_2->phy_speed) {
   FUNC_4(VAR_2);
   FUNC_1("gmac%d : Link up\n", VAR_2->port_id);
  }
 } else {
  FUNC_4(VAR_2);
  FUNC_1("gmac%d : Link down\n", VAR_2->port_id);
 }
}
