
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_cee_lldp_cfg {void* enabled_system_cap; void* time_to_live; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static void
FUNC_1(struct bfa_cee_lldp_cfg *VAR_0)
{
 VAR_0->time_to_live =
   FUNC_0(VAR_0->time_to_live);
 VAR_0->enabled_system_cap =
   FUNC_0(VAR_0->enabled_system_cap);
}
