
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_per_slot_free_list {int f_first; } ;
struct ocfs2_extent_tree {TYPE_1__* et_dealloc; } ;
struct TYPE_2__ {struct ocfs2_per_slot_free_list* c_first_suballocator; } ;



__attribute__((used)) static int FUNC_0(struct ocfs2_extent_tree *VAR_0)
{
 struct ocfs2_per_slot_free_list *VAR_1 = ((void*)0);

 if (!VAR_0->et_dealloc)
  return 1;

 VAR_1 = VAR_0->et_dealloc->c_first_suballocator;
 if (!VAR_1)
  return 1;

 if (!VAR_1->f_first)
  return 1;

 return 0;
}
