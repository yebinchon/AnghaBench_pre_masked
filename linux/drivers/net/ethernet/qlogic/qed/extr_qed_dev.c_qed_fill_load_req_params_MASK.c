
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_load_req_params {int override_force_load; int avoid_eng_reset; int timeout_val; int drv_role; } ;
struct qed_drv_load_params {int override_force_load; int avoid_eng_reset; int mfw_timeout_val; scalar_t__ is_crash_kernel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_load_req_params*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct qed_load_req_params *VAR_2,
    struct qed_drv_load_params *VAR_3)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->drv_role = VAR_3->is_crash_kernel ?
          VAR_0 : VAR_1;
 VAR_2->timeout_val = VAR_3->mfw_timeout_val;
 VAR_2->avoid_eng_reset = VAR_3->avoid_eng_reset;
 VAR_2->override_force_load = VAR_3->override_force_load;
}
