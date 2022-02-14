
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct b43_wldev*,int ) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_5)
{
 struct b43_phy *VAR_6 = &VAR_5->phy;

 if (VAR_6->rev >= 6) {
  if (FUNC_0(VAR_5, VAR_0) & VAR_1)
   FUNC_1(VAR_5, VAR_4);
  else
   FUNC_1(VAR_5, VAR_3);
 } else {
  FUNC_1(VAR_5, VAR_2);
 }
}
