
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int phy_id; } ;
struct jme_adapter {TYPE_1__ mii_if; int dev; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct jme_adapter *VAR_0, u32 *VAR_1, int VAR_2)
{
 int VAR_3;
 u16 *VAR_4 = (u16 *)VAR_1;

 for (VAR_3 = 0 ; VAR_3 < VAR_2 ; ++VAR_3)
  VAR_4[VAR_3] = FUNC_0(VAR_0->dev, VAR_0->mii_if.phy_id, VAR_3);
}
