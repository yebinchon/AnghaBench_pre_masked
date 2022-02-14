
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_wldev {int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct b43legacy_wldev*,int ,int ,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b43legacy_wldev *VAR_4)
{
 u16 VAR_5;


 if (FUNC_0(VAR_4->wl, VAR_3))
  VAR_5 = 2;
 else
  VAR_5 = 250;
 FUNC_1(VAR_4, VAR_1,
         VAR_2, VAR_5);
 FUNC_2(VAR_4, VAR_0, VAR_5);
}
