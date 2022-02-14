
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int vendor; } ;
struct TYPE_5__ {int gpio0; int gpio1; int gpio2; int gpio3; } ;
struct ssb_bus {TYPE_3__ boardinfo; TYPE_2__ sprom; } ;
struct b43legacy_wldev {TYPE_1__* dev; } ;
typedef enum b43legacy_led_behaviour { ____Placeholder_b43legacy_led_behaviour } b43legacy_led_behaviour ;
struct TYPE_4__ {struct ssb_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct b43legacy_wldev*,int,int,int) ;

void FUNC_2(struct b43legacy_wldev *VAR_10)
{
 struct ssb_bus *VAR_11 = VAR_10->dev->bus;
 u8 VAR_12[4];
 int VAR_13;
 enum b43legacy_led_behaviour VAR_14;
 bool VAR_15;

 VAR_12[0] = VAR_11->sprom.gpio0;
 VAR_12[1] = VAR_11->sprom.gpio1;
 VAR_12[2] = VAR_11->sprom.gpio2;
 VAR_12[3] = VAR_11->sprom.gpio3;

 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  if (VAR_12[VAR_13] == 0xFF) {


   VAR_15 = 0;
   switch (VAR_13) {
   case 0:
    VAR_14 = VAR_1;
    VAR_15 = 1;
    if (VAR_11->boardinfo.vendor == VAR_9)
     VAR_14 = VAR_6;
    break;
   case 1:
    VAR_14 = VAR_7;
    if (VAR_11->boardinfo.vendor == VAR_8)
     VAR_14 = VAR_2;
    break;
   case 2:
    VAR_14 = VAR_5;
    break;
   case 3:
    VAR_14 = VAR_4;
    break;
   default:
    FUNC_0(1);
    return;
   }
  } else {
   VAR_14 = VAR_12[VAR_13] & VAR_3;
   VAR_15 = !!(VAR_12[VAR_13] & VAR_0);
  }
  FUNC_1(VAR_10, VAR_13, VAR_14, VAR_15);
 }
}
