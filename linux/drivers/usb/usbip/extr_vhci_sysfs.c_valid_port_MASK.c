
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(__u32 *VAR_2, __u32 *VAR_3)
{
 if (*VAR_2 >= VAR_1) {
  FUNC_1("pdev %u\n", *VAR_2);
  return 0;
 }
 *VAR_2 = FUNC_0(*VAR_2, VAR_1);

 if (*VAR_3 >= VAR_0) {
  FUNC_1("rhport %u\n", *VAR_3);
  return 0;
 }
 *VAR_3 = FUNC_0(*VAR_3, VAR_0);

 return 1;
}
