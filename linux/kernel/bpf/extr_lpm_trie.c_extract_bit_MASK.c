
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline int FUNC_0(const u8 *VAR_0, size_t VAR_1)
{
 return !!(VAR_0[VAR_1 / 8] & (1 << (7 - (VAR_1 % 8))));
}
