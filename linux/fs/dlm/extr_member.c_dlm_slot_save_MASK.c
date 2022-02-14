
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcom_config {int rf_generation; int rf_our_slot; } ;
struct dlm_rcom {int rc_header; scalar_t__ rc_buf; } ;
struct dlm_member {int generation; int slot; } ;
struct dlm_ls {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct dlm_ls *VAR_0, struct dlm_rcom *VAR_1,
     struct dlm_member *VAR_2)
{
 struct rcom_config *VAR_3 = (struct rcom_config *)VAR_1->rc_buf;

 if (!FUNC_0(&VAR_1->rc_header))
  return;

 VAR_2->slot = FUNC_1(VAR_3->rf_our_slot);
 VAR_2->generation = FUNC_2(VAR_3->rf_generation);
}
