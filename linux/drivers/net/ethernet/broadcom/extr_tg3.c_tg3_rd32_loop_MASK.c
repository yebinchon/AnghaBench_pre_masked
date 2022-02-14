
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tg3 {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct tg3 *VAR_0, u32 *VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4;

 VAR_1 = (u32 *)((u8 *)VAR_1 + VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += sizeof(u32))
  *VAR_1++ = FUNC_0(VAR_2 + VAR_4);
}
