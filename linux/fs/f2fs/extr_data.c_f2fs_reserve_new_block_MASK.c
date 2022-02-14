
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnode_of_data {unsigned int ofs_in_node; } ;


 int FUNC_0 (struct dnode_of_data*,int) ;

int FUNC_1(struct dnode_of_data *VAR_0)
{
 unsigned int VAR_1 = VAR_0->ofs_in_node;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, 1);
 VAR_0->ofs_in_node = VAR_1;
 return VAR_2;
}
