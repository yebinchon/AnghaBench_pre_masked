
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct devlink_health_reporter {int dummy; } ;
struct devlink_fmsg {int dummy; } ;
struct bnxt_fw_health {int dummy; } ;
struct bnxt {int state; struct bnxt_fw_health* fw_health; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnxt*,int ) ;
 int FUNC_1 (struct devlink_fmsg*,char*,char*) ;
 int FUNC_2 (struct devlink_fmsg*,char*,int) ;
 struct bnxt* FUNC_3 (struct devlink_health_reporter*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct devlink_health_reporter *VAR_4,
         struct devlink_fmsg *VAR_5)
{
 struct bnxt *VAR_6 = FUNC_3(VAR_4);
 struct bnxt_fw_health *VAR_7 = VAR_6->fw_health;
 u32 VAR_8, VAR_9;
 int VAR_10;

 if (!VAR_7 || FUNC_4(VAR_3, &VAR_6->state))
  return 0;

 VAR_8 = FUNC_0(VAR_6, VAR_0);
 VAR_9 = VAR_8 & 0xffff;

 if (VAR_9 < VAR_2) {
  VAR_10 = FUNC_1(VAR_5, "Description",
        "Not yet completed initialization");
  if (VAR_10)
   return VAR_10;
 } else if (VAR_9 > VAR_2) {
  VAR_10 = FUNC_1(VAR_5, "Description",
        "Encountered fatal error and cannot recover");
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_8 >> 16) {
  VAR_10 = FUNC_2(VAR_5, "Error code", VAR_8 >> 16);
  if (VAR_10)
   return VAR_10;
 }

 VAR_8 = FUNC_0(VAR_6, VAR_1);
 VAR_10 = FUNC_2(VAR_5, "Reset count", VAR_8);
 if (VAR_10)
  return VAR_10;

 return 0;
}
