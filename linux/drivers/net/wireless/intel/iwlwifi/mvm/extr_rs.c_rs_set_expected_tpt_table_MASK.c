
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs_tx_column {int dummy; } ;
struct rs_rate {int bw; } ;
struct iwl_scale_tbl_info {size_t column; int expected_tpt; struct rs_rate rate; } ;
struct iwl_lq_sta {int dummy; } ;


 int FUNC_0 (struct iwl_lq_sta*,struct rs_tx_column const*,int ) ;
 struct rs_tx_column* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct iwl_lq_sta *VAR_1,
          struct iwl_scale_tbl_info *VAR_2)
{
 struct rs_rate *VAR_3 = &VAR_2->rate;
 const struct rs_tx_column *VAR_4 = &VAR_0[VAR_2->column];

 VAR_2->expected_tpt = FUNC_0(VAR_1, VAR_4, VAR_3->bw);
}
