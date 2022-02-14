
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlr_net_priv {TYPE_1__* nd; int ndev; int phy_addr; } ;
struct phy_device {int supported; int advertising; } ;
struct TYPE_2__ {int phy_interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 struct phy_device* FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (char*,...) ;
 struct phy_device* FUNC_6 (struct xlr_net_priv*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(struct xlr_net_priv *VAR_9)
{
 struct phy_device *VAR_10 = FUNC_6(VAR_9);

 if (!VAR_10) {
  FUNC_5("no PHY found on phy_addr %d\n", VAR_9->phy_addr);
  return -VAR_7;
 }


 VAR_10 = FUNC_3(VAR_9->ndev, FUNC_4(VAR_10),
        VAR_8, VAR_9->nd->phy_interface);

 if (FUNC_0(VAR_10)) {
  FUNC_5("could not attach PHY\n");
  return FUNC_1(VAR_10);
 }
 VAR_10->supported &= (VAR_3
    | VAR_4
    | VAR_1
    | VAR_2
    | VAR_0
    | VAR_5
    | VAR_6);

 VAR_10->advertising = VAR_10->supported;
 FUNC_2(VAR_10);
 return 0;
}
