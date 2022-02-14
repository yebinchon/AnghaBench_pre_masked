
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs_tx_column {int mode; } ;
struct iwl_lq_sta {int max_legacy_rate_idx; int max_siso_rate_idx; int max_mimo2_rate_idx; } ;





 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct iwl_lq_sta *VAR_0,
       const struct rs_tx_column *VAR_1)
{
 switch (VAR_1->mode) {
 case 130:
  return VAR_0->max_legacy_rate_idx;
 case 128:
  return VAR_0->max_siso_rate_idx;
 case 129:
  return VAR_0->max_mimo2_rate_idx;
 default:
  FUNC_0(1);
 }

 return VAR_0->max_legacy_rate_idx;
}
