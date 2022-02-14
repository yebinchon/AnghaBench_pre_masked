
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_chipcommon {int capabilities; TYPE_2__* dev; } ;
struct ssb_bus {int chip_id; int chip_rev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; struct ssb_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ssb_chipcommon*,int) ;
 int FUNC_1 (struct ssb_chipcommon*,int ) ;
 int FUNC_2 (struct ssb_chipcommon*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ssb_chipcommon *VAR_5)
{
 struct ssb_bus *VAR_6 = VAR_5->dev->bus;

 if (VAR_6->chip_id == 0x4321) {
  if (VAR_6->chip_rev == 0)
   FUNC_2(VAR_5, VAR_1, 0x3A4);
  else if (VAR_6->chip_rev == 1)
   FUNC_2(VAR_5, VAR_1, 0xA4);
 }

 if (!(VAR_5->capabilities & VAR_0))
  return;

 if (VAR_5->dev->id.revision >= 10) {

  FUNC_2(VAR_5, VAR_4,
          (FUNC_1(VAR_5, VAR_4) &
    0x0000FFFF) | 0x00040000);
 } else {
  int VAR_7;

  VAR_7 = FUNC_0(VAR_5, 1);
  FUNC_2(VAR_5, VAR_3,
          (VAR_7 * 150 + 999999) / 1000000);
  FUNC_2(VAR_5, VAR_2,
          (VAR_7 * 15 + 999999) / 1000000);
 }
}
