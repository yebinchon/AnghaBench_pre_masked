
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_fw_reporter_ctx {unsigned long sp_event; } ;
struct bnxt_fw_health {int fw_fatal_reporter; int fw_reset_reporter; } ;
struct bnxt {int state; struct bnxt_fw_health* fw_health; } ;




 int VAR_0 ;
 int FUNC_0 (int ,char*,struct bnxt_fw_reporter_ctx*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct bnxt *VAR_1, unsigned long VAR_2)
{
 struct bnxt_fw_health *VAR_3 = VAR_1->fw_health;
 struct bnxt_fw_reporter_ctx VAR_4;

 if (!VAR_3)
  return;

 VAR_4.sp_event = VAR_2;
 switch (VAR_2) {
 case 128:
  if (FUNC_1(VAR_0, &VAR_1->state)) {
   if (!VAR_3->fw_fatal_reporter)
    return;

   FUNC_0(VAR_3->fw_fatal_reporter,
           "FW fatal async event received",
           &VAR_4);
   return;
  }
  if (!VAR_3->fw_reset_reporter)
   return;

  FUNC_0(VAR_3->fw_reset_reporter,
          "FW non-fatal reset event received",
          &VAR_4);
  return;

 case 129:
  if (!VAR_3->fw_fatal_reporter)
   return;

  FUNC_0(VAR_3->fw_fatal_reporter,
          "FW fatal error reported",
          &VAR_4);
  return;
 }
}
