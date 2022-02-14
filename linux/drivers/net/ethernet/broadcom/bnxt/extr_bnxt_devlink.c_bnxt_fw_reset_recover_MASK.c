
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_health_reporter {int dummy; } ;
struct bnxt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*) ;
 struct bnxt* FUNC_1 (struct devlink_health_reporter*) ;

__attribute__((used)) static int FUNC_2(struct devlink_health_reporter *VAR_1,
     void *VAR_2)
{
 struct bnxt *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_2)
  return -VAR_0;

 FUNC_0(VAR_3);
 return 0;
}
