
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smsc_phy_priv {int energy_enable; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {struct device dev; } ;
struct phy_device {struct smsc_phy_priv* priv; TYPE_1__ mdio; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smsc_phy_priv* FUNC_0 (struct device*,int,int ) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->mdio.dev;
 struct device_node *VAR_4 = VAR_3->of_node;
 struct smsc_phy_priv *VAR_5;

 VAR_5 = FUNC_0(VAR_3, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->energy_enable = 1;

 if (FUNC_1(VAR_4, "smsc,disable-energy-detect"))
  VAR_5->energy_enable = 0;

 VAR_2->priv = VAR_5;

 return 0;
}
