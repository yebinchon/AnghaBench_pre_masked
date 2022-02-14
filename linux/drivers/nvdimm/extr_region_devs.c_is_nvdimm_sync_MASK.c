
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int flags; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

bool FUNC_3(struct nd_region *VAR_1)
{
 if (FUNC_1(&VAR_1->dev))
  return 1;

 return FUNC_0(&VAR_1->dev) &&
  !FUNC_2(VAR_0, &VAR_1->flags);
}
