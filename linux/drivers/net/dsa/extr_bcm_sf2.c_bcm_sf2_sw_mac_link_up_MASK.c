
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct ethtool_eee {int eee_enabled; } ;
struct dsa_switch {int dummy; } ;
struct bcm_sf2_priv {TYPE_2__* dev; } ;
typedef int phy_interface_t ;
struct TYPE_4__ {TYPE_1__* ports; } ;
struct TYPE_3__ {struct ethtool_eee eee; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct dsa_switch*,int,struct phy_device*) ;
 int FUNC_1 (struct dsa_switch*,int,int ,int) ;
 struct bcm_sf2_priv* FUNC_2 (struct dsa_switch*) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_1, int VAR_2,
       unsigned int VAR_3,
       phy_interface_t VAR_4,
       struct phy_device *VAR_5)
{
 struct bcm_sf2_priv *VAR_6 = FUNC_2(VAR_1);
 struct ethtool_eee *VAR_7 = &VAR_6->dev->ports[VAR_2].eee;

 FUNC_1(VAR_1, VAR_2, VAR_4, 1);

 if (VAR_3 == VAR_0 && VAR_5)
  VAR_7->eee_enabled = FUNC_0(VAR_1, VAR_2, VAR_5);
}
