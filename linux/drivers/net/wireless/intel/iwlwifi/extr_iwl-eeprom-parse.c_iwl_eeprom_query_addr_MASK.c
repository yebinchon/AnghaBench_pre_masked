
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;


 scalar_t__ FUNC_0 (int) ;
 size_t FUNC_1 (int const*,size_t,size_t) ;

__attribute__((used)) static const u8 *FUNC_2(const u8 *VAR_0, size_t VAR_1,
           u32 VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);

 if (FUNC_0(VAR_3 >= VAR_1))
  return ((void*)0);

 return &VAR_0[VAR_3];
}
