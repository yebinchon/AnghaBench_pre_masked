
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {int phy_type; int phy_rev; } ;
struct brcms_phy {scalar_t__ phy_wreg; int d11core; TYPE_2__ pubpi; TYPE_1__* sh; } ;
struct TYPE_3__ {int corerev; } ;


 int FUNC_0 (int ,int const) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

u16 FUNC_7(struct brcms_phy *VAR_10, u16 VAR_11)
{
 u16 VAR_12;

 if (VAR_11 == VAR_5)
  return 0xffff;

 switch (VAR_10->pubpi.phy_type) {
 case 128:
  if (!FUNC_0(VAR_0, 128))
   break;
  if (FUNC_4(VAR_10->pubpi.phy_rev, 7))
   VAR_11 |= VAR_3;
  else
   VAR_11 |= VAR_2;
  break;

 case 129:
  if (!FUNC_0(VAR_0, 129))
   break;
  VAR_11 |= VAR_4;
  break;

 default:
  break;
 }

 if ((FUNC_2(VAR_10->sh->corerev, 24)) ||
     (FUNC_3(VAR_10->sh->corerev, 22)
      && (VAR_10->pubpi.phy_type != VAR_1))) {
  FUNC_6(VAR_10->d11core, FUNC_1(VAR_8), VAR_11);
  VAR_12 = FUNC_5(VAR_10->d11core, FUNC_1(VAR_9));
 } else {
  FUNC_6(VAR_10->d11core, FUNC_1(VAR_6), VAR_11);
  VAR_12 = FUNC_5(VAR_10->d11core, FUNC_1(VAR_7));
 }
 VAR_10->phy_wreg = 0;

 return VAR_12;
}
