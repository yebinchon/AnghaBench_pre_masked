
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_map_table {unsigned int const scancode; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const unsigned int *VAR_2 = VAR_0;
 const struct rc_map_table *VAR_3 = VAR_1;

 if (*VAR_2 < VAR_3->scancode)
  return -1;
 else if (*VAR_2 > VAR_3->scancode)
  return 1;
 return 0;
}
