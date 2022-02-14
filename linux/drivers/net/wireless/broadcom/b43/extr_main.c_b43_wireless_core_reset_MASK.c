
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct b43_wldev {TYPE_3__ phy; TYPE_1__* dev; } ;
struct TYPE_5__ {int (* switch_analog ) (struct b43_wldev*,int) ;} ;
struct TYPE_4__ {int bus_type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int ) ;
 int FUNC_4 (struct b43_wldev*,int) ;

void FUNC_5(struct b43_wldev *VAR_3, bool VAR_4)
{
 u32 VAR_5;

 switch (VAR_3->dev->bus_type) {
 }





 if (VAR_3->phy.ops)
  VAR_3->phy.ops->switch_analog(VAR_3, 1);

 VAR_5 = FUNC_1(VAR_3, VAR_2);
 VAR_5 &= ~VAR_0;
 if (VAR_4)
  VAR_5 |= VAR_0;
 VAR_5 |= VAR_1;
 FUNC_3(VAR_3, VAR_2, VAR_5);
}
