
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {int core_rev; } ;



__attribute__((used)) static u16 FUNC_0(struct b43_wldev *VAR_0)
{
 if (VAR_0->dev->core_rev >= 11)
  return 0x18;
 return 0;
}
