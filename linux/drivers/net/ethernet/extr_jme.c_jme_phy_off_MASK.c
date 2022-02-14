
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int phy_id; } ;
struct jme_adapter {int chip_main_rev; TYPE_1__ mii_if; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct jme_adapter*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline void
FUNC_4(struct jme_adapter *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->dev, VAR_2->mii_if.phy_id, VAR_1);
 VAR_3 |= VAR_0;
 FUNC_1(VAR_2->dev, VAR_2->mii_if.phy_id, VAR_1, VAR_3);

 if (FUNC_3(VAR_2->chip_main_rev))
  FUNC_2(VAR_2);
}
