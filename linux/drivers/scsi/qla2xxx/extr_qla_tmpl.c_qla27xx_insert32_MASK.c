
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef scalar_t__ ulong ;
typedef int uint32_t ;
typedef int __le32 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(uint32_t VAR_0, void *VAR_1, ulong *VAR_2)
{
 if (VAR_1) {
  VAR_1 += *VAR_2;
  *(__le32 *)VAR_1 = FUNC_0(VAR_0);
 }
 *VAR_2 += sizeof(VAR_0);
}
