
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_phy {scalar_t__ type; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_tx_legacy_rate_phy_ctl_entry {int modulation; int coding_rate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct b43_tx_legacy_rate_phy_ctl_entry* FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct b43_wldev *VAR_3, u8 VAR_4)
{
 const struct b43_phy *VAR_5 = &VAR_3->phy;
 const struct b43_tx_legacy_rate_phy_ctl_entry *VAR_6;
 u16 VAR_7 = 0;
 u16 VAR_8;

 if (VAR_5->type == VAR_0)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_1;

 if (0) {
 } else if (FUNC_0(VAR_4) && VAR_5->type != VAR_0) {
  VAR_7 = VAR_8;
 } else {
  VAR_7 = VAR_8;
  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6) {
   VAR_7 |= VAR_6->coding_rate;
   VAR_7 |= VAR_6->modulation;
  }
  VAR_7 |= VAR_2;
 }

 return VAR_7;
}
