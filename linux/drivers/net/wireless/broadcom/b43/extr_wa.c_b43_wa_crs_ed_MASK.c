
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_4->phy;

 if (VAR_5->rev == 1) {
  FUNC_2(VAR_4, VAR_2, 0x4F19);
 } else if (VAR_5->rev == 2) {
  FUNC_2(VAR_4, VAR_1, 0x1861);
  FUNC_2(VAR_4, VAR_3, 0x0271);
  FUNC_1(VAR_4, VAR_0, 0x0800);
 } else {
  FUNC_2(VAR_4, VAR_1, 0x0098);
  FUNC_2(VAR_4, VAR_3, 0x0070);
  FUNC_2(VAR_4, FUNC_0(0xC9), 0x0080);
  FUNC_1(VAR_4, VAR_0, 0x0800);
 }
}
