
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_scan_req_tx_cmd {int sta_id; void* rate_n_flags; void* tx_flags; } ;
struct TYPE_2__ {int sta_id; } ;
struct iwl_mvm {TYPE_1__ aux_sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (struct iwl_mvm*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct iwl_mvm *VAR_4,
         struct iwl_scan_req_tx_cmd *VAR_5,
         bool VAR_6)
{
 VAR_5[0].tx_flags = FUNC_0(VAR_3 |
      VAR_2);
 VAR_5[0].rate_n_flags = FUNC_1(VAR_4,
          VAR_0,
          VAR_6);
 VAR_5[0].sta_id = VAR_4->aux_sta.sta_id;

 VAR_5[1].tx_flags = FUNC_0(VAR_3 |
      VAR_2);
 VAR_5[1].rate_n_flags = FUNC_1(VAR_4,
          VAR_1,
          VAR_6);
 VAR_5[1].sta_id = VAR_4->aux_sta.sta_id;
}
