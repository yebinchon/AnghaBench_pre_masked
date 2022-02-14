
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static inline int FUNC_1(u8 VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return 1;
 if (VAR_2 == VAR_0)
  return VAR_1;
 VAR_1 *= VAR_0;
 return FUNC_0(15U, VAR_1 / VAR_2 + (VAR_1 % VAR_2 >= (VAR_0 >> 1)));
}
