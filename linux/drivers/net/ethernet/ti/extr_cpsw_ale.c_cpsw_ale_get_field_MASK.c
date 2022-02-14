
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(u32 *VAR_0, u32 VAR_1, u32 VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_1 / 32;
 VAR_1 -= VAR_3 * 32;
 VAR_3 = 2 - VAR_3;
 return (VAR_0[VAR_3] >> VAR_1) & FUNC_0(VAR_2);
}
