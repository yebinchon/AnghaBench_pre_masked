
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {int dev; } ;
typedef int resource_size_t ;


 int FUNC_0 (struct nd_namespace_common*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

resource_size_t FUNC_3(struct nd_namespace_common *VAR_0)
{
 resource_size_t VAR_1;

 FUNC_1(&VAR_0->dev);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->dev);

 return VAR_1;
}
