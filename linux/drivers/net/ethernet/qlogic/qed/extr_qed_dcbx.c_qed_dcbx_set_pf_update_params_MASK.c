
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct qed_dcbx_results {TYPE_1__* arr; } ;
struct protocol_dcb_data {int dummy; } ;
struct pf_update_ramrod_data {struct protocol_dcb_data eth_dcb_data; struct protocol_dcb_data iscsi_dcb_data; struct protocol_dcb_data rroce_dcb_data; struct protocol_dcb_data roce_dcb_data; struct protocol_dcb_data fcoe_dcb_data; void* update_eth_dcb_data_mode; void* update_iscsi_dcb_data_mode; void* update_rroce_dcb_data_mode; void* update_roce_dcb_data_mode; void* update_fcoe_dcb_data_mode; } ;
struct TYPE_2__ {void* update; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct protocol_dcb_data*,struct qed_dcbx_results*,size_t) ;

void FUNC_1(struct qed_dcbx_results *VAR_5,
       struct pf_update_ramrod_data *VAR_6)
{
 struct protocol_dcb_data *VAR_7;
 u8 VAR_8;

 VAR_8 = VAR_5->arr[VAR_1].update;
 VAR_6->update_fcoe_dcb_data_mode = VAR_8;

 VAR_8 = VAR_5->arr[VAR_3].update;
 VAR_6->update_roce_dcb_data_mode = VAR_8;

 VAR_8 = VAR_5->arr[VAR_4].update;
 VAR_6->update_rroce_dcb_data_mode = VAR_8;

 VAR_8 = VAR_5->arr[VAR_2].update;
 VAR_6->update_iscsi_dcb_data_mode = VAR_8;
 VAR_8 = VAR_5->arr[VAR_0].update;
 VAR_6->update_eth_dcb_data_mode = VAR_8;

 VAR_7 = &VAR_6->fcoe_dcb_data;
 FUNC_0(VAR_7, VAR_5, VAR_1);
 VAR_7 = &VAR_6->roce_dcb_data;
 FUNC_0(VAR_7, VAR_5, VAR_3);
 VAR_7 = &VAR_6->rroce_dcb_data;
 FUNC_0(VAR_7, VAR_5, VAR_4);
 VAR_7 = &VAR_6->iscsi_dcb_data;
 FUNC_0(VAR_7, VAR_5, VAR_2);
 VAR_7 = &VAR_6->eth_dcb_data;
 FUNC_0(VAR_7, VAR_5, VAR_0);
}
