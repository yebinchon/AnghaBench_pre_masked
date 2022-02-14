
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int radio_ver; int type; int radio_rev; } ;
struct b43_wldev {struct b43_bus_dev* dev; struct b43_phy phy; } ;
struct b43_rfatt {int with_padmix; int att; } ;
struct b43_bus_dev {scalar_t__ board_vendor; scalar_t__ board_type; int board_rev; int chip_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(struct b43_wldev *VAR_4,
          struct b43_rfatt *VAR_5)
{
 struct b43_bus_dev *VAR_6 = VAR_4->dev;
 struct b43_phy *VAR_7 = &VAR_4->phy;

 VAR_5->with_padmix = 0;

 if (VAR_4->dev->board_vendor == VAR_1 &&
     VAR_4->dev->board_type == VAR_2) {
  if (VAR_4->dev->board_rev < 0x43) {
   VAR_5->att = 2;
   return;
  } else if (VAR_4->dev->board_rev < 0x51) {
   VAR_5->att = 3;
   return;
  }
 }

 switch (VAR_7->radio_ver) {
 case 0x2053:
  switch (VAR_7->radio_rev) {
  case 1:
   VAR_5->att = 6;
   return;
  }
  break;
 case 0x2050:
  switch (VAR_7->radio_rev) {
  case 0:
   VAR_5->att = 5;
   return;
  case 1:
   if (VAR_7->type == VAR_0) {
    if (VAR_6->board_vendor == VAR_1
        && VAR_6->board_type == VAR_2
        && VAR_6->board_rev >= 30)
     VAR_5->att = 3;
    else if (VAR_6->board_vendor ==
      VAR_1
      && VAR_6->board_type ==
      VAR_3)
     VAR_5->att = 3;
    else
     VAR_5->att = 1;
   } else {
    if (VAR_6->board_vendor == VAR_1
        && VAR_6->board_type == VAR_2
        && VAR_6->board_rev >= 30)
     VAR_5->att = 7;
    else
     VAR_5->att = 6;
   }
   return;
  case 2:
   if (VAR_7->type == VAR_0) {
    if (VAR_6->board_vendor == VAR_1
        && VAR_6->board_type == VAR_2
        && VAR_6->board_rev >= 30)
     VAR_5->att = 3;
    else if (VAR_6->board_vendor ==
      VAR_1
      && VAR_6->board_type ==
      VAR_3)
     VAR_5->att = 5;
    else if (VAR_6->chip_id == 0x4320)
     VAR_5->att = 4;
    else
     VAR_5->att = 3;
   } else
    VAR_5->att = 6;
   return;
  case 3:
   VAR_5->att = 5;
   return;
  case 4:
  case 5:
   VAR_5->att = 1;
   return;
  case 6:
  case 7:
   VAR_5->att = 5;
   return;
  case 8:
   VAR_5->att = 0xA;
   VAR_5->with_padmix = 1;
   return;
  case 9:
  default:
   VAR_5->att = 5;
   return;
  }
 }
 VAR_5->att = 5;
}
