
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static const char *FUNC_0(int VAR_7)
{
 if (VAR_7 == VAR_5)
  return "no error";
 else if (VAR_7 == VAR_2)
  return "invalid command";
 else if (VAR_7 == VAR_3)
  return "invalid parameter";
 else if (VAR_7 == VAR_1)
  return "command timeout";
 else if (VAR_7 == VAR_0)
  return "command locked";
 else if (VAR_7 == VAR_4)
  return "invalid vr id";
 else if (VAR_7 == VAR_6)
  return "vr error";
 else
  return "unknown error";
}
