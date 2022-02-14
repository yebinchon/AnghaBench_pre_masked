
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_hw {int dummy; } ;
struct ath_common {int const* macaddr; int const* bssidmask; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;

__attribute__((used)) static inline bool FUNC_1(struct ath_hw *VAR_1, const u8 *VAR_2)
{
 int VAR_3;
 struct ath_common *VAR_4 = FUNC_0(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if ((VAR_4->macaddr[VAR_3] & VAR_4->bssidmask[VAR_3]) !=
      (VAR_2[VAR_3] & VAR_4->bssidmask[VAR_3]))
   return 0;
 }

 return 1;
}
