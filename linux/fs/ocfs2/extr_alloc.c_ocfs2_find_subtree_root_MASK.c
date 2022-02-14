
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_path {int p_tree_depth; TYPE_1__* p_node; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct TYPE_6__ {scalar_t__ b_blocknr; } ;
struct TYPE_5__ {scalar_t__ b_blocknr; } ;
struct TYPE_4__ {TYPE_2__* bh; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,unsigned long long,int,int,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct ocfs2_path*) ;
 scalar_t__ FUNC_4 (struct ocfs2_path*) ;

int FUNC_5(struct ocfs2_extent_tree *VAR_0,
       struct ocfs2_path *VAR_1,
       struct ocfs2_path *VAR_2)
{
 int VAR_3 = 0;




 FUNC_0(FUNC_4(VAR_1) != FUNC_4(VAR_2));

 do {
  VAR_3++;




  FUNC_1(VAR_3 > VAR_1->p_tree_depth,
    "Owner %llu, left depth %u, right depth %u\n"
    "left leaf blk %llu, right leaf blk %llu\n",
    (unsigned long long)FUNC_2(VAR_0->et_ci),
    VAR_1->p_tree_depth, VAR_2->p_tree_depth,
    (unsigned long long)FUNC_3(VAR_1)->b_blocknr,
    (unsigned long long)FUNC_3(VAR_2)->b_blocknr);
 } while (VAR_1->p_node[VAR_3].bh->b_blocknr ==
   VAR_2->p_node[VAR_3].bh->b_blocknr);

 return VAR_3 - 1;
}
