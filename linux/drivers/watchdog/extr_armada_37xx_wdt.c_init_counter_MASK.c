
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct armada_37xx_watchdog {scalar_t__ reg; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct armada_37xx_watchdog *VAR_5, int VAR_6, u32 VAR_7,
    u32 VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_5->reg + FUNC_0(VAR_6));

 VAR_9 &= ~(VAR_0 | VAR_1 |
   VAR_4);


 VAR_9 |= VAR_7 & VAR_0;


 VAR_9 |= VAR_2 << VAR_3;


 VAR_9 |= VAR_8 & VAR_4;

 FUNC_2(VAR_9, VAR_5->reg + FUNC_0(VAR_6));
}
