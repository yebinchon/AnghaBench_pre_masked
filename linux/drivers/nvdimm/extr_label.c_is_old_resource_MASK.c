
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct resource *VAR_1, struct resource **VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_1->flags & VAR_0)
  return 0;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (VAR_1 == VAR_2[VAR_4])
   return 1;
 return 0;
}
