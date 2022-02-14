
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_khandle {scalar_t__* u; } ;



__attribute__((used)) static inline int FUNC_0(const struct orangefs_khandle *VAR_0,
       const struct orangefs_khandle *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 15; VAR_2 >= 0; VAR_2--) {
  if (VAR_0->u[VAR_2] > VAR_1->u[VAR_2])
   return 1;
  if (VAR_0->u[VAR_2] < VAR_1->u[VAR_2])
   return -1;
 }

 return 0;
}
