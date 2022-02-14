
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct b43_phy {struct b43_phy_g* g; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;
struct TYPE_5__ {int len; struct b43_rfatt* list; } ;
struct TYPE_4__ {int len; struct b43_bbatt* list; } ;
struct b43_txpower_lo_control {int power_vector; int* dc_lt; TYPE_2__ rfatt_list; TYPE_1__ bbatt_list; } ;
struct b43_rfatt {int dummy; } ;
struct b43_phy_g {struct b43_txpower_lo_control* lo_control; } ;
struct TYPE_6__ {scalar_t__ i; scalar_t__ q; } ;
struct b43_lo_calib {TYPE_3__ ctl; } ;
struct b43_bbatt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct b43_lo_calib* FUNC_2 (struct b43_wldev*,struct b43_bbatt const*,struct b43_rfatt const*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct b43_lo_calib*) ;

void FUNC_8(struct b43_wldev *VAR_1, bool VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_1->phy;
 struct b43_phy_g *VAR_4 = VAR_3->g;
 struct b43_txpower_lo_control *VAR_5 = VAR_4->lo_control;
 int VAR_6;
 int VAR_7, VAR_8;
 const struct b43_rfatt *VAR_9;
 const struct b43_bbatt *VAR_10;
 u64 VAR_11;
 bool VAR_12 = 0;

 FUNC_1(VAR_0 != 32);
 FUNC_0(VAR_5->rfatt_list.len * VAR_5->bbatt_list.len > 64);

 VAR_11 = VAR_5->power_vector;
 if (!VAR_2 && !VAR_11)
  return;



 FUNC_4(VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_0 * 2; VAR_6++) {
  struct b43_lo_calib *VAR_13;
  int VAR_14;
  u16 VAR_15;

  if (!VAR_2 && !(VAR_11 & (((u64)1ULL) << VAR_6)))
   continue;


  VAR_8 = VAR_6 / VAR_5->rfatt_list.len;
  VAR_7 = VAR_6 % VAR_5->rfatt_list.len;
  VAR_10 = &(VAR_5->bbatt_list.list[VAR_8]);
  VAR_9 = &(VAR_5->rfatt_list.list[VAR_7]);

  VAR_13 = FUNC_2(VAR_1, VAR_10, VAR_9);
  if (!VAR_13) {
   FUNC_6(VAR_1->wl, "LO: Could not "
    "calibrate DC table entry\n");
   continue;
  }

  VAR_15 = (u8)(VAR_13->ctl.q);
  VAR_15 |= ((u8)(VAR_13->ctl.i)) << 4;
  FUNC_7(VAR_13);


  VAR_14 = VAR_6 / 2;

  if (VAR_6 % 2) {

   VAR_5->dc_lt[VAR_14] = (VAR_5->dc_lt[VAR_14] & 0x00FF)
      | ((VAR_15 & 0x00FF) << 8);
  } else {

   VAR_5->dc_lt[VAR_14] = (VAR_5->dc_lt[VAR_14] & 0xFF00)
      | (VAR_15 & 0x00FF);
  }
  VAR_12 = 1;
 }
 if (VAR_12) {

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   FUNC_5(VAR_1, 0x3A0 + VAR_6, VAR_5->dc_lt[VAR_6]);
 }
 FUNC_3(VAR_1);
}
