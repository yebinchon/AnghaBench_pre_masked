
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_4, bool VAR_5)
{
 struct b43_phy *VAR_6 = &VAR_4->phy;
 u16 VAR_7 = VAR_5 ? 0x0 : 0x7FFF;
 u16 VAR_8 = VAR_5 ? 0xD : 0x00FD;

 if (VAR_6->rev >= 19) {

 } else if (VAR_6->rev >= 3) {
  if (VAR_5) {
   FUNC_0(VAR_4, VAR_0, VAR_8);
   FUNC_0(VAR_4, VAR_3, VAR_7);
   FUNC_0(VAR_4, VAR_1, VAR_8);
   FUNC_0(VAR_4, VAR_2, VAR_7);
  } else {
   FUNC_0(VAR_4, VAR_3, VAR_7);
   FUNC_0(VAR_4, VAR_0, VAR_8);
   FUNC_0(VAR_4, VAR_2, VAR_7);
   FUNC_0(VAR_4, VAR_1, VAR_8);
  }
 } else {
  FUNC_0(VAR_4, VAR_2, VAR_7);
 }
}
