
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ath5k_pdgain_info {size_t pd_points; int* pd_pwr; int * pd_step; } ;
struct ath5k_eeprom_info {size_t** ee_pdc_to_idx; size_t* ee_n_piers; size_t* ee_x_gain; int* ee_pd_gains; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info_rf5111 {int* pwr; int * pcdac; } ;
struct ath5k_chan_pcal_info {int min_pwr; int max_pwr; struct ath5k_pdgain_info* pd_curves; struct ath5k_chan_pcal_info_rf5111 rf5111_info; } ;
typedef int s16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath5k_hw*,int) ;
 void* FUNC_1 (size_t,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct ath5k_hw *VAR_4, int VAR_5,
    struct ath5k_chan_pcal_info *VAR_6)
{
 struct ath5k_eeprom_info *VAR_7 = &VAR_4->ah_capabilities.cap_eeprom;
 struct ath5k_chan_pcal_info_rf5111 *VAR_8;
 struct ath5k_pdgain_info *VAR_9;
 u8 VAR_10, VAR_11, VAR_12;
 u8 *VAR_13 = VAR_7->ee_pdc_to_idx[VAR_5];


 for (VAR_10 = 0; VAR_10 < VAR_7->ee_n_piers[VAR_5]; VAR_10++) {

  VAR_8 = &VAR_6[VAR_10].rf5111_info;


  VAR_6[VAR_10].pd_curves =
   FUNC_1(VAR_0,
    sizeof(struct ath5k_pdgain_info),
    VAR_3);

  if (!VAR_6[VAR_10].pd_curves)
   goto err_out;





  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {

   if (!((VAR_7->ee_x_gain[VAR_5] >> VAR_12) & 0x1)) {
    VAR_13[0] = VAR_12;
    break;
   }
  }

  VAR_7->ee_pd_gains[VAR_5] = 1;

  VAR_9 = &VAR_6[VAR_10].pd_curves[VAR_12];

  VAR_9->pd_points = VAR_1;


  VAR_9->pd_step = FUNC_1(VAR_1,
     sizeof(u8), VAR_3);
  if (!VAR_9->pd_step)
   goto err_out;

  VAR_9->pd_pwr = FUNC_1(VAR_1,
     sizeof(s16), VAR_3);
  if (!VAR_9->pd_pwr)
   goto err_out;




  for (VAR_11 = 0; VAR_11 < VAR_9->pd_points; VAR_11++) {


   VAR_9->pd_pwr[VAR_11] = 2 * VAR_8->pwr[VAR_11];


   VAR_9->pd_step[VAR_11] = VAR_8->pcdac[VAR_11];
  }


  VAR_6[VAR_10].min_pwr = VAR_9->pd_pwr[0];
  VAR_6[VAR_10].max_pwr = VAR_9->pd_pwr[10];

 }

 return 0;

err_out:
 FUNC_0(VAR_4, VAR_5);
 return -VAR_2;
}
