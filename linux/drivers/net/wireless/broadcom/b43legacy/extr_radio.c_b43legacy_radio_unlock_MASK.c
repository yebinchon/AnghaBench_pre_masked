
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b43legacy_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_wldev*,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int) ;

void FUNC_4(struct b43legacy_wldev *VAR_3)
{
 u32 VAR_4;

 FUNC_1(VAR_3, VAR_2);
 VAR_4 = FUNC_2(VAR_3, VAR_1);
 FUNC_0(!(VAR_4 & VAR_0));
 VAR_4 &= ~VAR_0;
 FUNC_3(VAR_3, VAR_1, VAR_4);
}
