
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int supported; int advertising; } ;
struct net_device {int dev; } ;
struct greth_private {int duplex; scalar_t__ speed; scalar_t__ link; scalar_t__ gbit_mac; int mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 struct greth_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct greth_private*) ;
 scalar_t__ FUNC_4 (struct greth_private*) ;
 int FUNC_5 (struct net_device*,struct phy_device*,int *,int ) ;
 struct phy_device* FUNC_6 (int ) ;
 int FUNC_7 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_6)
{
 struct greth_private *VAR_7 = FUNC_2(VAR_6);
 struct phy_device *VAR_8 = ((void*)0);
 int VAR_9;


 VAR_8 = FUNC_6(VAR_7->mdio);

 if (!VAR_8) {
  if (FUNC_4(VAR_7))
   FUNC_0(&VAR_6->dev, "no PHY found\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(VAR_6, VAR_8, &VAR_5,
     VAR_7->gbit_mac ? VAR_1 : VAR_2);
 if (VAR_9) {
  if (FUNC_3(VAR_7))
   FUNC_0(&VAR_6->dev, "could not attach to PHY\n");
  return VAR_9;
 }

 if (VAR_7->gbit_mac)
  FUNC_7(VAR_8, VAR_4);
 else
  FUNC_7(VAR_8, VAR_3);

 FUNC_1(VAR_8->advertising, VAR_8->supported);

 VAR_7->link = 0;
 VAR_7->speed = 0;
 VAR_7->duplex = -1;

 return 0;
}
