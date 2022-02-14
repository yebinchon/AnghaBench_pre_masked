
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(u32 *VAR_0)
{
 *VAR_0 = ((*VAR_0 & 0x0000F800) << 8)
  | ((*VAR_0 & 0x00007E0) << 5)
  | ((*VAR_0 & 0x0000001F) << 3)
  | 0xFF000000;
 FUNC_0();
}
