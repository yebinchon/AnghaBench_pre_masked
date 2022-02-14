
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct armada_37xx_watchdog {scalar_t__ reg; int cpu_misc; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static bool FUNC_3(struct armada_37xx_watchdog *VAR_5)
{
 u32 VAR_6;

 FUNC_2(VAR_5->cpu_misc, VAR_2, &VAR_6);
 if ((VAR_6 & VAR_3) != VAR_4)
  return 0;

 VAR_6 = FUNC_1(VAR_5->reg + FUNC_0(VAR_1));
 return !!(VAR_6 & VAR_0);
}
