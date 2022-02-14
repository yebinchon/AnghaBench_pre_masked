
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct b43_phy {int do_full_init; int gmode; int type; TYPE_2__* ops; } ;
struct b43_wldev {struct b43_phy phy; int restart_work; TYPE_1__* dev; struct b43_wl* wl; } ;
struct b43_wl {struct b43_wldev* current_dev; } ;
struct TYPE_4__ {int (* switch_analog ) (struct b43_wldev*,int ) ;} ;
struct TYPE_3__ {int bus_type; int core_rev; int sdev; int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int VAR_7 ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*,int,int) ;
 int FUNC_9 (struct b43_wldev*,int*,int*) ;
 int FUNC_10 (struct b43_wldev*) ;
 int FUNC_11 (struct b43_wldev*,int) ;
 int FUNC_12 (struct b43_wl*,char*) ;
 int FUNC_13 (struct b43_wl*,char*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct b43_wldev*,int ) ;

__attribute__((used)) static int FUNC_17(struct b43_wldev *VAR_8)
{
 struct b43_wl *VAR_9 = VAR_8->wl;
 struct b43_phy *VAR_10 = &VAR_8->phy;
 int VAR_11;
 u32 VAR_12;
 bool VAR_13 = 0, VAR_14 = 0;
 VAR_11 = FUNC_3(VAR_8, 0);
 if (VAR_11) {
  FUNC_12(VAR_9, "Bus powerup failed\n");
  goto out;
 }

 VAR_10->do_full_init = 1;


 switch (VAR_8->dev->bus_type) {
 }

 VAR_8->phy.gmode = VAR_13;
 FUNC_11(VAR_8, VAR_8->phy.gmode);


 VAR_11 = FUNC_7(VAR_8);
 if (VAR_11)
  goto err_powerdown;


 FUNC_9(VAR_8, &VAR_13, &VAR_14);


 if (VAR_14) {
  switch (VAR_8->phy.type) {
  case 130:
  case 128:
  case 129:
   FUNC_13(VAR_9, "5 GHz band is unsupported on this PHY\n");
   VAR_14 = 0;
  }
 }

 if (!VAR_13 && !VAR_14) {
  FUNC_12(VAR_9, "b43 can't support any band on this device\n");
  VAR_11 = -VAR_5;
  goto err_powerdown;
 }

 VAR_11 = FUNC_5(VAR_8);
 if (VAR_11)
  goto err_powerdown;

 VAR_8->phy.gmode = VAR_13;
 FUNC_11(VAR_8, VAR_8->phy.gmode);

 VAR_11 = FUNC_10(VAR_8);
 if (VAR_11)
  goto err_phy_free;
 VAR_11 = FUNC_8(VAR_8, VAR_13, VAR_14);
 if (VAR_11)
  goto err_phy_free;


 if (!VAR_9->current_dev)
  VAR_9->current_dev = VAR_8;
 FUNC_1(&VAR_8->restart_work, VAR_7);

 VAR_8->phy.ops->switch_analog(VAR_8, 0);
 FUNC_4(VAR_8, 0);
 FUNC_2(VAR_8);

out:
 return VAR_11;

err_phy_free:
 FUNC_6(VAR_8);
err_powerdown:
 FUNC_2(VAR_8);
 return VAR_11;
}
