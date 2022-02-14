
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {struct rb_node* rb_node; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct pnfs_block_extent {scalar_t__ be_f_offset; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ FUNC_0 (struct pnfs_block_extent*) ;
 struct pnfs_block_extent* FUNC_1 (struct rb_node*) ;

__attribute__((used)) static bool
FUNC_2(struct rb_root *VAR_0, sector_t VAR_1,
  struct pnfs_block_extent *VAR_2)
{
 struct rb_node *VAR_3;
 struct pnfs_block_extent *VAR_4;

 VAR_3 = VAR_0->rb_node;
 while (VAR_3) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_1 < VAR_4->be_f_offset)
   VAR_3 = VAR_3->rb_left;
  else if (VAR_1 >= FUNC_0(VAR_4))
   VAR_3 = VAR_3->rb_right;
  else {
   *VAR_2 = *VAR_4;
   return 1;
  }
 }

 return 0;
}
