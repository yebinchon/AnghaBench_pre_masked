
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct armada_37xx_watchdog {scalar_t__ reg; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static u64 FUNC_3(struct armada_37xx_watchdog *VAR_0, int VAR_1)
{
 u64 VAR_2;





 VAR_2 = FUNC_2(VAR_0->reg + FUNC_1(VAR_1));
 VAR_2 |= ((u64)FUNC_2(VAR_0->reg + FUNC_0(VAR_1))) << 32;

 return VAR_2;
}
