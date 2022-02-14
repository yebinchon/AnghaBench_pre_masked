
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct ssb_device {int dummy; } ;
struct TYPE_10__ {scalar_t__ dev; } ;
struct TYPE_9__ {struct ssb_device* dev; } ;
struct TYPE_6__ {int boardflags_lo; } ;
struct ssb_bus {int chip_id; TYPE_5__ chipco; TYPE_4__ pcicore; TYPE_1__ sprom; } ;
struct b43legacy_wldev {TYPE_3__* dev; } ;
struct TYPE_7__ {int revision; } ;
struct TYPE_8__ {TYPE_2__ id; struct ssb_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43legacy_wldev*,int ) ;
 int FUNC_1 (struct b43legacy_wldev*,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_4 (struct ssb_device*,int ) ;
 int FUNC_5 (struct ssb_device*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct b43legacy_wldev *VAR_4)
{
 struct ssb_bus *VAR_5 = VAR_4->dev->bus;
 struct ssb_device *VAR_6, *VAR_7 = ((void*)0);
 u32 VAR_8;
 u32 VAR_9;

 FUNC_3(VAR_4, VAR_3,
     FUNC_1(VAR_4,
     VAR_3)
     & 0xFFFF3FFF);

 FUNC_2(VAR_4, VAR_2,
     FUNC_0(VAR_4,
     VAR_2)
     | 0x000F);

 VAR_8 = 0x0000001F;
 VAR_9 = 0x0000000F;
 if (VAR_4->dev->bus->chip_id == 0x4301) {
  VAR_8 |= 0x0060;
  VAR_9 |= 0x0060;
 }
 if (VAR_4->dev->bus->sprom.boardflags_lo & VAR_0) {
  FUNC_2(VAR_4, VAR_2,
      FUNC_0(VAR_4,
      VAR_2)
      | 0x0200);
  VAR_8 |= 0x0200;
  VAR_9 |= 0x0200;
 }
 if (VAR_4->dev->id.revision >= 2)
  VAR_8 |= 0x0010;




 VAR_6 = VAR_5->chipco.dev ? : VAR_7;
 if (!VAR_6)
  return 0;
 FUNC_5(VAR_6, VAR_1,
      (FUNC_4(VAR_6, VAR_1)
       & ~VAR_8) | VAR_9);

 return 0;
}
