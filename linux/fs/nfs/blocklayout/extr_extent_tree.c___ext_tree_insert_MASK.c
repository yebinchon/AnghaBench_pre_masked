
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {struct rb_node* rb_node; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct pnfs_block_extent {scalar_t__ be_f_offset; scalar_t__ be_state; int be_device; int be_node; scalar_t__ be_length; int be_v_offset; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct pnfs_block_extent*,struct pnfs_block_extent*) ;
 scalar_t__ FUNC_2 (struct pnfs_block_extent*) ;
 struct pnfs_block_extent* FUNC_3 (struct rb_node*) ;
 struct pnfs_block_extent* FUNC_4 (struct rb_root*,struct pnfs_block_extent*) ;
 struct pnfs_block_extent* FUNC_5 (struct rb_root*,struct pnfs_block_extent*) ;
 int FUNC_6 (struct pnfs_block_extent*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,struct rb_root*) ;
 int FUNC_9 (int *,struct rb_node*,struct rb_node**) ;

__attribute__((used)) static void
FUNC_10(struct rb_root *VAR_1,
  struct pnfs_block_extent *VAR_2, bool VAR_3)
{
 struct rb_node **VAR_4 = &VAR_1->rb_node, *VAR_5 = ((void*)0);
 struct pnfs_block_extent *VAR_6;

 while (*VAR_4) {
  VAR_5 = *VAR_4;
  VAR_6 = FUNC_3(VAR_5);

  if (VAR_2->be_f_offset < VAR_6->be_f_offset) {
   if (VAR_3 && FUNC_1(VAR_2, VAR_6)) {
    VAR_6->be_f_offset = VAR_2->be_f_offset;
    if (VAR_6->be_state != VAR_0)
     VAR_6->be_v_offset = VAR_2->be_v_offset;
    VAR_6->be_length += VAR_2->be_length;
    VAR_6 = FUNC_4(VAR_1, VAR_6);
    goto free_new;
   }
   VAR_4 = &(*VAR_4)->rb_left;
  } else if (VAR_2->be_f_offset >= FUNC_2(VAR_6)) {
   if (VAR_3 && FUNC_1(VAR_6, VAR_2)) {
    VAR_6->be_length += VAR_2->be_length;
    VAR_6 = FUNC_5(VAR_1, VAR_6);
    goto free_new;
   }
   VAR_4 = &(*VAR_4)->rb_right;
  } else {
   FUNC_0();
  }
 }

 FUNC_9(&VAR_2->be_node, VAR_5, VAR_4);
 FUNC_8(&VAR_2->be_node, VAR_1);
 return;
free_new:
 FUNC_7(VAR_2->be_device);
 FUNC_6(VAR_2);
}
