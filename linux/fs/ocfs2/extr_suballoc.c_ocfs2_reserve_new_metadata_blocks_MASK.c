
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int s_num_meta_stolen; scalar_t__ slot_num; } ;
struct ocfs2_alloc_context {int ac_bits_wanted; int ac_group_search; int ac_which; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct ocfs2_alloc_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 int FUNC_5 (struct ocfs2_alloc_context*) ;
 int FUNC_6 (struct ocfs2_alloc_context*) ;
 int FUNC_7 (struct ocfs2_super*) ;
 int FUNC_8 (struct ocfs2_super*) ;
 int FUNC_9 (struct ocfs2_super*,struct ocfs2_alloc_context*,int ,int ,int *,int) ;
 int FUNC_10 (struct ocfs2_super*,struct ocfs2_alloc_context*) ;

int FUNC_11(struct ocfs2_super *VAR_10,
          int VAR_11,
          struct ocfs2_alloc_context **VAR_12)
{
 int VAR_13;
 int VAR_14 = FUNC_7(VAR_10);

 *VAR_12 = FUNC_3(sizeof(struct ocfs2_alloc_context), VAR_5);
 if (!(*VAR_12)) {
  VAR_13 = -VAR_2;
  FUNC_4(VAR_13);
  goto bail;
 }

 (*VAR_12)->ac_bits_wanted = VAR_11;
 (*VAR_12)->ac_which = VAR_6;
 (*VAR_12)->ac_group_search = VAR_9;

 if (VAR_14 != VAR_7 &&
  FUNC_1(&VAR_10->s_num_meta_stolen) < VAR_8)
  goto extent_steal;

 FUNC_2(&VAR_10->s_num_meta_stolen, 0);
 VAR_13 = FUNC_9(VAR_10, (*VAR_12),
          VAR_4,
          (u32)VAR_10->slot_num, ((void*)0),
          VAR_0|VAR_1);


 if (VAR_13 >= 0) {
  VAR_13 = 0;
  if (VAR_14 != VAR_7)
   FUNC_8(VAR_10);
  goto bail;
 } else if (VAR_13 < 0 && VAR_13 != -VAR_3) {
  FUNC_4(VAR_13);
  goto bail;
 }

 FUNC_5(*VAR_12);

extent_steal:
 VAR_13 = FUNC_10(VAR_10, *VAR_12);
 FUNC_0(&VAR_10->s_num_meta_stolen);
 if (VAR_13 < 0) {
  if (VAR_13 != -VAR_3)
   FUNC_4(VAR_13);
  goto bail;
 }

 VAR_13 = 0;
bail:
 if ((VAR_13 < 0) && *VAR_12) {
  FUNC_6(*VAR_12);
  *VAR_12 = ((void*)0);
 }

 if (VAR_13)
  FUNC_4(VAR_13);
 return VAR_13;
}
