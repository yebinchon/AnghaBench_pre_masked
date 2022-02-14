
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(__u32 VAR_1, int *VAR_2, __u32 VAR_3)
{
 if (VAR_1 == VAR_0)
  return 1;

 if (VAR_1 == 0 && VAR_3 == 0) {
  (*VAR_2)++;
  return 0;
 }
 if (VAR_1 != 0 && (VAR_1 + *VAR_2) == VAR_3) {
  (*VAR_2)++;
  return 0;
 }
 return 1;
}
