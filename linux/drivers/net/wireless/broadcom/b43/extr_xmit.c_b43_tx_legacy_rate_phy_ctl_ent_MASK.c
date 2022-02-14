
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct b43_tx_legacy_rate_phy_ctl_entry {scalar_t__ bitrate; } ;


 unsigned int FUNC_0 (struct b43_tx_legacy_rate_phy_ctl_entry*) ;
 int FUNC_1 (int) ;
 struct b43_tx_legacy_rate_phy_ctl_entry* VAR_0 ;

__attribute__((used)) static const struct b43_tx_legacy_rate_phy_ctl_entry *
FUNC_2(u8 VAR_1)
{
 const struct b43_tx_legacy_rate_phy_ctl_entry *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = &(VAR_0[VAR_3]);
  if (VAR_2->bitrate == VAR_1)
   return VAR_2;
 }

 FUNC_1(1);
 return ((void*)0);
}
