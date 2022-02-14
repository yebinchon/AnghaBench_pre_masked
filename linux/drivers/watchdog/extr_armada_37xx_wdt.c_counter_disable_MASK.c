
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct armada_37xx_watchdog {scalar_t__ reg; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct armada_37xx_watchdog *VAR_1, int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_1->reg + FUNC_0(VAR_2));
 VAR_3 &= ~VAR_0;
 FUNC_2(VAR_3, VAR_1->reg + FUNC_0(VAR_2));
}
