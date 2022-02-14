
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int comptag; } ;
union rio_pw_msg {TYPE_1__ em; } ;
struct rio_pw_filter {int mask; int low; int high; } ;



__attribute__((used)) static int FUNC_0(union rio_pw_msg *VAR_0,
         struct rio_pw_filter *VAR_1)
{
 if ((VAR_0->em.comptag & VAR_1->mask) < VAR_1->low ||
  (VAR_0->em.comptag & VAR_1->mask) > VAR_1->high)
  return 0;
 return 1;
}
