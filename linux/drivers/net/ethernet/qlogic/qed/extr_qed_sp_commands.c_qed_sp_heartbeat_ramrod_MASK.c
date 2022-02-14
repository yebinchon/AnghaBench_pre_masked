
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_spq_entry {int dummy; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_2__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

int FUNC_4(struct qed_hwfn *VAR_3)
{
 struct qed_spq_entry *VAR_4 = ((void*)0);
 struct qed_sp_init_data VAR_5;
 int VAR_6;


 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.cid = FUNC_2(VAR_3);
 VAR_5.opaque_fid = VAR_3->hw_info.opaque_fid;
 VAR_5.comp_mode = VAR_2;

 VAR_6 = FUNC_1(VAR_3, &VAR_4,
     VAR_0, VAR_1,
     &VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_3(VAR_3, VAR_4, ((void*)0));
}
