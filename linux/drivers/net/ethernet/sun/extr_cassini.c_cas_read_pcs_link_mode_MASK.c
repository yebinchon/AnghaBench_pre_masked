
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cas {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cas *VAR_4, int *VAR_5, int *VAR_6,
       int *VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_4->regs + VAR_3);
 *VAR_5 = (VAR_8 & VAR_1) ? 1 : 0;
 *VAR_7 = (VAR_8 & VAR_2) ? 0x01 : 0x00;
 if (VAR_8 & VAR_0)
  *VAR_7 |= 0x10;
 *VAR_6 = 1000;
}
