
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bmap {int b_nchildren_per_block; int * b_ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nilfs_bmap*) ;
 int VAR_0 ;

void FUNC_2(struct nilfs_bmap *VAR_1)
{
 VAR_1->b_ops = &VAR_0;
 VAR_1->b_nchildren_per_block =
  FUNC_0(FUNC_1(VAR_1));
}
