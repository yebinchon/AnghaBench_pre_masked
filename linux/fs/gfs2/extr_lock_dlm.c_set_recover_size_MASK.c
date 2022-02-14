
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lm_lockstruct {int ls_recover_size; int* ls_recover_submit; int* ls_recover_result; int ls_recover_spin; scalar_t__ ls_lvb_bits; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;
struct dlm_slot {int slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct gfs2_sbd *VAR_4, struct dlm_slot *VAR_5,
       int VAR_6)
{
 struct lm_lockstruct *VAR_7 = &VAR_4->sd_lockstruct;
 uint32_t *VAR_8 = ((void*)0);
 uint32_t *VAR_9 = ((void*)0);
 uint32_t VAR_10, VAR_11;
 int VAR_12, VAR_13;

 if (!VAR_7->ls_lvb_bits) {
  VAR_7->ls_lvb_bits = FUNC_2(VAR_1, VAR_2);
  if (!VAR_7->ls_lvb_bits)
   return -VAR_0;
 }

 VAR_13 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  if (VAR_13 < VAR_5[VAR_12].slot - 1)
   VAR_13 = VAR_5[VAR_12].slot - 1;
 }

 VAR_10 = VAR_7->ls_recover_size;
 VAR_11 = VAR_10;
 while (VAR_11 < VAR_13 + 1)
  VAR_11 += VAR_3;
 if (VAR_11 == VAR_10)
  return 0;

 VAR_8 = FUNC_0(VAR_11, sizeof(uint32_t), VAR_2);
 VAR_9 = FUNC_0(VAR_11, sizeof(uint32_t), VAR_2);
 if (!VAR_8 || !VAR_9) {
  FUNC_1(VAR_8);
  FUNC_1(VAR_9);
  return -VAR_0;
 }

 FUNC_4(&VAR_7->ls_recover_spin);
 FUNC_3(VAR_8, VAR_7->ls_recover_submit, VAR_10 * sizeof(uint32_t));
 FUNC_3(VAR_9, VAR_7->ls_recover_result, VAR_10 * sizeof(uint32_t));
 FUNC_1(VAR_7->ls_recover_submit);
 FUNC_1(VAR_7->ls_recover_result);
 VAR_7->ls_recover_submit = VAR_8;
 VAR_7->ls_recover_result = VAR_9;
 VAR_7->ls_recover_size = VAR_11;
 FUNC_5(&VAR_7->ls_recover_spin);
 return 0;
}
