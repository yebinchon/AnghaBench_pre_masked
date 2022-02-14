
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

const char * FUNC_0(int VAR_4)
{
 if (VAR_4 & VAR_0)
  return "DVO port A";
 else if (VAR_4 & VAR_1)
  return "DVO port B";
 else if (VAR_4 & VAR_2)
  return "DVO port C";
 else if (VAR_4 & VAR_3)
  return "LVDS port";
 else
  return ((void*)0);
}
