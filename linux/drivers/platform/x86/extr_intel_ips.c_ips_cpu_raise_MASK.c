
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct ips_driver {int core_power_limit; int cpu_turbo_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct ips_driver *VAR_5)
{
 u64 VAR_6;
 u16 VAR_7, VAR_8;

 if (!VAR_5->cpu_turbo_enabled)
  return;

 FUNC_0(VAR_1, VAR_6);

 VAR_7 = VAR_6 & VAR_3;
 VAR_8 = VAR_7 + 8;


 if (((VAR_8 * 10) / 8) > VAR_5->core_power_limit)
  VAR_8 = VAR_7;

 FUNC_1(VAR_0, (VAR_8 * 10) / 8);

 VAR_6 |= VAR_2 | VAR_4;
 FUNC_2(VAR_1, VAR_6);

 VAR_6 &= ~VAR_3;
 VAR_6 |= VAR_8;

 FUNC_2(VAR_1, VAR_6);
}
