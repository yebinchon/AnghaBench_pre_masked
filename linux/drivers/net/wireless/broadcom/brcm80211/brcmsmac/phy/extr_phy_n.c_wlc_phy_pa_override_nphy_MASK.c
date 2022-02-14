
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int rfctrlIntc1_save; int rfctrlIntc2_save; int radio_chanspec; TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 void* FUNC_2 (struct brcms_phy*,int) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;

void FUNC_4(struct brcms_phy *VAR_0, bool VAR_1)
{
 u16 VAR_2;

 if (!VAR_1) {

  VAR_0->rfctrlIntc1_save = FUNC_2(VAR_0, 0x91);
  VAR_0->rfctrlIntc2_save = FUNC_2(VAR_0, 0x92);

  if (FUNC_1(VAR_0->pubpi.phy_rev, 7))
   VAR_2 = 0x1480;
  else if (FUNC_1(VAR_0->pubpi.phy_rev, 3))
   VAR_2 =
    FUNC_0(VAR_0->radio_chanspec) ? 0x600 : 0x480;
  else
   VAR_2 =
    FUNC_0(VAR_0->radio_chanspec) ? 0x180 : 0x120;

  FUNC_3(VAR_0, 0x91, VAR_2);
  FUNC_3(VAR_0, 0x92, VAR_2);
 } else {
  FUNC_3(VAR_0, 0x91, VAR_0->rfctrlIntc1_save);
  FUNC_3(VAR_0, 0x92, VAR_0->rfctrlIntc2_save);
 }

}
