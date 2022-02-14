
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_4)
{
 u16 VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3) & VAR_1;
 if (VAR_5 > 2) {
  FUNC_2(VAR_4, VAR_2, 0x1000);
 } else {
  FUNC_0(VAR_4, VAR_0, 3, 0x1044);
  FUNC_0(VAR_4, VAR_0, 4, 0x7201);
  FUNC_0(VAR_4, VAR_0, 6, 0x0040);
 }
}
