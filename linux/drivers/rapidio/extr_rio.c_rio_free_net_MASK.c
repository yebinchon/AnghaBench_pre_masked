
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_net {int dev; int (* release ) (struct rio_net*) ;int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rio_net*) ;

void FUNC_6(struct rio_net *VAR_1)
{
 FUNC_3(&VAR_0);
 if (!FUNC_2(&VAR_1->node))
  FUNC_1(&VAR_1->node);
 FUNC_4(&VAR_0);
 if (VAR_1->release)
  VAR_1->release(VAR_1);
 FUNC_0(&VAR_1->dev);
}
