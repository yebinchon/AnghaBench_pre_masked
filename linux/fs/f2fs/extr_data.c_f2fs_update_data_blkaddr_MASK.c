
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnode_of_data {int data_blkaddr; } ;
typedef int block_t ;


 int FUNC_0 (struct dnode_of_data*) ;
 int FUNC_1 (struct dnode_of_data*) ;

void FUNC_2(struct dnode_of_data *VAR_0, block_t VAR_1)
{
 VAR_0->data_blkaddr = VAR_1;
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}
