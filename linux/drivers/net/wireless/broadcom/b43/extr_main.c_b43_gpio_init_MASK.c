
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ssb_device {int dummy; } ;
struct b43_wldev {TYPE_4__* dev; } ;
struct TYPE_8__ {int chip_id; int bus_type; TYPE_3__* bdev; TYPE_1__* bus_sprom; } ;
struct TYPE_7__ {TYPE_2__* bus; } ;
struct TYPE_6__ {int drv_cc; } ;
struct TYPE_5__ {int boardflags_lo; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*,int ,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 struct ssb_device* FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (struct ssb_device*,int ) ;
 int FUNC_7 (struct ssb_device*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct b43_wldev *VAR_5)
{



 u32 VAR_6, VAR_7;

 FUNC_1(VAR_5, VAR_4, ~VAR_2, 0);
 FUNC_0(VAR_5, VAR_3, ~0, 0xF);

 VAR_6 = 0x0000001F;
 VAR_7 = 0x0000000F;
 if (VAR_5->dev->chip_id == 0x4301) {
  VAR_6 |= 0x0060;
  VAR_7 |= 0x0060;
 } else if (VAR_5->dev->chip_id == 0x5354) {

  VAR_7 &= 0x2;
 }

 if (0 ) {
  FUNC_4(VAR_5, VAR_3,
       FUNC_2(VAR_5, VAR_3)
       | 0x0100);

  VAR_6 |= 0x0080;
  VAR_7 |= 0x0080;

  VAR_6 |= 0x0100;
  VAR_7 |= 0x0100;
 }
 if (VAR_5->dev->bus_sprom->boardflags_lo & VAR_0) {

  FUNC_4(VAR_5, VAR_3,
       FUNC_2(VAR_5, VAR_3)
       | 0x0200);
  VAR_6 |= 0x0200;
  VAR_7 |= 0x0200;
 }

 switch (VAR_5->dev->bus_type) {
 }

 return 0;
}
