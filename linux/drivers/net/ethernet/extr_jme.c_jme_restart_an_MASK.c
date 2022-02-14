
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int phy_id; } ;
struct jme_adapter {int phy_lock; TYPE_1__ mii_if; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct jme_adapter *VAR_3)
{
 u32 VAR_4;

 FUNC_2(&VAR_3->phy_lock);
 VAR_4 = FUNC_0(VAR_3->dev, VAR_3->mii_if.phy_id, VAR_2);
 VAR_4 |= (VAR_0 | VAR_1);
 FUNC_1(VAR_3->dev, VAR_3->mii_if.phy_id, VAR_2, VAR_4);
 FUNC_3(&VAR_3->phy_lock);
}
