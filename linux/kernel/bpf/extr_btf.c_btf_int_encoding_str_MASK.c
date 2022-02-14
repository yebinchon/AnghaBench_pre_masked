
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static const char *FUNC_0(u8 VAR_3)
{
 if (VAR_3 == 0)
  return "(none)";
 else if (VAR_3 == VAR_2)
  return "SIGNED";
 else if (VAR_3 == VAR_1)
  return "CHAR";
 else if (VAR_3 == VAR_0)
  return "BOOL";
 else
  return "UNKN";
}
