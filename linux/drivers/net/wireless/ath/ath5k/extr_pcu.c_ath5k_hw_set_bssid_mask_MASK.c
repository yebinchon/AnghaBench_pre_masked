
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_common {int bssidmask; } ;
struct ath5k_hw {scalar_t__ ah_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (struct ath5k_hw*) ;
 int FUNC_1 (struct ath_common*) ;
 int FUNC_2 (int ,int const*,int ) ;

void
FUNC_3(struct ath5k_hw *VAR_2, const u8 *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_0(VAR_2);



 FUNC_2(VAR_4->bssidmask, VAR_3, VAR_1);
 if (VAR_2->ah_version == VAR_0)
  FUNC_1(VAR_4);
}
