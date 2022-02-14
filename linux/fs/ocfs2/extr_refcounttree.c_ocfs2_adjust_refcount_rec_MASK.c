
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_refcount_rec {int r_cpos; } ;
struct ocfs2_refcount_block {void* rf_cpos; void* rf_flags; } ;
struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_extent_list {TYPE_1__* l_recs; int l_next_free_rec; } ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {void* e_cpos; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct ocfs2_caching_info*,struct ocfs2_path*,int) ;
 int FUNC_8 (struct ocfs2_path*) ;
 int FUNC_9 (struct ocfs2_extent_tree*,struct ocfs2_caching_info*,struct buffer_head*) ;
 int FUNC_10 (int *,struct ocfs2_caching_info*,struct buffer_head*,int ) ;
 int FUNC_11 (int *,struct ocfs2_caching_info*,struct buffer_head*,int ) ;
 int FUNC_12 (int *,struct buffer_head*) ;
 struct ocfs2_path* FUNC_13 (struct ocfs2_extent_tree*) ;
 struct buffer_head* FUNC_14 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_15 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_16(handle_t *VAR_4,
         struct ocfs2_caching_info *VAR_5,
         struct buffer_head *VAR_6,
         struct buffer_head *VAR_7,
         struct ocfs2_refcount_rec *VAR_8)
{
 int VAR_9 = 0, VAR_10;
 u32 VAR_11, VAR_12;
 struct ocfs2_path *VAR_13 = ((void*)0);
 struct ocfs2_extent_tree VAR_14;
 struct ocfs2_refcount_block *VAR_15 =
  (struct ocfs2_refcount_block *)VAR_6->b_data;
 struct ocfs2_extent_list *VAR_16;

 if (!(FUNC_3(VAR_15->rf_flags) & VAR_3))
  goto out;

 VAR_15 = (struct ocfs2_refcount_block *)VAR_7->b_data;
 VAR_12 = FUNC_3(VAR_15->rf_cpos);
 VAR_11 = FUNC_4(VAR_8->r_cpos) & VAR_1;
 if (VAR_12 <= VAR_11)
  goto out;

 FUNC_9(&VAR_14, VAR_5, VAR_6);

 VAR_13 = FUNC_13(&VAR_14);
 if (!VAR_13) {
  VAR_9 = -VAR_0;
  FUNC_5(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_7(VAR_5, VAR_13, VAR_12);
 if (VAR_9) {
  FUNC_5(VAR_9);
  goto out;
 }





 VAR_9 = FUNC_6(VAR_4, 2);
 if (VAR_9 < 0) {
  FUNC_5(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_11(VAR_4, VAR_5, VAR_7,
          VAR_2);
 if (VAR_9 < 0) {
  FUNC_5(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_10(VAR_4, VAR_5, FUNC_14(VAR_13),
          VAR_2);
 if (VAR_9 < 0) {
  FUNC_5(VAR_9);
  goto out;
 }


 VAR_16 = FUNC_15(VAR_13);

 for (VAR_10 = 0; VAR_10 < FUNC_2(VAR_16->l_next_free_rec); VAR_10++)
  if (FUNC_3(VAR_16->l_recs[VAR_10].e_cpos) == VAR_12)
   break;

 FUNC_0(VAR_10 == FUNC_2(VAR_16->l_next_free_rec));

 VAR_16->l_recs[VAR_10].e_cpos = FUNC_1(VAR_11);


 VAR_15->rf_cpos = FUNC_1(VAR_11);

 FUNC_12(VAR_4, FUNC_14(VAR_13));
 FUNC_12(VAR_4, VAR_7);

out:
 FUNC_8(VAR_13);
 return VAR_9;
}
