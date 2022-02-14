
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct b43_wldev*) ;
 scalar_t__ FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_2)
{
 u16 VAR_3;

 if (VAR_2->phy.rev < 3 || VAR_2->phy.rev >= 7)
  return;

 if (FUNC_1(VAR_2))
  VAR_3 = FUNC_0(VAR_2) ? 5 : 4;
 else
  VAR_3 = FUNC_0(VAR_2) ? 3 : 1;
 FUNC_2(VAR_2, VAR_1,
        (VAR_3 << 9) | (VAR_3 << 6) | (VAR_3 << 3) | VAR_3);

 if (FUNC_1(VAR_2)) {
  VAR_3 = FUNC_0(VAR_2) ? 4 : 1;
  FUNC_2(VAR_2, VAR_0,
         (VAR_3 << 9) | (VAR_3 << 6) | (VAR_3 << 3) | VAR_3);
 }
}
