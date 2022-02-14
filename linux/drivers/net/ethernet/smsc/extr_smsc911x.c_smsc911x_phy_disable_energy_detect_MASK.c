
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {struct net_device* dev; } ;
struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct smsc911x_data *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->dev;
 struct phy_device *VAR_5 = VAR_4->phydev;
 int VAR_6 = 0;

 if (!VAR_5)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_0);

 if (VAR_6 < 0) {
  FUNC_0(VAR_3, VAR_2, "Failed reading PHY control reg");
  return VAR_6;
 }


 if (VAR_6 & VAR_1) {

  VAR_6 = FUNC_3(VAR_5, VAR_0,
          VAR_6 & (~VAR_1));

  if (VAR_6 < 0) {
   FUNC_0(VAR_3, VAR_2, "Failed writing PHY control reg");
   return VAR_6;
  }

  FUNC_1(2);
 }

 return 0;
}
