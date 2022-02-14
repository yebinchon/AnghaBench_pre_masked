
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct b43_wldev {TYPE_2__ phy; TYPE_1__* dev; } ;
struct TYPE_3__ {scalar_t__ chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;

void FUNC_1(struct b43_wldev *VAR_11, u8 VAR_12)
{
 u16 VAR_13 = VAR_11->dev->chip_id;

 if (VAR_13 == VAR_10) {
  switch (VAR_12) {
  case 2:
   FUNC_0(VAR_11, VAR_1, 0x1862);
   FUNC_0(VAR_11, VAR_0, 0x6);
   break;
  case 1:
   FUNC_0(VAR_11, VAR_1, 0x3e70);
   FUNC_0(VAR_11, VAR_0, 0x6);
   break;
  default:
   FUNC_0(VAR_11, VAR_1, 0x6666);
   FUNC_0(VAR_11, VAR_0, 0x6);
   break;
  }
 } else if (VAR_13 == VAR_3 ||
     VAR_13 == VAR_4 ||
     VAR_13 == VAR_5 ||
     VAR_13 == VAR_6 ||
     VAR_13 == VAR_7 ||
     VAR_13 == VAR_8 ||
     VAR_13 == VAR_9) {
  switch (VAR_12) {
  case 2:
   FUNC_0(VAR_11, VAR_1, 0x2082);
   FUNC_0(VAR_11, VAR_0, 0x8);
   break;
  case 1:
   FUNC_0(VAR_11, VAR_1, 0x5341);
   FUNC_0(VAR_11, VAR_0, 0x8);
   break;
  default:
   FUNC_0(VAR_11, VAR_1, 0x8889);
   FUNC_0(VAR_11, VAR_0, 0x8);
   break;
  }
 } else if (VAR_11->phy.type == VAR_2) {
  switch (VAR_12) {
  case 1:
   FUNC_0(VAR_11, VAR_1, 0x7CE0);
   FUNC_0(VAR_11, VAR_0, 0xC);
   break;
  default:
   FUNC_0(VAR_11, VAR_1, 0xCCCD);
   FUNC_0(VAR_11, VAR_0, 0xC);
   break;
  }
 }
}
