
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_sp_vport_update_params {int accept_flags; } ;
struct qed_hwfn {int dummy; } ;
struct qed_filter_accept_flags {int dummy; } ;
typedef int s_params ;


 int FUNC_0 (int *,struct qed_filter_accept_flags*,int) ;
 int FUNC_1 (struct qed_sp_vport_update_params*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_sp_vport_update_params*) ;

__attribute__((used)) static int
FUNC_3(struct qed_hwfn *VAR_0,
         struct qed_filter_accept_flags *VAR_1)
{
 struct qed_sp_vport_update_params VAR_2;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 FUNC_0(&VAR_2.accept_flags, VAR_1,
        sizeof(struct qed_filter_accept_flags));

 return FUNC_2(VAR_0, &VAR_2);
}
