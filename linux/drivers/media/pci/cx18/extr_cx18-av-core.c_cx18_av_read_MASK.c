
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cx18 {int dummy; } ;


 int FUNC_0 (struct cx18*,int) ;

u8 FUNC_1(struct cx18 *VAR_0, u16 VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0, 0xc40000 + (VAR_1 & ~3));
 int VAR_3 = (VAR_1 & 3) * 8;

 return (VAR_2 >> VAR_3) & 0xff;
}
