
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnode_of_data {int node_changed; int node_page; } ;


 int VAR_0 ;
 int FUNC_0 (struct dnode_of_data*) ;
 int FUNC_1 (int ,int ,int,int) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct dnode_of_data *VAR_1)
{
 FUNC_1(VAR_1->node_page, VAR_0, 1, 1);
 FUNC_0(VAR_1);
 if (FUNC_2(VAR_1->node_page))
  VAR_1->node_changed = 1;
}
