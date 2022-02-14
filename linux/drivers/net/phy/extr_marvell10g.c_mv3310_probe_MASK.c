
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int devices_in_package; } ;
struct phy_device {TYPE_1__ mdio; TYPE_2__ c45_ids; int is_c45; } ;
struct mv3310_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct mv3310_priv*) ;
 int FUNC_1 (int *,char*,int) ;
 struct mv3310_priv* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_8)
{
 struct mv3310_priv *VAR_9;
 u32 VAR_10 = VAR_4 | VAR_3;
 int VAR_11;

 if (!VAR_8->is_c45 ||
     (VAR_8->c45_ids.devices_in_package & VAR_10) != VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_8, VAR_5, VAR_6);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_11 & VAR_7) {
  FUNC_1(&VAR_8->mdio.dev,
    "PHY failed to boot firmware, status=%04x\n", VAR_11);
  return -VAR_0;
 }

 VAR_9 = FUNC_2(&VAR_8->mdio.dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_0(&VAR_8->mdio.dev, VAR_9);

 VAR_11 = FUNC_3(VAR_8);
 if (VAR_11)
  return VAR_11;

 return 0;
}
