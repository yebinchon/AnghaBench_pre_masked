
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct interval {scalar_t__ last; scalar_t__ first; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 uint32_t VAR_2 = *(uint32_t *)VAR_0;
 struct interval VAR_3 = *(struct interval *) VAR_1;

 if (VAR_2 > VAR_3.last)
  return 1;
 else if (VAR_2 < VAR_3.first)
  return -1;
 return 0;
}
