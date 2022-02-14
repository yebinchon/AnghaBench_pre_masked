
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int phy_id; } ;
struct jme_adapter {scalar_t__ fpgaver; TYPE_1__ mii_if; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct jme_adapter*) ;
 int FUNC_3 (struct jme_adapter*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct jme_adapter *VAR_8)
{
 u32 VAR_9, VAR_10;

 FUNC_2(VAR_8);
 VAR_9 = FUNC_0(VAR_8->dev, VAR_8->mii_if.phy_id, VAR_7);
 VAR_10 = VAR_9 & ~(VAR_0 | VAR_2 |
         VAR_3 | VAR_1);
 VAR_10 |= VAR_2;

 if (VAR_9 != VAR_10)
  FUNC_1(VAR_8->dev, VAR_8->mii_if.phy_id, VAR_7, VAR_10);

 if (VAR_8->fpgaver)
  FUNC_3(VAR_8, VAR_6, VAR_5 | VAR_4);
 else
  FUNC_3(VAR_8, VAR_6, VAR_5);
}
