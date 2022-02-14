
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int ) ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_5)
{
 struct b43_phy *VAR_6 = &VAR_5->phy;
 int VAR_7;

 if (VAR_6->rev == 1)
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
   FUNC_0(VAR_5, VAR_0, VAR_7,
         VAR_3[VAR_7]);
 else
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   FUNC_0(VAR_5, VAR_0, VAR_7,
         VAR_4[VAR_7]);
}
