
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy {scalar_t__ phy_wreg; scalar_t__ phy_wreg_limit; TYPE_2__* d11core; } ;
struct TYPE_7__ {TYPE_1__* bus; } ;
struct TYPE_6__ {scalar_t__ hosttype; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_5(struct brcms_phy *VAR_4, u16 VAR_5, u16 VAR_6)
{






 FUNC_4(VAR_4->d11core, FUNC_0(VAR_1), VAR_5 | (VAR_6 << 16));
 if ((VAR_4->d11core->bus->hosttype == VAR_0) &&
     (++VAR_4->phy_wreg >= VAR_4->phy_wreg_limit)) {
  VAR_4->phy_wreg = 0;
  (void)FUNC_1(VAR_4->d11core, FUNC_0(VAR_3));
 }

}
