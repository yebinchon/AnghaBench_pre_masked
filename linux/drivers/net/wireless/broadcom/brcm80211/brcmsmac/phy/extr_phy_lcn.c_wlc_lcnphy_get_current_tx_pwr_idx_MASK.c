
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy_lcnphy {scalar_t__ lcnphy_current_index; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_1__ u; } ;
typedef scalar_t__ s8 ;


 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 int FUNC_1 (struct brcms_phy*) ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;

s8 FUNC_3(struct brcms_phy *VAR_0)
{
 s8 VAR_1;
 struct brcms_phy_lcnphy *VAR_2 = VAR_0->u.pi_lcnphy;

 if (FUNC_0(VAR_0))
  VAR_1 = VAR_2->lcnphy_current_index;
 else if (FUNC_2(VAR_0))
  VAR_1 = (s8) (FUNC_1(
         VAR_0) / 2);
 else
  VAR_1 = VAR_2->lcnphy_current_index;
 return VAR_1;
}
