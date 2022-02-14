
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_extent_tree {struct ocfs2_extent_list* et_root_el; int et_ci; } ;
struct ocfs2_extent_list {scalar_t__ l_tree_depth; scalar_t__ l_next_free_rec; scalar_t__ l_count; TYPE_1__* l_recs; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int e_blkno; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,unsigned long long,...) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,struct buffer_head**) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_extent_tree *VAR_0,
        struct buffer_head **VAR_1)
{
 int VAR_2 = 0, VAR_3;
 u64 VAR_4;
 struct ocfs2_extent_block *VAR_5;
 struct ocfs2_extent_list *VAR_6;
 struct buffer_head *VAR_7 = ((void*)0);
 struct buffer_head *VAR_8 = ((void*)0);

 *VAR_1 = ((void*)0);

 VAR_6 = VAR_0->et_root_el;

 while(FUNC_2(VAR_6->l_tree_depth) > 1) {
  if (FUNC_2(VAR_6->l_next_free_rec) == 0) {
   VAR_2 = FUNC_5(FUNC_6(VAR_0->et_ci),
     "Owner %llu has empty extent list (next_free_rec == 0)\n",
     (unsigned long long)FUNC_7(VAR_0->et_ci));
   goto bail;
  }
  VAR_3 = FUNC_2(VAR_6->l_next_free_rec) - 1;
  VAR_4 = FUNC_3(VAR_6->l_recs[VAR_3].e_blkno);
  if (!VAR_4) {
   VAR_2 = FUNC_5(FUNC_6(VAR_0->et_ci),
     "Owner %llu has extent list where extent # %d has no physical block start\n",
     (unsigned long long)FUNC_7(VAR_0->et_ci), VAR_3);
   goto bail;
  }

  FUNC_0(VAR_7);
  VAR_7 = ((void*)0);

  VAR_2 = FUNC_8(VAR_0->et_ci, VAR_4, &VAR_7);
  if (VAR_2 < 0) {
   FUNC_4(VAR_2);
   goto bail;
  }

  VAR_5 = (struct ocfs2_extent_block *) VAR_7->b_data;
  VAR_6 = &VAR_5->h_list;

  if (FUNC_2(VAR_6->l_next_free_rec) <
      FUNC_2(VAR_6->l_count)) {
   FUNC_0(VAR_8);
   VAR_8 = VAR_7;
   FUNC_1(VAR_8);
  }
 }



 VAR_6 = VAR_0->et_root_el;
 if (!VAR_8 && (VAR_6->l_next_free_rec == VAR_6->l_count))
  VAR_2 = 1;

 *VAR_1 = VAR_8;
bail:
 FUNC_0(VAR_7);

 return VAR_2;
}
