
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long interval; int dw; } ;
struct mlxsw_sp_acl {TYPE_1__ rule_activity_update; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp_acl *VAR_0)
{
 unsigned long VAR_1 = VAR_0->rule_activity_update.interval;

 FUNC_0(&VAR_0->rule_activity_update.dw,
          FUNC_1(VAR_1));
}
