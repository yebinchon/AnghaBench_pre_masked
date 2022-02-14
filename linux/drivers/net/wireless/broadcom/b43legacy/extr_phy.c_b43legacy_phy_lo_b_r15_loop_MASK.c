
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_wldev {int dummy; } ;


 scalar_t__ FUNC_0 (struct b43legacy_wldev*,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static u16 FUNC_6(struct b43legacy_wldev *VAR_0)
{
 int VAR_1;
 u16 VAR_2 = 0;
 unsigned long VAR_3;

 FUNC_4(VAR_3);
 for (VAR_1 = 0; VAR_1 < 10; VAR_1++) {
  FUNC_1(VAR_0, 0x0015, 0xAFA0);
  FUNC_5(1);
  FUNC_1(VAR_0, 0x0015, 0xEFA0);
  FUNC_5(10);
  FUNC_1(VAR_0, 0x0015, 0xFFA0);
  FUNC_5(40);
  VAR_2 += FUNC_0(VAR_0, 0x002C);
 }
 FUNC_3(VAR_3);
 FUNC_2();

 return VAR_2;
}
