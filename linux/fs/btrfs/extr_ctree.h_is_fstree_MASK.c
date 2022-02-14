
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(u64 VAR_2)
{
 if (VAR_2 == VAR_1 ||
     ((s64)VAR_2 >= (s64)VAR_0 &&
       !FUNC_0(VAR_2)))
  return 1;
 return 0;
}
