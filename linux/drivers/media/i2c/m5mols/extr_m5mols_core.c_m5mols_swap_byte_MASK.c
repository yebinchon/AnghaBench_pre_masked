
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int __be32 ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(u8 *VAR_0, u8 VAR_1)
{
 if (VAR_1 == 1)
  return *VAR_0;
 else if (VAR_1 == 2)
  return FUNC_0(*((__be16 *)VAR_0));
 else
  return FUNC_1(*((__be32 *)VAR_0));
}
