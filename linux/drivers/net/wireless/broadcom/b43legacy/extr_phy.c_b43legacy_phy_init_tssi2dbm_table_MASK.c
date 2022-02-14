
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct b43legacy_phy {int type; int radio_ver; int idle_tssi; scalar_t__* tssi2dbm; int dyn_tssi_tbl; } ;
struct b43legacy_wldev {int wl; TYPE_3__* dev; struct b43legacy_phy phy; } ;
typedef scalar_t__ s8 ;
typedef int s16 ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {scalar_t__ itssi_bg; scalar_t__ pa0b2; scalar_t__ pa0b1; scalar_t__ pa0b0; } ;
struct TYPE_5__ {int chip_id; TYPE_1__ sprom; } ;




 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__*,int,int,int,int) ;
 scalar_t__* VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (int,int ) ;

int FUNC_5(struct b43legacy_wldev *VAR_5)
{
 struct b43legacy_phy *VAR_6 = &VAR_5->phy;
 s16 VAR_7;
 s16 VAR_8;
 s16 VAR_9;
 u8 VAR_10;
 s8 *VAR_11;

 FUNC_0(!(VAR_6->type == 129 ||
     VAR_6->type == 128));
 VAR_7 = (s16)(VAR_5->dev->bus->sprom.pa0b0);
 VAR_8 = (s16)(VAR_5->dev->bus->sprom.pa0b1);
 VAR_9 = (s16)(VAR_5->dev->bus->sprom.pa0b2);

 if ((VAR_5->dev->bus->chip_id == 0x4301) && (VAR_6->radio_ver != 0x2050)) {
  VAR_6->idle_tssi = 0x34;
  VAR_6->tssi2dbm = VAR_3;
  return 0;
 }

 if (VAR_7 != 0 && VAR_8 != 0 && VAR_9 != 0 &&
     VAR_7 != -1 && VAR_8 != -1 && VAR_9 != -1) {

  if ((s8)VAR_5->dev->bus->sprom.itssi_bg != 0 &&
      (s8)VAR_5->dev->bus->sprom.itssi_bg != -1)
   VAR_6->idle_tssi = (s8)(VAR_5->dev->bus->sprom.
       itssi_bg);
  else
   VAR_6->idle_tssi = 62;
  VAR_11 = FUNC_4(64, VAR_2);
  if (VAR_11 == ((void*)0)) {
   FUNC_2(VAR_5->wl, "Could not allocate memory "
          "for tssi2dbm table\n");
   return -VAR_1;
  }
  for (VAR_10 = 0; VAR_10 < 64; VAR_10++)
   if (FUNC_1(VAR_11, VAR_10, VAR_7,
           VAR_8, VAR_9)) {
    VAR_6->tssi2dbm = ((void*)0);
    FUNC_2(VAR_5->wl, "Could not generate "
           "tssi2dBm table\n");
    FUNC_3(VAR_11);
    return -VAR_0;
   }
  VAR_6->tssi2dbm = VAR_11;
  VAR_6->dyn_tssi_tbl = 1;
 } else {

  switch (VAR_6->type) {
  case 129:
   VAR_6->idle_tssi = 0x34;
   VAR_6->tssi2dbm = VAR_3;
   break;
  case 128:
   VAR_6->idle_tssi = 0x34;
   VAR_6->tssi2dbm = VAR_4;
   break;
  }
 }

 return 0;
}
