
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline uint32_t
FUNC_1(void *VAR_0, ulong VAR_1)
{
 __le32 *VAR_2 = VAR_0;
 uint64_t VAR_3 = 0;

 VAR_1 /= sizeof(*VAR_2);

 for ( ; VAR_1--; VAR_2++)
  VAR_3 += FUNC_0(*VAR_2);

 VAR_3 = (VAR_3 & 0xffffffff) + (VAR_3 >> 32);

 return ~VAR_3;
}
