
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int parent; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct device_node *FUNC_3(const struct device_node *VAR_1)
{
 struct device_node *VAR_2;
 unsigned long VAR_3;

 if (!VAR_1)
  return ((void*)0);

 FUNC_1(&VAR_0, VAR_3);
 VAR_2 = FUNC_0(VAR_1->parent);
 FUNC_2(&VAR_0, VAR_3);
 return VAR_2;
}
