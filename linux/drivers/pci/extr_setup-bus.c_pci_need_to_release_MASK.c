
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int flags; TYPE_1__* parent; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(unsigned long VAR_3, struct resource *VAR_4)
{
 if (VAR_4->flags & VAR_0)
  return !!(VAR_3 & VAR_0);


 if (VAR_4->flags & VAR_2) {
  if (VAR_3 & VAR_2)
   return 1;

  else if ((VAR_3 & VAR_1) &&
    !(VAR_4->parent->flags & VAR_2))
   return 1;
  else
   return 0;
 }

 if (VAR_4->flags & VAR_1)
  return !!(VAR_3 & VAR_1);

 return 0;
}
