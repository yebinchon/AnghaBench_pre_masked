
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;


 int FUNC_0 (int ,size_t*,int) ;

__attribute__((used)) static inline u32 FUNC_1(u32 VAR_0, size_t VAR_1)
{

 while (VAR_1 != 0) {
  u8 VAR_2 = VAR_1 & 0xff;

  VAR_0 = FUNC_0(VAR_0, &VAR_2, 1);
  VAR_1 >>= 8;
 }

 return ~VAR_0;
}
