
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {TYPE_1__* ops; scalar_t__ writes_counter; } ;
struct b43_wldev {TYPE_2__ phy; } ;
struct TYPE_3__ {int (* phy_read ) (struct b43_wldev*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int ) ;
 int FUNC_3 (struct b43_wldev*,int ) ;

u16 FUNC_4(struct b43_wldev *VAR_2, u16 VAR_3)
{
 FUNC_0(VAR_2);
 VAR_2->phy.writes_counter = 0;

 if (VAR_2->phy.ops->phy_read)
  return VAR_2->phy.ops->phy_read(VAR_2, VAR_3);

 FUNC_2(VAR_2, VAR_0, VAR_3);
 return FUNC_1(VAR_2, VAR_1);
}
