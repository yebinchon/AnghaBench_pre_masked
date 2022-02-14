
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_2)
{
 int VAR_3;

 if (VAR_2->phy.rev == 1) {
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
   FUNC_0(VAR_2, VAR_1,
      VAR_3, 0x0020);
  }
 } else {
  for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
   FUNC_0(VAR_2, VAR_0,
      VAR_3, 0x0820);
  }
 }
}
