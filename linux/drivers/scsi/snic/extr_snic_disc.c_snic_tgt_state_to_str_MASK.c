
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char const** VAR_2 ;

const char *
FUNC_0(int VAR_3)
{
 return ((VAR_3 >= VAR_1 && VAR_3 <= VAR_0) ?
  VAR_2[VAR_3] : "UNKNOWN");
}
