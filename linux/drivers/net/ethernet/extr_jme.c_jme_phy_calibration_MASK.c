
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int phy_id; } ;
struct jme_adapter {TYPE_1__ mii_if; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct jme_adapter*) ;
 int FUNC_3 (struct jme_adapter*) ;
 int FUNC_4 (struct jme_adapter*,int ) ;
 int FUNC_5 (struct jme_adapter*,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct jme_adapter *VAR_7)
{
 u32 VAR_8, VAR_9;

 FUNC_2(VAR_7);
 FUNC_3(VAR_7);

 VAR_8 = FUNC_0(VAR_7->dev, VAR_7->mii_if.phy_id, VAR_4);
 VAR_8 &= ~VAR_6;
 VAR_8 |= VAR_5;
 FUNC_1(VAR_7->dev, VAR_7->mii_if.phy_id, VAR_4, VAR_8);

 VAR_9 = FUNC_4(VAR_7, VAR_3);
 VAR_9 &= ~VAR_2;
 VAR_9 |= VAR_1 |
   VAR_0;
 FUNC_5(VAR_7, VAR_3, VAR_9);
 FUNC_6(20);
 VAR_9 = FUNC_4(VAR_7, VAR_3);
 VAR_9 &= ~(VAR_0 |
   VAR_2 |
   VAR_1);
 FUNC_5(VAR_7, VAR_3, VAR_9);


 VAR_8 = FUNC_0(VAR_7->dev, VAR_7->mii_if.phy_id, VAR_4);
 VAR_8 &= ~VAR_6;
 FUNC_1(VAR_7->dev, VAR_7->mii_if.phy_id, VAR_4, VAR_8);
 return 0;
}
