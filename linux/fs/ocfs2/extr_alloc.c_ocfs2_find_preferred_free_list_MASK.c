
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_per_slot_free_list {int f_inode_type; int f_slot; struct ocfs2_per_slot_free_list* f_next_suballocator; } ;
struct ocfs2_cached_dealloc_ctxt {struct ocfs2_per_slot_free_list* c_first_suballocator; } ;



__attribute__((used)) static struct ocfs2_per_slot_free_list *
FUNC_0(int VAR_0,
          int VAR_1,
          int *VAR_2,
          struct ocfs2_cached_dealloc_ctxt *VAR_3)
{
 struct ocfs2_per_slot_free_list *VAR_4 = VAR_3->c_first_suballocator;

 while (VAR_4) {
  if (VAR_4->f_inode_type == VAR_0 && VAR_4->f_slot == VAR_1) {
   *VAR_2 = VAR_4->f_slot;
   return VAR_4;
  }

  VAR_4 = VAR_4->f_next_suballocator;
 }




 VAR_4 = VAR_3->c_first_suballocator;
 *VAR_2 = VAR_4->f_slot;

 return VAR_4;
}
