
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct armada38x_rtc {scalar_t__ regs_soc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct armada38x_rtc *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5->regs_soc + VAR_0);
 VAR_6 &= ~VAR_1;
 VAR_6 |= 0x3FF << VAR_2;
 VAR_6 &= ~VAR_3;
 VAR_6 |= 0x1F << VAR_4;
 FUNC_1(VAR_6, VAR_5->regs_soc + VAR_0);
}
