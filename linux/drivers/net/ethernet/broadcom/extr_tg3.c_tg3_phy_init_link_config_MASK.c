
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int advertising; void* active_duplex; void* active_speed; int autoneg; void* duplex; void* speed; } ;
struct tg3 {int phy_flags; int old_link; TYPE_1__ link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_0(struct tg3 *VAR_15)
{
 u32 VAR_16 = VAR_6;

 if (!(VAR_15->phy_flags & VAR_12)) {
  if (!(VAR_15->phy_flags & VAR_14))
   VAR_16 |= VAR_1;
  VAR_16 |= VAR_0;
 }

 if (!(VAR_15->phy_flags & VAR_13))
  VAR_16 |= VAR_3 |
         VAR_2 |
         VAR_5 |
         VAR_4 |
         VAR_8;
 else
  VAR_16 |= VAR_7;

 VAR_15->link_config.advertising = VAR_16;
 VAR_15->link_config.speed = VAR_11;
 VAR_15->link_config.duplex = VAR_10;
 VAR_15->link_config.autoneg = VAR_9;
 VAR_15->link_config.active_speed = VAR_11;
 VAR_15->link_config.active_duplex = VAR_10;

 VAR_15->old_link = -1;
}
