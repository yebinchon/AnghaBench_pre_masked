
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(__be16 VAR_3)
{
 if (VAR_3 & VAR_0)
  return 0;
 if (VAR_3 & (VAR_1 | VAR_2))
  return 1;
 return 0;
}
