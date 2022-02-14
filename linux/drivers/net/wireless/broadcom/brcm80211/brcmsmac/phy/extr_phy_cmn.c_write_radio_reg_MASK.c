
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {scalar_t__ phy_type; } ;
struct brcms_phy {scalar_t__ phy_wreg; scalar_t__ phy_wreg_limit; TYPE_4__* d11core; TYPE_2__ pubpi; TYPE_1__* sh; } ;
struct TYPE_10__ {TYPE_3__* bus; } ;
struct TYPE_9__ {scalar_t__ hosttype; } ;
struct TYPE_7__ {int corerev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_6(struct brcms_phy *VAR_7, u16 VAR_8, u16 VAR_9)
{
 if ((FUNC_1(VAR_7->sh->corerev, 24)) ||
     (FUNC_2(VAR_7->sh->corerev, 22)
      && (VAR_7->pubpi.phy_type != VAR_1))) {

  FUNC_4(VAR_7->d11core, FUNC_0(VAR_5), VAR_8);
  FUNC_5(VAR_7->d11core, FUNC_0(VAR_6), VAR_9);
 } else {
  FUNC_4(VAR_7->d11core, FUNC_0(VAR_3), VAR_8);
  FUNC_5(VAR_7->d11core, FUNC_0(VAR_4), VAR_9);
 }

 if ((VAR_7->d11core->bus->hosttype == VAR_0) &&
     (++VAR_7->phy_wreg >= VAR_7->phy_wreg_limit)) {
  (void)FUNC_3(VAR_7->d11core, FUNC_0(VAR_2));
  VAR_7->phy_wreg = 0;
 }
}
