
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_fw_health {int * fw_fatal_reporter; int * fw_reset_reporter; int * fw_reporter; } ;
struct bnxt {int dev; int dl; struct bnxt_fw_health* fw_health; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int ,int *,int ,int,struct bnxt*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct bnxt *VAR_3)
{
 struct bnxt_fw_health *VAR_4 = VAR_3->fw_health;

 if (!VAR_4)
  return;

 VAR_4->fw_reporter =
  FUNC_2(VAR_3->dl, &VAR_1,
            0, 0, VAR_3);
 if (FUNC_0(VAR_4->fw_reporter)) {
  FUNC_3(VAR_3->dev, "Failed to create FW health reporter, rc = %ld\n",
       FUNC_1(VAR_4->fw_reporter));
  VAR_4->fw_reporter = ((void*)0);
 }

 VAR_4->fw_reset_reporter =
  FUNC_2(VAR_3->dl,
            &VAR_2,
            0, 1, VAR_3);
 if (FUNC_0(VAR_4->fw_reset_reporter)) {
  FUNC_3(VAR_3->dev, "Failed to create FW fatal health reporter, rc = %ld\n",
       FUNC_1(VAR_4->fw_reset_reporter));
  VAR_4->fw_reset_reporter = ((void*)0);
 }

 VAR_4->fw_fatal_reporter =
  FUNC_2(VAR_3->dl,
            &VAR_0,
            0, 1, VAR_3);
 if (FUNC_0(VAR_4->fw_fatal_reporter)) {
  FUNC_3(VAR_3->dev, "Failed to create FW fatal health reporter, rc = %ld\n",
       FUNC_1(VAR_4->fw_fatal_reporter));
  VAR_4->fw_fatal_reporter = ((void*)0);
 }
}
