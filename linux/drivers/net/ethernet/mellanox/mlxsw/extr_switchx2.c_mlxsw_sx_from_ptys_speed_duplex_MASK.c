
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int speed; int duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct TYPE_4__ {int mask; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void FUNC_0(bool VAR_5, u32 VAR_6,
         struct ethtool_link_ksettings *VAR_7)
{
 u32 VAR_8 = VAR_3;
 u8 VAR_9 = VAR_1;
 int VAR_10;

 if (!VAR_5)
  goto out;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (VAR_6 & VAR_4[VAR_10].mask) {
   VAR_8 = VAR_4[VAR_10].speed;
   VAR_9 = VAR_0;
   break;
  }
 }
out:
 VAR_7->base.speed = VAR_8;
 VAR_7->base.duplex = VAR_9;
}
