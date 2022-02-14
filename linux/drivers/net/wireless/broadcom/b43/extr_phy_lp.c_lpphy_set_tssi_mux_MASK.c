
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dummy; } ;
typedef enum tssi_mux_mode { ____Placeholder_tssi_mux_mode } tssi_mux_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (struct b43_wldev*,int ,int,int) ;
 int FUNC_7 (struct b43_wldev*,int ,int) ;
 int FUNC_8 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct b43_wldev *VAR_5, enum tssi_mux_mode VAR_6)
{
 if (VAR_6 != VAR_3) {
  FUNC_7(VAR_5, VAR_1, 0x2);
  FUNC_4(VAR_5, FUNC_0(0xF3), 0x1000);
  FUNC_8(VAR_5, VAR_0, 0x51);
  if (VAR_6 == VAR_4) {
   FUNC_5(VAR_5, VAR_1, 0xFFFE);
   FUNC_2(VAR_5, VAR_2, 0xFFC7);
  } else {
   FUNC_6(VAR_5, VAR_1, 0xFFFE, 0x1);
   FUNC_3(VAR_5, VAR_2,
     0xFFC7, 0x20);
  }
 } else {
  FUNC_1(1);
 }
}
