
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;





 int FUNC_0 (struct b43_wldev*,int,int) ;
 int FUNC_1 (struct b43_wldev*,int const,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_0)
{
 static const u16 VAR_1[] = { 130, 129, 128, };
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  FUNC_0(VAR_0, 0x8bf, 0x1);
  FUNC_1(VAR_0, VAR_1[VAR_2] | 0x0159, 0x0011);
 }
}
