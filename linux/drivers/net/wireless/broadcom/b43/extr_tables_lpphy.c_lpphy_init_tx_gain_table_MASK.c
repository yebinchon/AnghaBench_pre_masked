
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_sprom {int boardflags_hi; int boardflags_lo; } ;
struct TYPE_4__ {int rev; } ;
struct b43_wldev {int wl; TYPE_2__ phy; TYPE_1__* dev; } ;
struct TYPE_3__ {struct ssb_sprom* bus_sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct b43_wldev*,int ,int,int ) ;

void FUNC_2(struct b43_wldev *VAR_12)
{
 struct ssb_sprom *VAR_13 = VAR_12->dev->bus_sprom;

 switch (VAR_12->phy.rev) {
 case 0:
  if ((VAR_13->boardflags_hi & VAR_0) ||
      (VAR_13->boardflags_lo & VAR_1))
   FUNC_1(VAR_12, 0, 128,
     VAR_5);
  else if (FUNC_0(VAR_12->wl) == VAR_2)
   FUNC_1(VAR_12, 0, 128,
     VAR_3);
  else
   FUNC_1(VAR_12, 0, 128,
     VAR_4);
  break;
 case 1:
  if ((VAR_13->boardflags_hi & VAR_0) ||
      (VAR_13->boardflags_lo & VAR_1))
   FUNC_1(VAR_12, 0, 128,
     VAR_8);
  else if (FUNC_0(VAR_12->wl) == VAR_2)
   FUNC_1(VAR_12, 0, 128,
     VAR_6);
  else
   FUNC_1(VAR_12, 0, 128,
     VAR_7);
  break;
 default:
  if (VAR_13->boardflags_hi & VAR_0)
   FUNC_1(VAR_12, 0, 128,
     VAR_11);
  else if (FUNC_0(VAR_12->wl) == VAR_2)
   FUNC_1(VAR_12, 0, 128,
     VAR_9);
  else
   FUNC_1(VAR_12, 0, 128,
     VAR_10);
 }
}
