
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ips_driver {int mcp_temp_limit; scalar_t__ mcp_avg_temp; scalar_t__ cpu_avg_power; scalar_t__ mch_avg_power; scalar_t__ mcp_power_limit; int turbo_status_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct ips_driver *VAR_0)
{
 unsigned long VAR_1;
 bool VAR_2 = 0;
 u32 VAR_3;
 u32 VAR_4;

 FUNC_0(&VAR_0->turbo_status_lock, VAR_1);

 VAR_3 = VAR_0->mcp_temp_limit * 100;
 if (VAR_0->mcp_avg_temp > VAR_3)
  VAR_2 = 1;

 VAR_4 = VAR_0->cpu_avg_power + VAR_0->mch_avg_power;
 if (VAR_4 > VAR_0->mcp_power_limit)
  VAR_2 = 1;

 FUNC_1(&VAR_0->turbo_status_lock, VAR_1);

 return VAR_2;
}
