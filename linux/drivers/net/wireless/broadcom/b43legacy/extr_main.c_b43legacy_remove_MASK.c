
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_device {int dummy; } ;
struct TYPE_2__ {int ucode; } ;
struct b43legacy_wldev {TYPE_1__ fw; int fw_load_complete; int restart_work; } ;
struct b43legacy_wl {int devlist; int hw; struct b43legacy_wldev* current_dev; int firmware_load; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ssb_device*) ;
 int FUNC_2 (struct ssb_device*,struct b43legacy_wl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 struct b43legacy_wl* FUNC_7 (struct ssb_device*) ;
 struct b43legacy_wldev* FUNC_8 (struct ssb_device*) ;

__attribute__((used)) static void FUNC_9(struct ssb_device *VAR_0)
{
 struct b43legacy_wl *VAR_1 = FUNC_7(VAR_0);
 struct b43legacy_wldev *VAR_2 = FUNC_8(VAR_0);



 FUNC_3(&VAR_2->restart_work);
 FUNC_3(&VAR_1->firmware_load);
 FUNC_4(&VAR_2->fw_load_complete);

 FUNC_0(!VAR_1);
 if (!VAR_2->fw.ucode)
  return;
 if (VAR_1->current_dev == VAR_2)
  FUNC_5(VAR_1->hw);

 FUNC_1(VAR_0);

 if (FUNC_6(&VAR_1->devlist))



  FUNC_2(VAR_0, VAR_1);
}
