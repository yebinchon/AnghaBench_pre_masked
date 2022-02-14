
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ips_driver {int cpu_turbo_enabled; int gpu_turbo_enabled; void* mcp_power_limit; void* mcp_temp_limit; void* mch_power_limit; void* core_power_limit; scalar_t__ gpu_busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ips_driver*) ;

__attribute__((used)) static void FUNC_3(struct ips_driver *VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_2);

 VAR_7->cpu_turbo_enabled = !(VAR_8 & VAR_1);




 VAR_7->cpu_turbo_enabled = 0;

 if (VAR_7->gpu_busy)
  VAR_7->gpu_turbo_enabled = !(VAR_8 & VAR_0);

 VAR_7->core_power_limit = FUNC_1(VAR_4);
 VAR_7->mch_power_limit = FUNC_1(VAR_3);
 VAR_7->mcp_temp_limit = FUNC_1(VAR_6);
 VAR_7->mcp_power_limit = FUNC_1(VAR_5);

 FUNC_2(VAR_7);

}
