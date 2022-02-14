
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_filter_spec {int match_flags; scalar_t__ ether_type; int * loc_host; int loc_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const struct efx_filter_spec *VAR_5)
{
 if (VAR_5->match_flags & VAR_2 &&
     !FUNC_2(VAR_5->loc_mac))
  return 1;

 if ((VAR_5->match_flags &
      (VAR_0 | VAR_1)) ==
     (VAR_0 | VAR_1)) {
  if (VAR_5->ether_type == FUNC_0(VAR_3) &&
      !FUNC_1(VAR_5->loc_host[0]))
   return 1;
  if (VAR_5->ether_type == FUNC_0(VAR_4) &&
      ((const u8 *)VAR_5->loc_host)[0] != 0xff)
   return 1;
 }

 return 0;
}
