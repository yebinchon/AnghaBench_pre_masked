
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct phy_device {int priv; TYPE_1__ mdio; } ;
struct aqr107_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_2)
{
 VAR_2->priv = FUNC_1(&VAR_2->mdio.dev,
        sizeof(struct aqr107_priv), VAR_1);
 if (!VAR_2->priv)
  return -VAR_0;

 return FUNC_0(VAR_2);
}
