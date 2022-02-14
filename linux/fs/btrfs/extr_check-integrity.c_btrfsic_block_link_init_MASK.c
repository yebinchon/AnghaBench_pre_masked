
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfsic_block_link {int ref_cnt; int * block_ref_from; int * block_ref_to; int collision_resolving_node; int node_ref_from; int node_ref_to; int magic_num; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct btrfsic_block_link *VAR_1)
{
 VAR_1->magic_num = VAR_0;
 VAR_1->ref_cnt = 1;
 FUNC_0(&VAR_1->node_ref_to);
 FUNC_0(&VAR_1->node_ref_from);
 FUNC_0(&VAR_1->collision_resolving_node);
 VAR_1->block_ref_to = ((void*)0);
 VAR_1->block_ref_from = ((void*)0);
}
