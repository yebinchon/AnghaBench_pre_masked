
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ssb_sprom {int boardflags_lo; } ;
struct ssb_bus {int pcicore; struct ssb_sprom sprom; } ;
struct b43legacy_phy {scalar_t__ type; int rev; int radio_ver; int * lo_control; int * tssi2dbm; scalar_t__ dyn_tssi_tbl; int _lo_pairs; scalar_t__ gmode; } ;
struct b43legacy_wldev {struct b43legacy_wl* wl; TYPE_2__* dev; struct b43legacy_phy phy; } ;
struct b43legacy_wl {int hw; } ;
struct b43legacy_lopair {int dummy; } ;
struct TYPE_4__ {int revision; } ;
struct TYPE_5__ {TYPE_1__ id; struct ssb_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*) ;
 int FUNC_5 (struct b43legacy_wldev*,int ) ;
 int FUNC_6 (struct b43legacy_wldev*) ;
 int FUNC_7 (struct b43legacy_wldev*) ;
 int FUNC_8 (struct b43legacy_wldev*) ;
 int FUNC_9 (struct b43legacy_wldev*) ;
 int FUNC_10 (struct b43legacy_wldev*) ;
 int FUNC_11 (struct b43legacy_wldev*) ;
 int FUNC_12 (struct b43legacy_wl*) ;
 int FUNC_13 (struct b43legacy_wldev*) ;
 int FUNC_14 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_15 (struct b43legacy_wldev*,int ) ;
 int FUNC_16 (struct b43legacy_wldev*,int) ;
 int FUNC_17 (struct b43legacy_wldev*,int ,int,int) ;
 scalar_t__ FUNC_18 (struct b43legacy_wldev*) ;
 int FUNC_19 (struct b43legacy_wldev*) ;
 scalar_t__ FUNC_20 (struct b43legacy_wldev*) ;
 int FUNC_21 (struct b43legacy_wldev*,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct b43legacy_wldev*) ;
 int FUNC_26 (struct b43legacy_wldev*) ;
 int FUNC_27 (struct ssb_bus*) ;
 int FUNC_28 (struct ssb_bus*,int) ;
 int FUNC_29 (TYPE_2__*) ;
 int FUNC_30 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_31(struct b43legacy_wldev *VAR_19)
{
 struct b43legacy_wl *VAR_20 = VAR_19->wl;
 struct ssb_bus *VAR_21 = VAR_19->dev->bus;
 struct b43legacy_phy *VAR_22 = &VAR_19->phy;
 struct ssb_sprom *VAR_23 = &VAR_19->dev->bus->sprom;
 int VAR_24;
 u32 VAR_25;
 u32 VAR_26;

 FUNC_0(FUNC_18(VAR_19) != VAR_14);

 VAR_24 = FUNC_28(VAR_21, 0);
 if (VAR_24)
  goto out;
 if (!FUNC_29(VAR_19->dev)) {
  VAR_26 = VAR_22->gmode ? VAR_15 : 0;
  FUNC_21(VAR_19, VAR_26);
 }

 if ((VAR_22->type == VAR_7) ||
     (VAR_22->type == VAR_8)) {
  VAR_22->_lo_pairs = FUNC_23(VAR_6,
      sizeof(struct b43legacy_lopair),
      VAR_18);
  if (!VAR_22->_lo_pairs)
   return -VAR_17;
 }
 FUNC_26(VAR_19);

 VAR_24 = FUNC_8(VAR_19);
 if (VAR_24)
  goto err_kfree_lo_control;


 FUNC_30(&VAR_21->pcicore, VAR_19->dev);

 FUNC_25(VAR_19);
 FUNC_7(VAR_19);
 VAR_24 = FUNC_2(VAR_19);
 if (VAR_24)
  goto err_kfree_tssitbl;
 FUNC_17(VAR_19, VAR_9,
         VAR_11,
         VAR_19->dev->id.revision);
 VAR_25 = FUNC_4(VAR_19);
 if (VAR_22->type == VAR_8) {
  VAR_25 |= VAR_5;
  if (VAR_22->rev == 1)
   VAR_25 |= VAR_3;
  if (VAR_23->boardflags_lo & VAR_0)
   VAR_25 |= VAR_4;
 } else if (VAR_22->type == VAR_7) {
  VAR_25 |= VAR_5;
  if (VAR_22->rev >= 2 && VAR_22->radio_ver == 0x2050)
   VAR_25 &= ~VAR_3;
 }
 FUNC_5(VAR_19, VAR_25);

 FUNC_14(VAR_19,
       VAR_2,
       VAR_1);

 FUNC_17(VAR_19, VAR_9,
         0x0044, 3);
 FUNC_17(VAR_19, VAR_9,
         0x0046, 2);





 FUNC_17(VAR_19, VAR_9,
         VAR_10, 1);

 FUNC_11(VAR_19);


 if (VAR_22->type == VAR_7)
  FUNC_17(VAR_19, VAR_12,
          0x0003, 31);
 else
  FUNC_17(VAR_19, VAR_12,
          0x0003, 15);

 FUNC_17(VAR_19, VAR_12,
         0x0004, 1023);

 do {
  if (FUNC_20(VAR_19))
   VAR_24 = FUNC_9(VAR_19);
  else {
   VAR_24 = FUNC_3(VAR_19);
   if (!VAR_24)
    FUNC_10(VAR_19);
  }
 } while (VAR_24 == -VAR_16);
 if (VAR_24)
  goto err_chip_exit;

 FUNC_16(VAR_19, 1);

 FUNC_28(VAR_21, 1);
 FUNC_19(VAR_19);
 FUNC_13(VAR_19);
 FUNC_12(VAR_20);

 FUNC_22(VAR_19->wl->hw);
 FUNC_15(VAR_19, VAR_13);

 FUNC_6(VAR_19);
out:
 return VAR_24;

err_chip_exit:
 FUNC_1(VAR_19);
err_kfree_tssitbl:
 if (VAR_22->dyn_tssi_tbl)
  FUNC_24(VAR_22->tssi2dbm);
err_kfree_lo_control:
 FUNC_24(VAR_22->lo_control);
 VAR_22->lo_control = ((void*)0);
 FUNC_27(VAR_21);
 FUNC_0(FUNC_18(VAR_19) != VAR_14);
 return VAR_24;
}
