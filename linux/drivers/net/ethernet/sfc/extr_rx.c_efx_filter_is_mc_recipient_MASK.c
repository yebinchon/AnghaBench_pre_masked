
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_filter_spec {int flags; scalar_t__ dmaq_id; int match_flags; scalar_t__ ether_type; int * loc_host; int loc_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

bool FUNC_3(const struct efx_filter_spec *VAR_8)
{
 if (!(VAR_8->flags & VAR_0) ||
     VAR_8->dmaq_id == VAR_5)
  return 0;

 if (VAR_8->match_flags &
     (VAR_3 | VAR_4) &&
     FUNC_2(VAR_8->loc_mac))
  return 1;

 if ((VAR_8->match_flags &
      (VAR_1 | VAR_2)) ==
     (VAR_1 | VAR_2)) {
  if (VAR_8->ether_type == FUNC_0(VAR_6) &&
      FUNC_1(VAR_8->loc_host[0]))
   return 1;
  if (VAR_8->ether_type == FUNC_0(VAR_7) &&
      ((const u8 *)VAR_8->loc_host)[0] == 0xff)
   return 1;
 }

 return 0;
}
