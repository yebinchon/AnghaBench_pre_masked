
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnxt_fw_health {int master_func_wait_dsecs; int flags; int normal_func_wait_dsecs; int post_reset_max_wait_dsecs; int post_reset_wait_dsecs; scalar_t__ master; } ;
struct bnxt {int fw_reset_max_dsecs; int fw_reset_min_dsecs; int fw_reset_state; scalar_t__ fw_reset_timestamp; int state; struct bnxt_fw_health* fw_health; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct bnxt *VAR_7)
{
 struct bnxt_fw_health *VAR_8 = VAR_7->fw_health;
 u32 VAR_9;

 if (!FUNC_3(VAR_3, &VAR_7->state) ||
     FUNC_3(VAR_2, &VAR_7->state))
  return;

 FUNC_2(VAR_2, &VAR_7->state);
 FUNC_0(VAR_7);
 VAR_9 = VAR_8->master_func_wait_dsecs;
 if (VAR_8->master) {
  if (VAR_8->flags & VAR_4)
   VAR_9 = 0;
  VAR_7->fw_reset_state = VAR_1;
 } else {
  VAR_7->fw_reset_timestamp = VAR_6 + VAR_9 * VAR_5 / 10;
  VAR_9 = VAR_8->normal_func_wait_dsecs;
  VAR_7->fw_reset_state = VAR_0;
 }

 VAR_7->fw_reset_min_dsecs = VAR_8->post_reset_wait_dsecs;
 VAR_7->fw_reset_max_dsecs = VAR_8->post_reset_max_wait_dsecs;
 FUNC_1(VAR_7, VAR_9 * VAR_5 / 10);
}
