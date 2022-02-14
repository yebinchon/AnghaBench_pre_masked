
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_path {TYPE_1__* p_node; } ;
struct ocfs2_extent_block {int h_list; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int * el; struct buffer_head* bh; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct ocfs2_path *VAR_0, int VAR_1,
     struct buffer_head *VAR_2)
{
 struct ocfs2_extent_block *VAR_3 = (struct ocfs2_extent_block *)VAR_2->b_data;







 FUNC_0(VAR_1 == 0);

 VAR_0->p_node[VAR_1].bh = VAR_2;
 VAR_0->p_node[VAR_1].el = &VAR_3->h_list;
}
