
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ writes_counter; TYPE_1__* ops; } ;
struct b43_wldev {TYPE_2__ phy; int dev; } ;
struct TYPE_3__ {void (* phy_write ) (struct b43_wldev*,int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_wldev*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int ) ;
 void FUNC_5 (struct b43_wldev*,int ,int ) ;

void FUNC_6(struct b43_wldev *VAR_4, u16 VAR_5, u16 VAR_6)
{
 FUNC_0(VAR_4);
 if (FUNC_1(VAR_4->dev) &&
     ++VAR_4->phy.writes_counter > VAR_0) {
  FUNC_2(VAR_4, VAR_3);
  VAR_4->phy.writes_counter = 1;
 }

 if (VAR_4->phy.ops->phy_write)
  return VAR_4->phy.ops->phy_write(VAR_4, VAR_5, VAR_6);

 FUNC_4(VAR_4, VAR_1, VAR_5);
 FUNC_3(VAR_4, VAR_2, VAR_6);
}
