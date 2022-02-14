
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {TYPE_2__* core; } ;
struct bgmac {TYPE_4__* net_dev; TYPE_3__ bcma; } ;
struct bcma_drv_cc {int dummy; } ;
struct bcma_chipinfo {scalar_t__ id; int pkg; } ;
struct TYPE_8__ {scalar_t__ phydev; } ;
struct TYPE_6__ {TYPE_1__* bus; } ;
struct TYPE_5__ {struct bcma_drv_cc drv_cc; struct bcma_chipinfo chipinfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bcma_drv_cc*,int,int,int ) ;
 int FUNC_1 (struct bgmac*,int,int,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bgmac *VAR_4)
{
 struct bcma_chipinfo *VAR_5 = &VAR_4->bcma.core->bus->chipinfo;
 u8 VAR_6;





 if (VAR_5->id == VAR_1) {
  for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
   FUNC_1(VAR_4, VAR_6, 0x1f, 0x008b);
   FUNC_1(VAR_4, VAR_6, 0x15, 0x0100);
   FUNC_1(VAR_4, VAR_6, 0x1f, 0x000f);
   FUNC_1(VAR_4, VAR_6, 0x12, 0x2aaa);
   FUNC_1(VAR_4, VAR_6, 0x1f, 0x000b);
  }
  return;
 }
 if ((VAR_5->id == VAR_2 && VAR_5->pkg != 10) ||
     (VAR_5->id == VAR_0 && VAR_5->pkg != 10) ||
     (VAR_5->id == VAR_3 && VAR_5->pkg != 9)) {
  struct bcma_drv_cc *VAR_7 = &VAR_4->bcma.core->bus->drv_cc;

  FUNC_0(VAR_7, 2, ~0xc0000000, 0);
  FUNC_0(VAR_7, 4, ~0x80000000, 0);
  for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
   FUNC_1(VAR_4, VAR_6, 0x1f, 0x000f);
   FUNC_1(VAR_4, VAR_6, 0x16, 0x5284);
   FUNC_1(VAR_4, VAR_6, 0x1f, 0x000b);
   FUNC_1(VAR_4, VAR_6, 0x17, 0x0010);
   FUNC_1(VAR_4, VAR_6, 0x1f, 0x000f);
   FUNC_1(VAR_4, VAR_6, 0x16, 0x5296);
   FUNC_1(VAR_4, VAR_6, 0x17, 0x1073);
   FUNC_1(VAR_4, VAR_6, 0x17, 0x9073);
   FUNC_1(VAR_4, VAR_6, 0x16, 0x52b6);
   FUNC_1(VAR_4, VAR_6, 0x17, 0x9273);
   FUNC_1(VAR_4, VAR_6, 0x1f, 0x000b);
  }
  return;
 }


 if (VAR_4->net_dev && VAR_4->net_dev->phydev)
  FUNC_2(VAR_4->net_dev->phydev);
}
