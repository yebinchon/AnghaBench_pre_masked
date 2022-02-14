
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43_phy {int rev; } ;
struct b43_wldev {TYPE_2__* dev; struct b43_phy phy; } ;
struct TYPE_4__ {TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {int boardflags_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int,int) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_3)
{
 struct b43_phy *VAR_4 = &VAR_3->phy;

 FUNC_6();

 if (VAR_4->rev >= 6) {
  if (FUNC_3(VAR_3, VAR_1) & VAR_2)
   FUNC_4(VAR_3, VAR_1, 0x0010);
  else
   FUNC_1(VAR_3, VAR_1, ~0x1010);
 }

 FUNC_5(VAR_3);

 if (VAR_3->dev->bus_sprom->boardflags_lo & VAR_0)
  FUNC_2(VAR_3, FUNC_0(0x6E), 0xE000, 0x3CF);
}
