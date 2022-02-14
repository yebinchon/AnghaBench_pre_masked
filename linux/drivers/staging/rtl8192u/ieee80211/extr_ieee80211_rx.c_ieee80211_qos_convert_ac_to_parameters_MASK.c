
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_qos_parameters {int* aifs; int* flag; int * tx_op_limit; void** cw_max; void** cw_min; } ;
struct ieee80211_qos_parameter_info {struct ieee80211_qos_ac_parameter* ac_params_record; } ;
struct ieee80211_qos_ac_parameter {int aci_aifsn; int ecw_min_max; int tx_op_limit; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
  struct ieee80211_qos_parameter_info *VAR_1,
  struct ieee80211_qos_parameters *VAR_2)
{
 int VAR_3;
 struct ieee80211_qos_ac_parameter *VAR_4;
 u8 VAR_5;



 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = &(VAR_1->ac_params_record[VAR_3]);

  VAR_5 = (VAR_4->aci_aifsn & 0x60) >> 5;

  if (VAR_5 >= VAR_0)
   continue;
  VAR_2->aifs[VAR_5] = (VAR_4->aci_aifsn) & 0x0f;


  VAR_2->aifs[VAR_5] = (VAR_2->aifs[VAR_5] < 2) ? 2 : VAR_2->aifs[VAR_5];

  VAR_2->cw_min[VAR_5] =
      FUNC_0(VAR_4->ecw_min_max & 0x0F);

  VAR_2->cw_max[VAR_5] =
      FUNC_0((VAR_4->ecw_min_max & 0xF0) >> 4);

  VAR_2->flag[VAR_5] =
      (VAR_4->aci_aifsn & 0x10) ? 0x01 : 0x00;
  VAR_2->tx_op_limit[VAR_5] = VAR_4->tx_op_limit;
 }
 return 0;
}
