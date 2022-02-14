
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

const char *FUNC_0(unsigned int VAR_3)
{
 if (VAR_3 == VAR_1)
  return "Half";
 if (VAR_3 == VAR_0)
  return "Full";
 if (VAR_3 == VAR_2)
  return "Unknown";
 return "Unsupported (update phy-core.c)";
}
