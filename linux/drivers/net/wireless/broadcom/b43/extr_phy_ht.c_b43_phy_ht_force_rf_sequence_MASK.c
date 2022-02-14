
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_wldev {int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_3, u16 VAR_4)
{
 u8 VAR_5;

 u16 VAR_6 = FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_0, 0x3);

 FUNC_1(VAR_3, VAR_2, VAR_4);
 for (VAR_5 = 0; VAR_5 < 200; VAR_5++) {
  if (!(FUNC_0(VAR_3, VAR_1) & VAR_4)) {
   VAR_5 = 0;
   break;
  }
  FUNC_4(1);
 }
 if (VAR_5)
  FUNC_3(VAR_3->wl, "Forcing RF sequence timeout\n");

 FUNC_2(VAR_3, VAR_0, VAR_6);
}
