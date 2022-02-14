
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_path {TYPE_1__* p_node; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {scalar_t__ l_next_free_rec; scalar_t__ l_count; struct ocfs2_extent_rec* l_recs; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;
typedef int handle_t ;
struct TYPE_2__ {struct buffer_head* bh; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ocfs2_extent_rec*,int ,int) ;
 int FUNC_4 (int,char*,unsigned long long,unsigned long long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,struct ocfs2_path*,struct ocfs2_path*,int) ;
 int FUNC_7 (struct ocfs2_extent_list*) ;
 int FUNC_8 (int ,char*,unsigned long long,unsigned long long,int) ;
 scalar_t__ FUNC_9 (struct ocfs2_extent_rec*) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,struct ocfs2_path*,int) ;
 int FUNC_14 (struct ocfs2_extent_list*) ;
 struct buffer_head* FUNC_15 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_16 (struct ocfs2_path*) ;
 int FUNC_17 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_18(handle_t *VAR_1,
          struct ocfs2_extent_tree *VAR_2,
          struct ocfs2_path *VAR_3,
          struct ocfs2_path *VAR_4,
          int VAR_5)
{
 int VAR_6, VAR_7;
 struct buffer_head *VAR_8;
 struct buffer_head *VAR_9 = ((void*)0);
 struct buffer_head *VAR_10;
 struct ocfs2_extent_list *VAR_11, *VAR_12;
 struct ocfs2_extent_rec VAR_13;

 VAR_9 = FUNC_15(VAR_3);
 VAR_12 = FUNC_16(VAR_3);

 if (VAR_12->l_next_free_rec != VAR_12->l_count) {
  FUNC_8(FUNC_11(VAR_2->et_ci),
       "Inode %llu has non-full interior leaf node %llu (next free = %u)\n",
       (unsigned long long)FUNC_12(VAR_2->et_ci),
       (unsigned long long)VAR_9->b_blocknr,
       FUNC_2(VAR_12->l_next_free_rec));
  return -VAR_0;
 }





 if (FUNC_9(&VAR_12->l_recs[0]))
  return 0;

 VAR_10 = VAR_3->p_node[VAR_5].bh;
 FUNC_0(VAR_10 != VAR_4->p_node[VAR_5].bh);

 VAR_6 = FUNC_13(VAR_1, VAR_2->et_ci, VAR_4,
        VAR_5);
 if (VAR_6) {
  FUNC_5(VAR_6);
  goto out;
 }

 for(VAR_7 = VAR_5 + 1; VAR_7 < FUNC_17(VAR_4); VAR_7++) {
  VAR_6 = FUNC_13(VAR_1, VAR_2->et_ci,
         VAR_4, VAR_7);
  if (VAR_6) {
   FUNC_5(VAR_6);
   goto out;
  }

  VAR_6 = FUNC_13(VAR_1, VAR_2->et_ci,
         VAR_3, VAR_7);
  if (VAR_6) {
   FUNC_5(VAR_6);
   goto out;
  }
 }

 VAR_8 = FUNC_15(VAR_4);
 VAR_11 = FUNC_16(VAR_4);


 FUNC_4(!VAR_11->l_next_free_rec, "Inode %llu: Rotate fails "
   "because rightmost leaf block %llu is empty\n",
   (unsigned long long)FUNC_12(VAR_2->et_ci),
   (unsigned long long)VAR_8->b_blocknr);

 FUNC_7(VAR_11);

 FUNC_10(VAR_1, VAR_8);


 VAR_7 = FUNC_2(VAR_12->l_next_free_rec) - 1;
 VAR_13 = VAR_12->l_recs[VAR_7];
 VAR_11->l_recs[0] = VAR_13;
 FUNC_1(&VAR_12->l_next_free_rec, -1);
 FUNC_14(VAR_12);
 FUNC_3(&VAR_12->l_recs[0], 0, sizeof(struct ocfs2_extent_rec));
 FUNC_1(&VAR_12->l_next_free_rec, 1);

 FUNC_10(VAR_1, VAR_9);

 FUNC_6(VAR_1, VAR_3, VAR_4,
       VAR_5);

out:
 return VAR_6;
}
