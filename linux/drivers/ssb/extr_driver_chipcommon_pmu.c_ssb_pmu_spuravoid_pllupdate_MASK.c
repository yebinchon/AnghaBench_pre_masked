
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ssb_chipcommon {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* bus; int dev; } ;
struct TYPE_3__ {int chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ssb_chipcommon*,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ssb_chipcommon*,int ,int) ;

void FUNC_3(struct ssb_chipcommon *VAR_8, int VAR_9)
{
 u32 VAR_10 = 0;

 switch (VAR_8->dev->bus->chip_id) {
 case 0x4322:
  FUNC_2(VAR_8, VAR_2, 0x11100070);
  FUNC_2(VAR_8, VAR_3, 0x1014140a);
  FUNC_2(VAR_8, VAR_7, 0x88888854);
  if (VAR_9 == 1)
   FUNC_2(VAR_8, VAR_4, 0x05201828);
  else
   FUNC_2(VAR_8, VAR_4, 0x05001828);
  VAR_10 = VAR_1;
  break;
 case 43222:
  if (VAR_9 == 1) {
   FUNC_2(VAR_8, VAR_2, 0x11500008);
   FUNC_2(VAR_8, VAR_3, 0x0C000C06);
   FUNC_2(VAR_8, VAR_4, 0x0F600a08);
   FUNC_2(VAR_8, VAR_5, 0x00000000);
   FUNC_2(VAR_8, VAR_6, 0x2001E920);
   FUNC_2(VAR_8, VAR_7, 0x88888815);
  } else {
   FUNC_2(VAR_8, VAR_2, 0x11100008);
   FUNC_2(VAR_8, VAR_3, 0x0c000c06);
   FUNC_2(VAR_8, VAR_4, 0x03000a08);
   FUNC_2(VAR_8, VAR_5, 0x00000000);
   FUNC_2(VAR_8, VAR_6, 0x200005c0);
   FUNC_2(VAR_8, VAR_7, 0x88888855);
  }
  VAR_10 = VAR_1;
  break;
 default:
  FUNC_1(VAR_8->dev->dev,
   "Unknown spuravoidance settings for chip 0x%04X, not changing PLL\n",
   VAR_8->dev->bus->chip_id);
  return;
 }

 FUNC_0(VAR_8, VAR_0, VAR_10);
}
