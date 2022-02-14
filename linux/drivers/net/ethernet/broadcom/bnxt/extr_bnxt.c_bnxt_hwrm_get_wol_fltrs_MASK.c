
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct hwrm_wol_filter_qcfg_output {scalar_t__ wol_type; int wol_filter_id; int next_handle; } ;
struct hwrm_wol_filter_qcfg_input {void* handle; void* port_id; int member_0; } ;
struct TYPE_2__ {scalar_t__ port_id; } ;
struct bnxt {int wol; int hwrm_cmd_lock; int wol_filter_id; TYPE_1__ pf; struct hwrm_wol_filter_qcfg_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bnxt*,struct hwrm_wol_filter_qcfg_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_wol_filter_qcfg_input*,int ,int,int) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static u16 FUNC_6(struct bnxt *VAR_3, u16 VAR_4)
{
 struct hwrm_wol_filter_qcfg_input VAR_5 = {0};
 struct hwrm_wol_filter_qcfg_output *VAR_6 = VAR_3->hwrm_cmd_resp_addr;
 u16 VAR_7 = 0;
 int VAR_8;

 FUNC_1(VAR_3, &VAR_5, VAR_1, -1, -1);
 VAR_5.port_id = FUNC_2(VAR_3->pf.port_id);
 VAR_5.handle = FUNC_2(VAR_4);
 FUNC_4(&VAR_3->hwrm_cmd_lock);
 VAR_8 = FUNC_0(VAR_3, &VAR_5, sizeof(VAR_5), VAR_0);
 if (!VAR_8) {
  VAR_7 = FUNC_3(VAR_6->next_handle);
  if (VAR_7 != 0) {
   if (VAR_6->wol_type ==
       VAR_2) {
    VAR_3->wol = 1;
    VAR_3->wol_filter_id = VAR_6->wol_filter_id;
   }
  }
 }
 FUNC_5(&VAR_3->hwrm_cmd_lock);
 return VAR_7;
}
