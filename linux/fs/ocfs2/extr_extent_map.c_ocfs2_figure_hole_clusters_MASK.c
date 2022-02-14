
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_extent_list {TYPE_1__* l_recs; int l_next_free_rec; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; int h_next_leaf_blk; } ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int e_cpos; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned long long FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_caching_info*,unsigned long long,struct buffer_head**) ;
 int FUNC_6 (struct ocfs2_extent_list*,scalar_t__) ;

int FUNC_7(struct ocfs2_caching_info *VAR_1,
          struct ocfs2_extent_list *VAR_2,
          struct buffer_head *VAR_3,
          u32 VAR_4,
          u32 *VAR_5)
{
 int VAR_6, VAR_7;
 struct buffer_head *VAR_8 = ((void*)0);
 struct ocfs2_extent_block *VAR_9, *VAR_10;

 VAR_7 = FUNC_6(VAR_2, VAR_4);

 if (VAR_7 == FUNC_1(VAR_2->l_next_free_rec) && VAR_3) {
  VAR_9 = (struct ocfs2_extent_block *)VAR_3->b_data;





  if (FUNC_3(VAR_9->h_next_leaf_blk) == 0ULL)
   goto no_more_extents;

  VAR_6 = FUNC_5(VAR_1,
           FUNC_3(VAR_9->h_next_leaf_blk),
           &VAR_8);
  if (VAR_6) {
   FUNC_4(VAR_6);
   goto out;
  }

  VAR_10 = (struct ocfs2_extent_block *)VAR_8->b_data;
  VAR_2 = &VAR_10->h_list;
  VAR_7 = FUNC_6(VAR_2, VAR_4);
 }

no_more_extents:
 if (VAR_7 == FUNC_1(VAR_2->l_next_free_rec)) {





  *VAR_5 = VAR_0 - VAR_4;
 } else {
  *VAR_5 = FUNC_2(VAR_2->l_recs[VAR_7].e_cpos) - VAR_4;
 }

 VAR_6 = 0;
out:
 FUNC_0(VAR_8);
 return VAR_6;
}
