
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_spq_entry {int dummy; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct qed_queue_cid {int opaque_fid; int cid; } ;
struct qed_hwfn {int dummy; } ;
typedef int init_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int
FUNC_3(struct qed_hwfn *VAR_3, struct qed_queue_cid *VAR_4)
{
 struct qed_spq_entry *VAR_5 = ((void*)0);
 struct qed_sp_init_data VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cid = VAR_4->cid;
 VAR_6.opaque_fid = VAR_4->opaque_fid;
 VAR_6.comp_mode = VAR_2;

 VAR_7 = FUNC_1(VAR_3, &VAR_5,
     VAR_0,
     VAR_1, &VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_2(VAR_3, VAR_5, ((void*)0));
}
