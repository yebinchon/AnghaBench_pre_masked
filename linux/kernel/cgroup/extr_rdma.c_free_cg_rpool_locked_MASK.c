
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdmacg_resource_pool {int dev_node; int cg_node; } ;


 int FUNC_0 (struct rdmacg_resource_pool*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct rdmacg_resource_pool *VAR_1)
{
 FUNC_2(&VAR_0);

 FUNC_1(&VAR_1->cg_node);
 FUNC_1(&VAR_1->dev_node);
 FUNC_0(VAR_1);
}
