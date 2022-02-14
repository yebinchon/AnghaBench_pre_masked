
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnxt_fw_health {scalar_t__ last_fw_heartbeat; scalar_t__ last_fw_reset_cnt; } ;
struct bnxt {struct bnxt_fw_health* fw_health; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnxt*,int ) ;

__attribute__((used)) static bool FUNC_1(struct bnxt *VAR_2)
{
 struct bnxt_fw_health *VAR_3 = VAR_2->fw_health;
 bool VAR_4 = 0, VAR_5 = 0;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_0);
 if (VAR_6 == VAR_3->last_fw_heartbeat)
  VAR_4 = 1;

 VAR_6 = FUNC_0(VAR_2, VAR_1);
 if (VAR_6 != VAR_3->last_fw_reset_cnt)
  VAR_5 = 1;

 if (!VAR_4 && VAR_5)
  return 1;

 return 0;
}
