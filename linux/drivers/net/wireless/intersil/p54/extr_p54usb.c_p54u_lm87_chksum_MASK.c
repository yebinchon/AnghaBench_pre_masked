
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static __le32 FUNC_2(const __le32 *VAR_0, size_t VAR_1)
{
 u32 VAR_2 = 0;

 VAR_1 >>= 2;
 while (VAR_1--) {
  VAR_2 ^= FUNC_1(*VAR_0++);
  VAR_2 = (VAR_2 >> 5) ^ (VAR_2 << 3);
 }

 return FUNC_0(VAR_2);
}
