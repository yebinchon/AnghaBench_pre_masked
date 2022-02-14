
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct brcms_c_info {TYPE_1__* bsscfg; int hw; } ;
struct TYPE_2__ {int BSSID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int const*) ;
 int FUNC_1 (int ,int const*,int ) ;

void
FUNC_2(struct brcms_c_info *VAR_2, int VAR_3,
    const u8 *VAR_4)
{
 FUNC_0(VAR_2->hw, VAR_3, VAR_4);
 if (VAR_3 == VAR_1)
  FUNC_1(VAR_2->bsscfg->BSSID, VAR_4, VAR_0);
}
