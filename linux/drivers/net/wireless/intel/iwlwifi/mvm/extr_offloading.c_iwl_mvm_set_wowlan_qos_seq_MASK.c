
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iwl_wowlan_config_cmd {int * qos_seq; } ;
struct iwl_mvm_sta {TYPE_1__* tid_data; } ;
struct TYPE_2__ {int seq_number; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(struct iwl_mvm_sta *VAR_1,
    struct iwl_wowlan_config_cmd *VAR_2)
{
 int VAR_3;






 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  u16 VAR_4 = VAR_1->tid_data[VAR_3].seq_number;
  VAR_4 -= 0x10;
  VAR_2->qos_seq[VAR_3] = FUNC_0(VAR_4);
 }
}
