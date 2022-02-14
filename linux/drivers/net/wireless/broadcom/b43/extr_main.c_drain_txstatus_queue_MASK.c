
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {int core_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int ) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->dev->core_rev < 5)
  return;



 while (1) {
  VAR_3 = FUNC_0(VAR_2, VAR_0);
  if (!(VAR_3 & 0x00000001))
   break;
  VAR_3 = FUNC_0(VAR_2, VAR_1);
 }
}
