
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(void *VAR_4, u64 VAR_5)
{
 if (VAR_5 < VAR_1)
  return -VAR_2;

 if (VAR_5 > VAR_0)
  return -VAR_2;

 *(u64 *)VAR_4 = VAR_5;
 VAR_3 = VAR_5;

 FUNC_0(VAR_3);

 return 0;
}
