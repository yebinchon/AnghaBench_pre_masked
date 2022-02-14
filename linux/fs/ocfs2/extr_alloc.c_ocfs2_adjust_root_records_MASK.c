
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_extent_list {TYPE_1__* l_recs; int l_next_free_rec; int l_tree_depth; } ;
struct TYPE_3__ {int e_blkno; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,struct ocfs2_extent_list*) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_extent_list *VAR_0,
          struct ocfs2_extent_list *VAR_1,
          struct ocfs2_extent_list *VAR_2,
          u64 VAR_3)
{
 int VAR_4;

 FUNC_0(FUNC_1(VAR_0->l_tree_depth) <=
        FUNC_1(VAR_1->l_tree_depth));

 for(VAR_4 = 0; VAR_4 < FUNC_1(VAR_0->l_next_free_rec) - 1; VAR_4++) {
  if (FUNC_2(VAR_0->l_recs[VAR_4].e_blkno) == VAR_3)
   break;
 }





 FUNC_0(VAR_4 >= (FUNC_1(VAR_0->l_next_free_rec) - 1));

 FUNC_3(&VAR_0->l_recs[VAR_4],
          &VAR_0->l_recs[VAR_4 + 1], VAR_2);
}
