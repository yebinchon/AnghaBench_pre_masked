
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct ath5k_rate_pcal_info {int target_power_6to24; int target_power_36; int target_power_48; int target_power_54; } ;
struct TYPE_2__ {int* txp_rates_power_table; int txp_min_pwr; int txp_cur_pwr; int txp_ofdm; int txp_offset; scalar_t__ txp_cck_ofdm_gainf_delta; scalar_t__ txp_max_pwr; } ;
struct ath5k_hw {scalar_t__ ah_phy_revision; TYPE_1__ ah_txpower; } ;
typedef int s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(struct ath5k_hw *VAR_2, u16 VAR_3,
   struct ath5k_rate_pcal_info *VAR_4,
   u8 VAR_5)
{
 unsigned int VAR_6;
 u16 *VAR_7;
 s16 VAR_8 = 0;



 VAR_3 *= 2;
 VAR_3 = FUNC_0(VAR_3, (u16) VAR_2->ah_txpower.txp_max_pwr) / 2;


 VAR_7 = VAR_2->ah_txpower.txp_rates_power_table;


 for (VAR_6 = 0; VAR_6 < 5; VAR_6++)
  VAR_7[VAR_6] = FUNC_0(VAR_3, VAR_4->target_power_6to24);


 VAR_7[5] = FUNC_0(VAR_7[0], VAR_4->target_power_36);
 VAR_7[6] = FUNC_0(VAR_7[0], VAR_4->target_power_48);
 VAR_7[7] = FUNC_0(VAR_7[0], VAR_4->target_power_54);



 VAR_7[8] = FUNC_0(VAR_7[0], VAR_4->target_power_6to24);

 VAR_7[9] = FUNC_0(VAR_7[0], VAR_4->target_power_36);

 VAR_7[10] = FUNC_0(VAR_7[0], VAR_4->target_power_36);

 VAR_7[11] = FUNC_0(VAR_7[0], VAR_4->target_power_48);

 VAR_7[12] = FUNC_0(VAR_7[0], VAR_4->target_power_48);

 VAR_7[13] = FUNC_0(VAR_7[0], VAR_4->target_power_54);

 VAR_7[14] = FUNC_0(VAR_7[0], VAR_4->target_power_54);


 VAR_7[15] = FUNC_0(VAR_7[0], VAR_4->target_power_6to24);





 if ((VAR_5 == VAR_0) &&
 (VAR_2->ah_phy_revision < VAR_1))
  for (VAR_6 = 8; VAR_6 <= 15; VAR_6++)
   VAR_7[VAR_6] -= VAR_2->ah_txpower.txp_cck_ofdm_gainf_delta;







 VAR_2->ah_txpower.txp_min_pwr = 2 * VAR_7[7];
 VAR_2->ah_txpower.txp_cur_pwr = 2 * VAR_7[0];




 VAR_2->ah_txpower.txp_ofdm = VAR_7[7];




 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  VAR_8 = VAR_7[VAR_6] + VAR_2->ah_txpower.txp_offset;

  if (VAR_8 > 63)
   VAR_8 = 63;
  if (VAR_8 < 0)
   VAR_8 = 0;
  VAR_7[VAR_6] = VAR_8;
 }
}
