
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct brcms_phy_lcnphy {int lcnphy_bandedge_corr; int lcnphy_spurmod; } ;
struct TYPE_4__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_3__* d11core; TYPE_1__ u; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_5__ {int drv_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int,int,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (struct brcms_phy*,int,int,int) ;
 int FUNC_5 (struct brcms_phy*,int,int) ;
 int FUNC_6 (struct brcms_phy*,int) ;
 int FUNC_7 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_8(struct brcms_phy *VAR_2, u16 VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_3);
 struct brcms_phy_lcnphy *VAR_5 = VAR_2->u.pi_lcnphy;

 if (VAR_4 == 14)
  FUNC_4(VAR_2, 0x448, (0x3 << 8), (2) << 8);
 else
  FUNC_4(VAR_2, 0x448, (0x3 << 8), (1) << 8);

 VAR_5->lcnphy_bandedge_corr = 2;
 if (VAR_4 == 1)
  VAR_5->lcnphy_bandedge_corr = 4;

 if (VAR_4 == 1 || VAR_4 == 2 || VAR_4 == 3 ||
     VAR_4 == 4 || VAR_4 == 9 ||
     VAR_4 == 10 || VAR_4 == 11 || VAR_4 == 12) {
  FUNC_3(&VAR_2->d11core->bus->drv_cc, 0x2,
          0x03000c04);
  FUNC_2(&VAR_2->d11core->bus->drv_cc, 0x3,
     ~0x00ffffff, 0x0);
  FUNC_3(&VAR_2->d11core->bus->drv_cc, 0x4,
          0x200005c0);

  FUNC_1(&VAR_2->d11core->bus->drv_cc, VAR_0,
         VAR_1);
  FUNC_7(VAR_2, 0x942, 0);
  FUNC_6(VAR_2, 0);
  VAR_5->lcnphy_spurmod = 0;
  FUNC_4(VAR_2, 0x424, (0xff << 8), (0x1b) << 8);

  FUNC_7(VAR_2, 0x425, 0x5907);
 } else {
  FUNC_3(&VAR_2->d11core->bus->drv_cc, 0x2,
          0x03140c04);
  FUNC_2(&VAR_2->d11core->bus->drv_cc, 0x3,
     ~0x00ffffff, 0x333333);
  FUNC_3(&VAR_2->d11core->bus->drv_cc, 0x4,
          0x202c2820);

  FUNC_1(&VAR_2->d11core->bus->drv_cc, VAR_0,
         VAR_1);
  FUNC_7(VAR_2, 0x942, 0);
  FUNC_6(VAR_2, 1);

  VAR_5->lcnphy_spurmod = 0;
  FUNC_4(VAR_2, 0x424, (0xff << 8), (0x1f) << 8);

  FUNC_7(VAR_2, 0x425, 0x590a);
 }

 FUNC_5(VAR_2, 0x44a, 0x44);
 FUNC_7(VAR_2, 0x44a, 0x80);
}
