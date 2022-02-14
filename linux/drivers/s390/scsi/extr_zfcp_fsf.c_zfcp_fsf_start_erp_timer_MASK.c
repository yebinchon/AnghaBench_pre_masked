
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; int function; } ;
struct zfcp_fsf_req {TYPE_1__ timer; int erp_action; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct zfcp_fsf_req *VAR_3)
{
 FUNC_0(!VAR_3->erp_action);
 VAR_3->timer.function = VAR_2;
 VAR_3->timer.expires = VAR_1 + 30 * VAR_0;
 FUNC_1(&VAR_3->timer);
}
