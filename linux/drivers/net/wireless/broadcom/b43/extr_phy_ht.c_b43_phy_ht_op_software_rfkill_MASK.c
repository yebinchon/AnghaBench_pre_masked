
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int radio_ver; int channel; } ;
struct b43_wldev {TYPE_1__ phy; int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int ) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_4,
     bool VAR_5)
{
 if (FUNC_3(VAR_4, VAR_1) & VAR_0)
  FUNC_5(VAR_4->wl, "MAC not suspended\n");

 if (VAR_5) {
  FUNC_1(VAR_4, VAR_2,
        ~VAR_3);
 } else {
  if (VAR_4->phy.radio_ver == 0x2059)
   FUNC_2(VAR_4);
  else
   FUNC_0(1);

  FUNC_4(VAR_4, VAR_4->phy.channel);
 }
}
