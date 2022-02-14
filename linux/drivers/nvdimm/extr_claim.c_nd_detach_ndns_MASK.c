
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct nd_namespace_common**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct device *VAR_0,
  struct nd_namespace_common **VAR_1)
{
 struct nd_namespace_common *VAR_2 = *VAR_1;

 if (!VAR_2)
  return;
 FUNC_1(&VAR_2->dev);
 FUNC_2(&VAR_2->dev);
 FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_2->dev);
 FUNC_4(&VAR_2->dev);
}
