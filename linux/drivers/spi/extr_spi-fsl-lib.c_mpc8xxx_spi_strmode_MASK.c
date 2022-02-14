
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

const char *FUNC_0(unsigned int VAR_4)
{
 if (VAR_4 & VAR_3) {
  return "QE CPU";
 } else if (VAR_4 & VAR_1) {
  if (VAR_4 & VAR_2)
   return "QE";
  else if (VAR_4 & VAR_0)
   return "CPM2";
  else
   return "CPM1";
 }
 return "CPU";
}
