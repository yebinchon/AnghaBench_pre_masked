
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_fw_health {scalar_t__ fw_fatal_reporter; scalar_t__ fw_reset_reporter; scalar_t__ fw_reporter; } ;
struct bnxt {struct bnxt_fw_health* fw_health; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_0)
{
 struct bnxt_fw_health *VAR_1 = VAR_0->fw_health;

 if (!VAR_1)
  return;

 if (VAR_1->fw_reporter)
  FUNC_0(VAR_1->fw_reporter);

 if (VAR_1->fw_reset_reporter)
  FUNC_0(VAR_1->fw_reset_reporter);

 if (VAR_1->fw_fatal_reporter)
  FUNC_0(VAR_1->fw_fatal_reporter);
}
