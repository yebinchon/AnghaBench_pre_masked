
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct armada38x_rtc {scalar_t__ regs_soc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct armada38x_rtc *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_8->regs_soc + VAR_0);
 VAR_9 &= ~VAR_4;
 VAR_9 |= 0x3FF << VAR_5;
 VAR_9 &= ~VAR_6;
 VAR_9 |= 0x29 << VAR_7;
 FUNC_1(VAR_9, VAR_8->regs_soc + VAR_0);

 VAR_9 = FUNC_0(VAR_8->regs_soc + VAR_1);
 VAR_9 &= ~VAR_2;
 VAR_9 |= 0x3F << VAR_3;
 FUNC_1(VAR_9, VAR_8->regs_soc + VAR_1);
}
