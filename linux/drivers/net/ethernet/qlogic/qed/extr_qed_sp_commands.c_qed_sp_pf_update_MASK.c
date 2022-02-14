
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pf_update; } ;
struct qed_spq_entry {TYPE_3__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_2__* p_dcbx_info; TYPE_1__ hw_info; } ;
typedef int init_data ;
struct TYPE_5__ {int results; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

int FUNC_5(struct qed_hwfn *VAR_4)
{
 struct qed_spq_entry *VAR_5 = ((void*)0);
 struct qed_sp_init_data VAR_6;
 int VAR_7 = -VAR_1;


 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cid = FUNC_3(VAR_4);
 VAR_6.opaque_fid = VAR_4->hw_info.opaque_fid;
 VAR_6.comp_mode = VAR_3;

 VAR_7 = FUNC_2(VAR_4, &VAR_5,
     VAR_0, VAR_2,
     &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_1(&VAR_4->p_dcbx_info->results,
          &VAR_5->ramrod.pf_update);

 return FUNC_4(VAR_4, VAR_5, ((void*)0));
}
