
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nphy_txgains {int dummy; } ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct brcms_phy*,struct nphy_txgains,int) ;
 int FUNC_2 (struct brcms_phy*,struct nphy_txgains,scalar_t__,int) ;

int
FUNC_3(struct brcms_phy *VAR_0, struct nphy_txgains VAR_1,
        u8 VAR_2, bool VAR_3)
{
 if (FUNC_0(VAR_0->pubpi.phy_rev, 7))
  VAR_2 = 0;

 if (FUNC_0(VAR_0->pubpi.phy_rev, 3))
  return FUNC_2(VAR_0, VAR_1, VAR_2,
        VAR_3);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_3);
}
