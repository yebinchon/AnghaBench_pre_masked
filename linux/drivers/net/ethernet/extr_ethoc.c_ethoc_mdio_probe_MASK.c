
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {int dev; } ;
struct ethoc {int phy_id; int old_duplex; int old_link; int mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int VAR_3 ;
 struct phy_device* FUNC_1 (int ,int) ;
 struct ethoc* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct phy_device*,int ,int ) ;
 struct phy_device* FUNC_4 (int ) ;
 int FUNC_5 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4)
{
 struct ethoc *VAR_5 = FUNC_2(VAR_4);
 struct phy_device *VAR_6;
 int VAR_7;

 if (VAR_5->phy_id != -1)
  VAR_6 = FUNC_1(VAR_5->mdio, VAR_5->phy_id);
 else
  VAR_6 = FUNC_4(VAR_5->mdio);

 if (!VAR_6) {
  FUNC_0(&VAR_4->dev, "no PHY found\n");
  return -VAR_0;
 }

 VAR_5->old_duplex = -1;
 VAR_5->old_link = -1;

 VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_3,
     VAR_1);
 if (VAR_7) {
  FUNC_0(&VAR_4->dev, "could not attach to PHY\n");
  return VAR_7;
 }

 FUNC_5(VAR_6, VAR_2);

 return 0;
}
