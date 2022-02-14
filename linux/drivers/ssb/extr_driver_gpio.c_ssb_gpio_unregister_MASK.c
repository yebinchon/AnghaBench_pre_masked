
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_bus {int gpio; int extif; int chipco; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(struct ssb_bus *VAR_0)
{
 if (FUNC_1(&VAR_0->chipco) ||
     FUNC_2(&VAR_0->extif)) {
  FUNC_0(&VAR_0->gpio);
  return 0;
 }
 return -1;
}
