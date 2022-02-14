
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct b43_wldev {TYPE_2__* dev; } ;
typedef enum b43_led_behaviour { ____Placeholder_b43_led_behaviour } b43_led_behaviour ;
struct TYPE_4__ {int board_vendor; TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {int gpio0; int gpio1; int gpio2; int gpio3; } ;


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

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_10,
      unsigned int VAR_11,
      enum b43_led_behaviour *VAR_12,
      bool *VAR_13)
{
 u8 VAR_14[4];

 VAR_14[0] = VAR_10->dev->bus_sprom->gpio0;
 VAR_14[1] = VAR_10->dev->bus_sprom->gpio1;
 VAR_14[2] = VAR_10->dev->bus_sprom->gpio2;
 VAR_14[3] = VAR_10->dev->bus_sprom->gpio3;

 if ((VAR_14[0] & VAR_14[1] & VAR_14[2] & VAR_14[3]) == 0xff) {


  *VAR_13 = 0;
  switch (VAR_11) {
  case 0:
   *VAR_12 = VAR_1;
   *VAR_13 = 1;
   if (VAR_10->dev->board_vendor == VAR_9)
    *VAR_12 = VAR_6;
   break;
  case 1:
   *VAR_12 = VAR_7;
   if (VAR_10->dev->board_vendor == VAR_8)
    *VAR_12 = VAR_2;
   break;
  case 2:
   *VAR_12 = VAR_5;
   break;
  case 3:
   *VAR_12 = VAR_4;
   break;
  default:
   *VAR_12 = VAR_4;
   FUNC_0(1);
   return;
  }
 } else {

  if (VAR_14[VAR_11] == 0xff)
   *VAR_12 = VAR_4;
  else
   *VAR_12 = VAR_14[VAR_11] & VAR_3;
  *VAR_13 = !!(VAR_14[VAR_11] & VAR_0);
 }
}
