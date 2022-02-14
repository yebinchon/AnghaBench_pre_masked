
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_path {int p_tree_depth; TYPE_1__* p_node; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;
struct buffer_head {int b_blocknr; } ;
typedef int handle_t ;
struct TYPE_2__ {struct buffer_head* bh; struct ocfs2_extent_list* el; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_extent_rec*,struct ocfs2_extent_rec*,struct ocfs2_extent_list*) ;
 int FUNC_2 (struct ocfs2_extent_list*,struct ocfs2_extent_list*,struct ocfs2_extent_list*,int ) ;
 int FUNC_3 (int *,struct buffer_head*) ;
 struct ocfs2_extent_list* FUNC_4 (struct ocfs2_path*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(handle_t *VAR_0,
           struct ocfs2_path *VAR_1,
           struct ocfs2_path *VAR_2,
           int VAR_3)
{
 int VAR_4, VAR_5;
 struct ocfs2_extent_list *VAR_6, *VAR_7, *VAR_8;
 struct ocfs2_extent_rec *VAR_9, *VAR_10;
 struct buffer_head *VAR_11 = VAR_1->p_node[VAR_3].bh;
 VAR_7 = FUNC_4(VAR_1);
 VAR_8 = FUNC_4(VAR_2);
 for(VAR_4 = VAR_1->p_tree_depth - 1; VAR_4 > VAR_3; VAR_4--) {
  FUNC_5(VAR_4);







  VAR_6 = VAR_1->p_node[VAR_4].el;
  VAR_5 = FUNC_0(VAR_7->l_next_free_rec) - 1;
  VAR_9 = &VAR_6->l_recs[VAR_5];

  VAR_6 = VAR_2->p_node[VAR_4].el;
  VAR_10 = &VAR_6->l_recs[0];

  FUNC_1(VAR_9, VAR_10, VAR_8);

  FUNC_3(VAR_0, VAR_1->p_node[VAR_4].bh);
  FUNC_3(VAR_0, VAR_2->p_node[VAR_4].bh);





  VAR_7 = VAR_1->p_node[VAR_4].el;
  VAR_8 = VAR_2->p_node[VAR_4].el;
 }






 VAR_6 = VAR_1->p_node[VAR_3].el;
 VAR_7 = VAR_1->p_node[VAR_3 + 1].el;
 VAR_8 = VAR_2->p_node[VAR_3 + 1].el;

 FUNC_2(VAR_6, VAR_7, VAR_8,
      VAR_1->p_node[VAR_3 + 1].bh->b_blocknr);

 VAR_11 = VAR_1->p_node[VAR_3].bh;

 FUNC_3(VAR_0, VAR_11);
}
