
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const** VAR_1 ;

const char *FUNC_0(int VAR_2)
{
 if (VAR_2 >= 0 && VAR_2 < VAR_0 && VAR_1[VAR_2])
  return VAR_1[VAR_2];
 else
  return "unknown";
}
