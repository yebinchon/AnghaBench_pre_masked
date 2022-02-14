
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct brcms_phy*,int ) ;
 int FUNC_2 (struct brcms_phy*) ;

void FUNC_3(struct brcms_phy *VAR_3)
{
 if (FUNC_0(VAR_3->pubpi.phy_rev, 3)) {
  FUNC_2(VAR_3);
 } else {
  FUNC_1(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_1);
  FUNC_1(VAR_3, VAR_2);
 }
}
