
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct mv643xx_eth_private {int dev; } ;
typedef int phy_id ;


 int VAR_0 ;
 struct phy_device* FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (struct mv643xx_eth_private*) ;
 int VAR_4 ;
 int FUNC_3 (struct mv643xx_eth_private*) ;
 int FUNC_4 (struct mv643xx_eth_private*,int) ;
 struct phy_device* FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (char*,int,char*,char*,int) ;

__attribute__((used)) static struct phy_device *FUNC_7(struct mv643xx_eth_private *VAR_5,
       int VAR_6)
{
 struct phy_device *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 char VAR_11[VAR_1 + 3];

 if (VAR_6 == VAR_2) {
  VAR_8 = FUNC_3(VAR_5) & 0x1f;
  VAR_9 = 32;
 } else {
  VAR_8 = VAR_6 & 0x1f;
  VAR_9 = 1;
 }


 VAR_7 = FUNC_0(-VAR_0);
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  int VAR_12 = (VAR_8 + VAR_10) & 0x1f;

  FUNC_6(VAR_11, sizeof(VAR_11), VAR_3,
    "orion-mdio-mii", VAR_12);

  VAR_7 = FUNC_5(VAR_5->dev, VAR_11, VAR_4,
         FUNC_2(VAR_5));
  if (!FUNC_1(VAR_7)) {
   FUNC_4(VAR_5, VAR_12);
   break;
  }
 }

 return VAR_7;
}
