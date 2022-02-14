
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43_wldev {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {int boardflags_lo; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int,int,int) ;
 int FUNC_1 (struct b43_wldev*,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_1)
{
 FUNC_3(VAR_1, 0x11c, 0);

 FUNC_2(VAR_1, 0x43b, 0);
 FUNC_2(VAR_1, 0x43c, 0);
 FUNC_2(VAR_1, 0x44c, 0);
 FUNC_2(VAR_1, 0x4e6, 0);
 FUNC_2(VAR_1, 0x4f9, 0);
 FUNC_2(VAR_1, 0x4b0, 0);
 FUNC_2(VAR_1, 0x938, 0);
 FUNC_2(VAR_1, 0x4b0, 0);
 FUNC_2(VAR_1, 0x44e, 0);

 FUNC_1(VAR_1, 0x567, 0x03);

 FUNC_1(VAR_1, 0x44a, 0x44);
 FUNC_2(VAR_1, 0x44a, 0x80);

 if (!(VAR_1->dev->bus_sprom->boardflags_lo & VAR_0))
  ;
 FUNC_0(VAR_1, 0x634, ~0xff, 0xc);
 if (VAR_1->dev->bus_sprom->boardflags_lo & VAR_0) {
  FUNC_0(VAR_1, 0x634, ~0xff, 0xa);
  FUNC_2(VAR_1, 0x910, 0x1);
 }

 FUNC_2(VAR_1, 0x910, 0x1);

 FUNC_0(VAR_1, 0x448, ~0x300, 0x100);
 FUNC_0(VAR_1, 0x608, ~0xff, 0x17);
 FUNC_0(VAR_1, 0x604, ~0x7ff, 0x3ea);
}
