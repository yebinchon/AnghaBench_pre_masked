
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_eth_cpu_data {int fcftr_value; scalar_t__ trscer_err_mask; scalar_t__ eesr_err_check; scalar_t__ tx_check; scalar_t__ fdr_value; scalar_t__ ecsipr_value; scalar_t__ ecsr_value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_0(struct sh_eth_cpu_data *VAR_8)
{
 if (!VAR_8->ecsr_value)
  VAR_8->ecsr_value = VAR_1;

 if (!VAR_8->ecsipr_value)
  VAR_8->ecsipr_value = VAR_0;

 if (!VAR_8->fcftr_value)
  VAR_8->fcftr_value = VAR_5 |
      VAR_4;

 if (!VAR_8->fdr_value)
  VAR_8->fdr_value = VAR_3;

 if (!VAR_8->tx_check)
  VAR_8->tx_check = VAR_7;

 if (!VAR_8->eesr_err_check)
  VAR_8->eesr_err_check = VAR_2;

 if (!VAR_8->trscer_err_mask)
  VAR_8->trscer_err_mask = VAR_6;
}
