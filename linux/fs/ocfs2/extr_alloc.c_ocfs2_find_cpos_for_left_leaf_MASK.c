
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct ocfs2_path {int p_tree_depth; TYPE_2__* p_node; } ;
struct ocfs2_extent_list {TYPE_4__* l_recs; int l_next_free_rec; } ;
struct TYPE_8__ {int e_cpos; int e_blkno; } ;
struct TYPE_7__ {scalar_t__ b_blocknr; } ;
struct TYPE_6__ {TYPE_1__* bh; struct ocfs2_extent_list* el; } ;
struct TYPE_5__ {scalar_t__ b_blocknr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*,char*,unsigned long long) ;
 scalar_t__ FUNC_5 (struct ocfs2_extent_list*,TYPE_4__*) ;
 TYPE_3__* FUNC_6 (struct ocfs2_path*) ;

int FUNC_7(struct super_block *VAR_1,
      struct ocfs2_path *VAR_2, u32 *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 u64 VAR_7;
 struct ocfs2_extent_list *VAR_8;

 FUNC_0(VAR_2->p_tree_depth == 0);

 *VAR_3 = 0;

 VAR_7 = FUNC_6(VAR_2)->b_blocknr;


 VAR_4 = VAR_2->p_tree_depth - 1;
 while (VAR_4 >= 0) {
  VAR_8 = VAR_2->p_node[VAR_4].el;





  for(VAR_5 = 0; VAR_5 < FUNC_1(VAR_8->l_next_free_rec); VAR_5++) {
   if (FUNC_3(VAR_8->l_recs[VAR_5].e_blkno) == VAR_7) {
    if (VAR_5 == 0) {
     if (VAR_4 == 0) {






      goto out;
     }





     goto next_node;
    }

    *VAR_3 = FUNC_2(VAR_8->l_recs[VAR_5 - 1].e_cpos);
    *VAR_3 = *VAR_3 + FUNC_5(VAR_8,
          &VAR_8->l_recs[VAR_5 - 1]);
    *VAR_3 = *VAR_3 - 1;
    goto out;
   }
  }





  FUNC_4(VAR_1, "Invalid extent tree at extent block %llu\n",
       (unsigned long long)VAR_7);
  VAR_6 = -VAR_0;
  goto out;

next_node:
  VAR_7 = VAR_2->p_node[VAR_4].bh->b_blocknr;
  VAR_4--;
 }

out:
 return VAR_6;
}
