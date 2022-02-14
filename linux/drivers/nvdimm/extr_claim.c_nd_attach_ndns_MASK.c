
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct nd_namespace_common*,struct nd_namespace_common**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct device *VAR_0, struct nd_namespace_common *VAR_1,
  struct nd_namespace_common **VAR_2)
{
 bool VAR_3;

 FUNC_1(&VAR_1->dev);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_1->dev);
 return VAR_3;
}
