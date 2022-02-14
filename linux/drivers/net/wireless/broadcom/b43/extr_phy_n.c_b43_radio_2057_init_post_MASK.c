
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ do_full_init; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_4)
{
 FUNC_3(VAR_4, VAR_2, 0x1);

 if (0)
  FUNC_3(VAR_4, VAR_2, 0x2);

 FUNC_3(VAR_4, VAR_1, 0x78);
 FUNC_3(VAR_4, VAR_3, 0x80);
 FUNC_4(2000, 3000);
 FUNC_2(VAR_4, VAR_1, ~0x78);
 FUNC_2(VAR_4, VAR_3, ~0x80);

 if (VAR_4->phy.do_full_init) {
  FUNC_0(VAR_4);
  FUNC_1(VAR_4);
 }
 FUNC_2(VAR_4, VAR_0, ~0x8);
}
