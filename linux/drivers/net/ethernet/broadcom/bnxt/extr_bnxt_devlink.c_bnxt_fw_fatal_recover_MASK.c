
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_health_reporter {int dummy; } ;
struct bnxt_fw_reporter_ctx {unsigned long sp_event; } ;
struct bnxt {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;
 struct bnxt* FUNC_2 (struct devlink_health_reporter*) ;

__attribute__((used)) static int FUNC_3(struct devlink_health_reporter *VAR_3,
     void *VAR_4)
{
 struct bnxt *VAR_5 = FUNC_2(VAR_3);
 struct bnxt_fw_reporter_ctx *VAR_6 = VAR_4;
 unsigned long VAR_7;

 if (!VAR_4)
  return -VAR_2;

 VAR_7 = VAR_6->sp_event;
 if (VAR_7 == VAR_1)
  FUNC_1(VAR_5);
 else if (VAR_7 == VAR_0)
  FUNC_0(VAR_5);

 return 0;
}
