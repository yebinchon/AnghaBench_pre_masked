
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_2)
{
 if (VAR_2->phy.rev < 2)
  FUNC_0(VAR_2, VAR_1, 0xFEFF);
 else {
  FUNC_0(VAR_2, VAR_1, 0xFF7F);
  FUNC_0(VAR_2, VAR_1, 0xBFFF);
 }
 FUNC_0(VAR_2, VAR_0, 0xFFBF);
}
