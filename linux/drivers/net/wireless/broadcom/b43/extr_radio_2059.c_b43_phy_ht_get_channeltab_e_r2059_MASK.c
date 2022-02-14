
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct b43_wldev {int dummy; } ;
struct b43_phy_ht_channeltab_e_radio2059 {scalar_t__ freq; } ;


 unsigned int FUNC_0 (struct b43_phy_ht_channeltab_e_radio2059*) ;
 struct b43_phy_ht_channeltab_e_radio2059* VAR_0 ;

const struct b43_phy_ht_channeltab_e_radio2059
*FUNC_1(struct b43_wldev *VAR_1, u16 VAR_2)
{
 const struct b43_phy_ht_channeltab_e_radio2059 *VAR_3;
 unsigned int VAR_4;

 VAR_3 = VAR_0;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++, VAR_3++) {
  if (VAR_3->freq == VAR_2)
   return VAR_3;
 }

 return ((void*)0);
}
