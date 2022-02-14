
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rev; TYPE_1__* lp; } ;
struct b43_wldev {TYPE_2__ phy; } ;
struct TYPE_3__ {int antenna; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_3, int VAR_4)
{
 if (VAR_3->phy.rev >= 2)
  return;

 if (FUNC_0(VAR_4 > VAR_0))
  return;

 FUNC_2(VAR_3, FUNC_1(VAR_3) & ~VAR_1);

 FUNC_3(VAR_3, VAR_2, 0xFFFD, VAR_4 & 0x2);
 FUNC_3(VAR_3, VAR_2, 0xFFFE, VAR_4 & 0x1);

 FUNC_2(VAR_3, FUNC_1(VAR_3) | VAR_1);

 VAR_3->phy.lp->antenna = VAR_4;
}
