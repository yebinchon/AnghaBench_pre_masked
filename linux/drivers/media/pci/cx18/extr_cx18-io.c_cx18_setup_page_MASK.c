
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx18 {int dummy; } ;


 int FUNC_0 (struct cx18*,int) ;
 int FUNC_1 (struct cx18*,int,int) ;

void FUNC_2(struct cx18 *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 VAR_2 = FUNC_0(VAR_0, 0xD000F8);
 VAR_2 = (VAR_2 & ~0x1f00) | ((VAR_1 >> 17) & 0x1f00);
 FUNC_1(VAR_0, VAR_2, 0xD000F8);
}
