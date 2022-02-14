
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_sprom {int boardflags_lo; int boardflags_hi; } ;
struct b43_wldev {int wl; TYPE_1__* dev; } ;
struct TYPE_2__ {struct ssb_sprom* bus_sprom; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*,int ) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*) ;
 int FUNC_9 (int ,char*) ;

void FUNC_10(struct b43_wldev *VAR_5)
{
 struct ssb_sprom *VAR_6 = VAR_5->dev->bus_sprom;

 FUNC_8(VAR_5);

 if (FUNC_2(VAR_5->wl) == VAR_2) {
  if (VAR_6->boardflags_lo & VAR_1)
   FUNC_6(VAR_5,
    VAR_4);
  else
   FUNC_9(VAR_5->wl,
          "TX gain table unknown for this card\n");
 }

 if (VAR_6->boardflags_lo & VAR_1 &&
     !(VAR_6->boardflags_hi & VAR_0))
  FUNC_3(VAR_5, FUNC_1(0xf, 0),
   FUNC_0(VAR_3),
   VAR_3);
 else
  FUNC_9(VAR_5->wl, "SW ctl table is unknown for this card\n");

 FUNC_5(VAR_5);
 FUNC_7(VAR_5);
 FUNC_4(VAR_5);
}
