
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rcom_config {void* rf_generation; void* rf_num_slots; void* rf_our_slot; void* rf_lsflags; void* rf_lvblen; } ;
struct dlm_ls {int ls_generation; int ls_slot; int ls_exflags; int ls_lvblen; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dlm_ls *VAR_0, struct rcom_config *VAR_1,
       uint32_t VAR_2)
{
 VAR_1->rf_lvblen = FUNC_1(VAR_0->ls_lvblen);
 VAR_1->rf_lsflags = FUNC_1(VAR_0->ls_exflags);

 VAR_1->rf_our_slot = FUNC_0(VAR_0->ls_slot);
 VAR_1->rf_num_slots = FUNC_0(VAR_2);
 VAR_1->rf_generation = FUNC_1(VAR_0->ls_generation);
}
