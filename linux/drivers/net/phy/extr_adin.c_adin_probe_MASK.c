
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct phy_device {struct adin_priv* priv; TYPE_1__ mdio; } ;
struct adin_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct adin_priv* FUNC_0 (struct device*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->mdio.dev;
 struct adin_priv *VAR_4;

 VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_2->priv = VAR_4;

 return 0;
}
