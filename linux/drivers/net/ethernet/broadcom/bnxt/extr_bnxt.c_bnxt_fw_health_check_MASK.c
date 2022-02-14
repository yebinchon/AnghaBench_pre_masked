
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnxt_fw_health {scalar_t__ last_fw_heartbeat; scalar_t__ last_fw_reset_cnt; scalar_t__ tmr_multiplier; scalar_t__ tmr_counter; int enabled; } ;
struct bnxt {int sp_event; int state; struct bnxt_fw_health* fw_health; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bnxt*,int ) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct bnxt *VAR_4)
{
 struct bnxt_fw_health *VAR_5 = VAR_4->fw_health;
 u32 VAR_6;

 if (!VAR_5 || !VAR_5->enabled ||
     FUNC_3(VAR_3, &VAR_4->state))
  return;

 if (VAR_5->tmr_counter) {
  VAR_5->tmr_counter--;
  return;
 }

 VAR_6 = FUNC_0(VAR_4, VAR_1);
 if (VAR_6 == VAR_5->last_fw_heartbeat)
  goto fw_reset;

 VAR_5->last_fw_heartbeat = VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 if (VAR_6 != VAR_5->last_fw_reset_cnt)
  goto fw_reset;

 VAR_5->tmr_counter = VAR_5->tmr_multiplier;
 return;

fw_reset:
 FUNC_2(VAR_0, &VAR_4->sp_event);
 FUNC_1(VAR_4);
}
