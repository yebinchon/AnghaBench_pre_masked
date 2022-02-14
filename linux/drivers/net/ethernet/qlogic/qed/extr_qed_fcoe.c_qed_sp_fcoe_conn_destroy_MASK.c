
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int terminate_params_addr; } ;
struct fcoe_conn_terminate_ramrod_params {TYPE_3__ terminate_ramrod_data; } ;
struct TYPE_5__ {struct fcoe_conn_terminate_ramrod_params fcoe_conn_terminate; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_init_data {int comp_mode; struct qed_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
struct qed_fcoe_conn {int terminate_params; int icid; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int
FUNC_4(struct qed_hwfn *VAR_2,
    struct qed_fcoe_conn *VAR_3,
    enum spq_mode VAR_4,
    struct qed_spq_comp_cb *VAR_5)
{
 struct fcoe_conn_terminate_ramrod_params *VAR_6 = ((void*)0);
 struct qed_spq_entry *VAR_7 = ((void*)0);
 struct qed_sp_init_data VAR_8;
 int VAR_9 = 0;


 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cid = VAR_3->icid;
 VAR_8.opaque_fid = VAR_2->hw_info.opaque_fid;
 VAR_8.comp_mode = VAR_4;
 VAR_8.p_comp_data = VAR_5;

 VAR_9 = FUNC_2(VAR_2, &VAR_7,
     VAR_0,
     VAR_1, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_6 = &VAR_7->ramrod.fcoe_conn_terminate;
 FUNC_0(VAR_6->terminate_ramrod_data.terminate_params_addr,
         VAR_3->terminate_params);

 return FUNC_3(VAR_2, VAR_7, ((void*)0));
}
