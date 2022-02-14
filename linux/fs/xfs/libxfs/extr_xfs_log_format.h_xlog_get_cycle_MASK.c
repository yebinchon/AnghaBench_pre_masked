
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline uint FUNC_1(char *VAR_1)
{
 if (FUNC_0(*(__be32 *)VAR_1) == VAR_0)
  return FUNC_0(*((__be32 *)VAR_1 + 1));
 else
  return FUNC_0(*(__be32 *)VAR_1);
}
