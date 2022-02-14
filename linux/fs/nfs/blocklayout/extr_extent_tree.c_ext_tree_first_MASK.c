
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct rb_node {int dummy; } ;
struct pnfs_block_extent {int dummy; } ;


 struct pnfs_block_extent* FUNC_0 (struct rb_node*) ;
 struct rb_node* FUNC_1 (struct rb_root*) ;

__attribute__((used)) static struct pnfs_block_extent *
FUNC_2(struct rb_root *VAR_0)
{
 struct rb_node *VAR_1 = FUNC_1(VAR_0);
 return VAR_1 ? FUNC_0(VAR_1) : ((void*)0);
}
