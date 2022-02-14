
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct b43legacy_wldev {TYPE_2__* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43legacy_wldev*,int ) ;

__attribute__((used)) static void FUNC_1(struct b43legacy_wldev *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->dev->id.revision < 5)
  return;



 while (1) {
  VAR_3 = FUNC_0(VAR_2, VAR_0);
  if (!(VAR_3 & 0x00000001))
   break;
  VAR_3 = FUNC_0(VAR_2, VAR_1);
 }
}
