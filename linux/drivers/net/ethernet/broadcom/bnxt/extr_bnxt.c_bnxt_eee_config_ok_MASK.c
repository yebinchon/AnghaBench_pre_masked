
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ethtool_eee {int advertised; int supported; scalar_t__ eee_enabled; } ;
struct bnxt_link_info {int autoneg; int advertising; } ;
struct bnxt {int flags; struct bnxt_link_info link_info; struct ethtool_eee eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct bnxt *VAR_2)
{
 struct ethtool_eee *VAR_3 = &VAR_2->eee;
 struct bnxt_link_info *VAR_4 = &VAR_2->link_info;

 if (!(VAR_2->flags & VAR_1))
  return 1;

 if (VAR_3->eee_enabled) {
  u32 VAR_5 =
   FUNC_0(VAR_4->advertising, 0);

  if (!(VAR_4->autoneg & VAR_0)) {
   VAR_3->eee_enabled = 0;
   return 0;
  }
  if (VAR_3->advertised & ~VAR_5) {
   VAR_3->advertised = VAR_5 & VAR_3->supported;
   return 0;
  }
 }
 return 1;
}
