
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;





 int FUNC_0 (int) ;

__attribute__((used)) static const char *FUNC_1(u64 VAR_0)
{
 switch (VAR_0) {
 case 129 | 130:
  return "mixed";
 case 129:
  return "metadata";
 case 130:
  return "data";
 case 128:
  return "system";
 default:
  FUNC_0(1);
  return "invalid-combination";
 };
}
