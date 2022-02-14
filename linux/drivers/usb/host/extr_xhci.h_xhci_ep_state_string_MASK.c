
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
__attribute__((used)) static inline const char *FUNC_0(u8 VAR_0)
{
 switch (VAR_0) {
 case 132:
  return "disabled";
 case 129:
  return "running";
 case 130:
  return "halted";
 case 128:
  return "stopped";
 case 131:
  return "error";
 default:
  return "INVALID";
 }
}
