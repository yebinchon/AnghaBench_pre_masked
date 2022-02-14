
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_per_slot_free_list {int f_inode_type; int f_slot; struct ocfs2_per_slot_free_list* f_next_suballocator; int * f_first; } ;
struct ocfs2_cached_dealloc_ctxt {struct ocfs2_per_slot_free_list* c_first_suballocator; } ;


 int VAR_0 ;
 struct ocfs2_per_slot_free_list* FUNC_0 (int,int ) ;

__attribute__((used)) static struct ocfs2_per_slot_free_list *
FUNC_1(int VAR_1,
         int VAR_2,
         struct ocfs2_cached_dealloc_ctxt *VAR_3)
{
 struct ocfs2_per_slot_free_list *VAR_4 = VAR_3->c_first_suballocator;

 while (VAR_4) {
  if (VAR_4->f_inode_type == VAR_1 && VAR_4->f_slot == VAR_2)
   return VAR_4;

  VAR_4 = VAR_4->f_next_suballocator;
 }

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (VAR_4) {
  VAR_4->f_inode_type = VAR_1;
  VAR_4->f_slot = VAR_2;
  VAR_4->f_first = ((void*)0);
  VAR_4->f_next_suballocator = VAR_3->c_first_suballocator;

  VAR_3->c_first_suballocator = VAR_4;
 }
 return VAR_4;
}
