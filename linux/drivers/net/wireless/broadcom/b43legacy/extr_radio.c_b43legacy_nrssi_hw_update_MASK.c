
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_wldev {int dummy; } ;
typedef int s16 ;


 int FUNC_0 (struct b43legacy_wldev*,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int ) ;
 int FUNC_2 (int ,int,int) ;

void FUNC_3(struct b43legacy_wldev *VAR_0, u16 VAR_1)
{
 u16 VAR_2;
 s16 VAR_3;

 for (VAR_2 = 0; VAR_2 < 64; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  VAR_3 -= VAR_1;
  VAR_3 = FUNC_2(VAR_3, -32, 31);
  FUNC_1(VAR_0, VAR_2, VAR_3);
 }
}
