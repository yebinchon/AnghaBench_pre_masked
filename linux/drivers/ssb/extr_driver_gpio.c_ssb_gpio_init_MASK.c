
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_bus {int extif; int chipco; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ssb_bus*) ;
 int FUNC_3 (struct ssb_bus*) ;

int FUNC_4(struct ssb_bus *VAR_0)
{
 if (FUNC_0(&VAR_0->chipco))
  return FUNC_2(VAR_0);
 else if (FUNC_1(&VAR_0->extif))
  return FUNC_3(VAR_0);
 return -1;
}
