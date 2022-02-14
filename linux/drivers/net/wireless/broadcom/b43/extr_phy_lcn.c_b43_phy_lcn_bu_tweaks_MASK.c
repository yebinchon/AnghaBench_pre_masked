
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int rev; } ;
struct b43_wldev {TYPE_3__ phy; TYPE_2__* dev; } ;
struct TYPE_5__ {TYPE_1__* bus_sprom; } ;
struct TYPE_4__ {int board_rev; } ;


 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int,int) ;
 int FUNC_6 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_0)
{
 FUNC_2(VAR_0, 0x805, 0x1);

 FUNC_1(VAR_0, 0x42f, ~0x7, 0x3);
 FUNC_1(VAR_0, 0x030, ~0x7, 0x3);

 FUNC_3(VAR_0, 0x414, 0x1e10);
 FUNC_3(VAR_0, 0x415, 0x0640);

 FUNC_1(VAR_0, 0x4df, (u16) ~0xff00, 0xf700);

 FUNC_2(VAR_0, 0x44a, 0x44);
 FUNC_3(VAR_0, 0x44a, 0x80);

 FUNC_1(VAR_0, 0x434, ~0xff, 0xfd);
 FUNC_1(VAR_0, 0x420, ~0xff, 0x10);

 if (VAR_0->dev->bus_sprom->board_rev >= 0x1204)
  FUNC_6(VAR_0, 0x09b, 0xf0);

 FUNC_3(VAR_0, 0x7d6, 0x0902);

 FUNC_1(VAR_0, 0x429, ~0xf, 0x9);
 FUNC_1(VAR_0, 0x429, ~(0x3f << 4), 0xe << 4);

 if (VAR_0->phy.rev == 1) {
  FUNC_1(VAR_0, 0x423, ~0xff, 0x46);
  FUNC_1(VAR_0, 0x411, ~0xff, 1);
  FUNC_2(VAR_0, 0x434, 0xff);



  FUNC_1(VAR_0, 0x656, ~0xf, 2);
  FUNC_2(VAR_0, 0x44d, 4);

  FUNC_6(VAR_0, 0x0f7, 0x4);
  FUNC_4(VAR_0, 0x0f1, ~0x3);
  FUNC_5(VAR_0, 0x0f2, ~0xf8, 0x90);
  FUNC_5(VAR_0, 0x0f3, ~0x3, 0x2);
  FUNC_5(VAR_0, 0x0f3, ~0xf0, 0xa0);

  FUNC_6(VAR_0, 0x11f, 0x2);

  FUNC_0(VAR_0);


 }
}
