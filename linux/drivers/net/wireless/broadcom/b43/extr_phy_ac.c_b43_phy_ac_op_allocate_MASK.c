
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b43_phy_ac* ac; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_ac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct b43_phy_ac* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct b43_wldev *VAR_2)
{
 struct b43_phy_ac *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_2->phy.ac = VAR_3;

 return 0;
}
