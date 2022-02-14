
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_sensitivity_data {int dummy; } ;
struct TYPE_2__ {int * delta_gain_code; } ;
struct iwl_priv {TYPE_1__ chain_noise_data; TYPE_1__ sensitivity_data; } ;
struct iwl_chain_noise_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(struct iwl_priv *VAR_3)
{
 int VAR_4;
 FUNC_1(&(VAR_3->sensitivity_data), 0,
        sizeof(struct iwl_sensitivity_data));
 FUNC_1(&(VAR_3->chain_noise_data), 0,
        sizeof(struct iwl_chain_noise_data));
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3->chain_noise_data.delta_gain_code[VAR_4] =
    VAR_0;



 FUNC_0(VAR_3, VAR_1, 1);
}
