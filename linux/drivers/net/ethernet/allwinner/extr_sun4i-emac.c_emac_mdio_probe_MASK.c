
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct emac_board_info {int duplex; scalar_t__ speed; scalar_t__ link; int ndev; int phy_interface; int phy_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct emac_board_info* FUNC_1 (struct net_device*) ;
 struct phy_device* FUNC_2 (int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct emac_board_info *VAR_4 = FUNC_1(VAR_3);
 struct phy_device *VAR_5;




 VAR_5 = FUNC_2(VAR_4->ndev, VAR_4->phy_node,
    &VAR_2, 0,
    VAR_4->phy_interface);
 if (!VAR_5) {
  FUNC_0(VAR_4->ndev, "could not find the PHY\n");
  return -VAR_0;
 }


 FUNC_3(VAR_5, VAR_1);

 VAR_4->link = 0;
 VAR_4->speed = 0;
 VAR_4->duplex = -1;

 return 0;
}
