
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ethsw_port_priv {scalar_t__ stp_state; int netdev; int idx; TYPE_1__* ethsw_data; } ;
struct dpsw_stp_cfg {scalar_t__ state; int vlan_id; } ;
struct TYPE_2__ {int dpsw_handle; int mc_io; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,struct dpsw_stp_cfg*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ethsw_port_priv *VAR_1, u8 VAR_2)
{
 struct dpsw_stp_cfg VAR_3 = {
  .vlan_id = VAR_0,
  .state = VAR_2,
 };
 int VAR_4;

 if (!FUNC_2(VAR_1->netdev) || VAR_2 == VAR_1->stp_state)
  return 0;

 VAR_4 = FUNC_0(VAR_1->ethsw_data->mc_io, 0,
         VAR_1->ethsw_data->dpsw_handle,
         VAR_1->idx, &VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_1->netdev,
      "dpsw_if_set_stp err %d\n", VAR_4);
  return VAR_4;
 }

 VAR_1->stp_state = VAR_2;

 return 0;
}
