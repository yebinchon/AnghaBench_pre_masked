
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {scalar_t__ type; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int const) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_4->phy;
 int VAR_6;
 const u16 *VAR_7;

 if (VAR_5->type == VAR_1) {
  VAR_7 = VAR_3;
 } else {
  FUNC_0(1);
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_1(VAR_4, VAR_0,
     VAR_6, VAR_7[VAR_6]);
 }
}
