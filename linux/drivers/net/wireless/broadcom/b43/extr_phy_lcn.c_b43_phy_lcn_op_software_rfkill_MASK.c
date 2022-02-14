
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_9,
     bool VAR_10)
{
 if (FUNC_2(VAR_9, VAR_1) & VAR_0)
  FUNC_3(VAR_9->wl, "MAC not suspended\n");

 if (VAR_10) {
  FUNC_0(VAR_9, VAR_3, ~0x7c00);
  FUNC_1(VAR_9, VAR_2, 0x1f00);

  FUNC_0(VAR_9, VAR_6, ~0x7f00);
  FUNC_0(VAR_9, VAR_5, ~0x2);
  FUNC_1(VAR_9, VAR_4, 0x808);

  FUNC_0(VAR_9, VAR_8, ~0x8);
  FUNC_1(VAR_9, VAR_7, 0x8);
 } else {
  FUNC_0(VAR_9, VAR_2, ~0x1f00);
  FUNC_0(VAR_9, VAR_4, ~0x808);
  FUNC_0(VAR_9, VAR_7, ~0x8);
 }
}
