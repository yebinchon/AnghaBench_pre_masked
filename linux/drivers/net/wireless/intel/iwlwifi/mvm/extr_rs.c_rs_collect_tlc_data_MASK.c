
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct lq_sta_pers {TYPE_3__** tx_stats; } ;
struct iwl_scale_tbl_info {scalar_t__ column; struct iwl_rate_scale_data* win; } ;
struct iwl_rate_scale_data {int dummy; } ;
struct TYPE_4__ {struct lq_sta_pers pers; } ;
struct TYPE_5__ {TYPE_1__ rs_drv; } ;
struct iwl_mvm_sta {TYPE_2__ lq_sta; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_6__ {int total; int success; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,struct iwl_scale_tbl_info*,int,int,int,struct iwl_rate_scale_data*) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_mvm_sta*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm *VAR_3,
          struct iwl_mvm_sta *VAR_4, u8 VAR_5,
          struct iwl_scale_tbl_info *VAR_6,
          int VAR_7, int VAR_8, int VAR_9)
{
 struct iwl_rate_scale_data *VAR_10 = ((void*)0);

 if (VAR_7 < 0 || VAR_7 >= VAR_1)
  return -VAR_0;

 if (VAR_6->column != VAR_2) {
  struct lq_sta_pers *VAR_11 = &VAR_4->lq_sta.rs_drv.pers;

  VAR_11->tx_stats[VAR_6->column][VAR_7].total += VAR_8;
  VAR_11->tx_stats[VAR_6->column][VAR_7].success += VAR_9;
 }

 FUNC_1(VAR_3, VAR_4, VAR_5, VAR_9);


 VAR_10 = &(VAR_6->win[VAR_7]);
 return FUNC_0(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9,
       VAR_10);
}
