
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ssb_chipcommon {int capabilities; TYPE_2__* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct ssb_chipcommon *VAR_1)
{
 u32 VAR_2;

 if (VAR_1->capabilities & VAR_0) {
  if (VAR_1->dev->id.revision < 26)
   VAR_2 = 16;
  else
   VAR_2 = (VAR_1->dev->id.revision >= 37) ? 32 : 24;
 } else {
  VAR_2 = 28;
 }
 if (VAR_2 == 32)
  return 0xffffffff;
 else
  return (1 << VAR_2) - 1;
}
