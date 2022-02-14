
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef int u32 ;
typedef struct phytbl_info {int tbl_width; int* tbl_ptr; int tbl_len; int tbl_offset; void* tbl_id; } const phytbl_info ;
struct TYPE_3__ {int phy_rev; } ;
struct brcms_phy {TYPE_2__* sh; int radio_chanspec; TYPE_1__ pubpi; } ;
struct TYPE_4__ {int boardflags; int boardrev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 struct phytbl_info const VAR_5 ;
 struct phytbl_info const VAR_6 ;
 struct phytbl_info const VAR_7 ;
 struct phytbl_info const VAR_8 ;
 struct phytbl_info const VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct phytbl_info const* VAR_12 ;
 size_t VAR_13 ;
 struct phytbl_info const* VAR_14 ;
 int VAR_15 ;
 struct phytbl_info const* VAR_16 ;
 int VAR_17 ;
 struct phytbl_info const* VAR_18 ;
 struct phytbl_info const* VAR_19 ;
 int FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (struct brcms_phy*) ;
 int FUNC_4 (struct brcms_phy*,int ) ;
 int FUNC_5 (struct brcms_phy*,struct phytbl_info const*) ;

__attribute__((used)) static void FUNC_6(struct brcms_phy *VAR_20)
{
 uint VAR_21;
 struct phytbl_info VAR_22;
 const struct phytbl_info *VAR_23;
 u32 VAR_24;

 for (VAR_21 = 0; VAR_21 < VAR_13; VAR_21++)
  FUNC_5(VAR_20, &VAR_12[VAR_21]);

 if (VAR_20->sh->boardflags & VAR_3) {
  VAR_22.tbl_id = VAR_4;
  VAR_22.tbl_width = 16;
  VAR_22.tbl_ptr = &VAR_24;
  VAR_22.tbl_len = 1;
  VAR_24 = 100;
  VAR_22.tbl_offset = 4;
  FUNC_5(VAR_20, &VAR_22);
 }

 if (!(VAR_20->sh->boardflags & VAR_2)) {
  VAR_22.tbl_id = VAR_4;
  VAR_22.tbl_width = 16;
  VAR_22.tbl_ptr = &VAR_24;
  VAR_22.tbl_len = 1;

  VAR_24 = 150;
  VAR_22.tbl_offset = 0;
  FUNC_5(VAR_20, &VAR_22);

  VAR_24 = 220;
  VAR_22.tbl_offset = 1;
  FUNC_5(VAR_20, &VAR_22);
 }

 if (FUNC_0(VAR_20->radio_chanspec)) {
  if (VAR_20->sh->boardflags & VAR_2)
   FUNC_4(
    VAR_20,
    VAR_10);
  else
   FUNC_4(
    VAR_20,
    VAR_11);
 }

 if (FUNC_1(VAR_20->pubpi.phy_rev, 2)) {
  int VAR_25;

  if (FUNC_0(VAR_20->radio_chanspec)) {
   VAR_25 = VAR_15;
   if (VAR_20->sh->boardflags & VAR_0)
    VAR_23 = VAR_18;
   else
    VAR_23 = VAR_14;
  } else {
   VAR_25 = VAR_17;
   if (VAR_20->sh->boardflags & VAR_1)
    VAR_23 = VAR_19;
   else
    VAR_23 = VAR_16;
  }

  for (VAR_21 = 0; VAR_21 < VAR_25; VAR_21++)
   FUNC_5(VAR_20, &VAR_23[VAR_21]);
 }

 if (VAR_20->sh->boardflags & VAR_2) {
  if (VAR_20->sh->boardflags & VAR_3) {
   if (VAR_20->sh->boardrev < 0x1250)
    VAR_23 = &VAR_6;
   else
    VAR_23 = &VAR_7;
  } else {
   VAR_23 = &VAR_9;
  }
 } else {
  if (VAR_20->sh->boardflags & VAR_3)
   VAR_23 = &VAR_8;
  else
   VAR_23 = &VAR_5;
 }
 FUNC_5(VAR_20, VAR_23);
 FUNC_3(VAR_20);

 FUNC_2(VAR_20);
}
