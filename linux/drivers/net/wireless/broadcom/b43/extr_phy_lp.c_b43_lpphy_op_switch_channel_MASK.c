
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int radio_ver; struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_lp {unsigned int channel; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int ,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,unsigned int) ;
 int FUNC_4 (struct b43_wldev*,unsigned int) ;
 int FUNC_5 (struct b43_wldev*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct b43_wldev *VAR_1,
           unsigned int VAR_2)
{
 struct b43_phy_lp *VAR_3 = VAR_1->phy.lp;
 int VAR_4;

 if (VAR_1->phy.radio_ver == 0x2063) {
  VAR_4 = FUNC_4(VAR_1, VAR_2);
  if (VAR_4)
   return VAR_4;
 } else {
  VAR_4 = FUNC_3(VAR_1, VAR_2);
  if (VAR_4)
   return VAR_4;
  FUNC_5(VAR_1, VAR_2);
  FUNC_2(VAR_1, FUNC_1(VAR_2));
 }

 VAR_3->channel = VAR_2;
 FUNC_0(VAR_1, VAR_0, VAR_2);

 return 0;
}
