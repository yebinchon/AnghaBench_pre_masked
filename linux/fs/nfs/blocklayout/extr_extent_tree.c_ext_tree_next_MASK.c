
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct pnfs_block_extent {int be_node; } ;


 struct pnfs_block_extent* FUNC_0 (struct rb_node*) ;
 struct rb_node* FUNC_1 (int *) ;

__attribute__((used)) static struct pnfs_block_extent *
FUNC_2(struct pnfs_block_extent *VAR_0)
{
 struct rb_node *VAR_1 = FUNC_1(&VAR_0->be_node);
 return VAR_1 ? FUNC_0(VAR_1) : ((void*)0);
}
