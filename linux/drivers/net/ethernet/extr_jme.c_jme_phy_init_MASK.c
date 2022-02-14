
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_id; } ;
struct jme_adapter {TYPE_1__ mii_if; int dev; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static inline void
FUNC_2(struct jme_adapter *VAR_0)
{
 u16 VAR_1;

 VAR_1 = FUNC_0(VAR_0->dev, VAR_0->mii_if.phy_id, 26);
 FUNC_1(VAR_0->dev, VAR_0->mii_if.phy_id, 26, VAR_1 | 0x1000);
}
