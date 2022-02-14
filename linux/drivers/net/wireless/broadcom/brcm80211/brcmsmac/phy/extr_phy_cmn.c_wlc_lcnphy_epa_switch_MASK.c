
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy {TYPE_3__* d11core; TYPE_1__* sh; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_5__ {int drv_cc; } ;
struct TYPE_4__ {scalar_t__ chip; int boardflags; int physhim; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct brcms_phy *VAR_2, bool VAR_3)
{
 if ((VAR_2->sh->chip == VAR_0) &&
     (VAR_2->sh->boardflags & VAR_1)) {
  if (VAR_3) {
   u16 VAR_4 = 0;
   VAR_4 = FUNC_4(VAR_2->sh->physhim);
   if (VAR_4 == 1) {
    FUNC_3(VAR_2, 0x44d, (0x1 << 2), (1) << 2);

    FUNC_3(VAR_2, 0x44c, (0x1 << 2), (1) << 2);

   }

   FUNC_0(&VAR_2->d11core->bus->drv_cc,
       0x0, 0x0);
   FUNC_1(&VAR_2->d11core->bus->drv_cc,
          ~0x40, 0x40);
   FUNC_2(&VAR_2->d11core->bus->drv_cc,
            ~0x40, 0x40);
  } else {
   FUNC_3(VAR_2, 0x44c, (0x1 << 2), (0) << 2);

   FUNC_3(VAR_2, 0x44d, (0x1 << 2), (0) << 2);

   FUNC_1(&VAR_2->d11core->bus->drv_cc,
          ~0x40, 0x00);
   FUNC_2(&VAR_2->d11core->bus->drv_cc,
            ~0x40, 0x00);
   FUNC_0(&VAR_2->d11core->bus->drv_cc,
       0x0, 0x40);
  }
 }
}
