
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_extent_tree {int et_root_bh; int et_ci; int et_root_el; } ;
struct ocfs2_alloc_context {scalar_t__ ac_which; int ac_bh; int ac_inode; } ;
typedef int handle_t ;
typedef enum ocfs2_alloc_restarted { ____Placeholder_ocfs2_alloc_restarted } ocfs2_alloc_restarted ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,struct ocfs2_alloc_context*,int,int,int*,int*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct ocfs2_alloc_context*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,struct ocfs2_extent_tree*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ,int ,int) ;
 int FUNC_9 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,int,int) ;
 int FUNC_10 (int *,struct ocfs2_extent_tree*,int,int ,int,int ,struct ocfs2_alloc_context*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct ocfs2_extent_tree*) ;
 int FUNC_15 (unsigned long long,int,int) ;
 int FUNC_16 (int,int,int) ;

int FUNC_17(handle_t *VAR_8,
    struct ocfs2_extent_tree *VAR_9,
    u32 *VAR_10,
    u32 VAR_11,
    int VAR_12,
    struct ocfs2_alloc_context *VAR_13,
    struct ocfs2_alloc_context *VAR_14,
    enum ocfs2_alloc_restarted *VAR_15)
{
 int VAR_16 = 0, VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19;
 enum ocfs2_alloc_restarted VAR_20 = VAR_6;
 u32 VAR_21, VAR_22;
 u64 VAR_23;
 u8 VAR_24 = 0;
 struct ocfs2_super *VAR_25 =
  FUNC_1(FUNC_12(VAR_9->et_ci));

 FUNC_0(!VAR_11);

 if (VAR_12)
  VAR_24 = VAR_3;

 VAR_19 = FUNC_14(VAR_9);
 if (VAR_19 < 0) {
  VAR_16 = VAR_19;
  FUNC_3(VAR_16);
  goto leave;
 }






 if (!VAR_19 && !VAR_14) {
  VAR_17 = -1;
  VAR_16 = -VAR_0;
  VAR_20 = VAR_5;
  goto leave;
 } else if ((!VAR_19)
     && (FUNC_4(VAR_14)
         < FUNC_7(VAR_9->et_root_el))) {
  VAR_17 = -2;
  VAR_16 = -VAR_0;
  VAR_20 = VAR_5;
  goto leave;
 }

 VAR_16 = FUNC_2(VAR_8, VAR_13, 1,
     VAR_11, &VAR_21, &VAR_22);
 if (VAR_16 < 0) {
  if (VAR_16 != -VAR_1)
   FUNC_3(VAR_16);
  goto leave;
 }

 FUNC_0(VAR_22 > VAR_11);


 VAR_16 = FUNC_6(VAR_8, VAR_9,
           VAR_4);
 if (VAR_16 < 0) {
  FUNC_3(VAR_16);
  VAR_18 = 1;
  goto bail;
 }

 VAR_23 = FUNC_5(VAR_25->sb, VAR_21);
 FUNC_15(
      (unsigned long long)FUNC_13(VAR_9->et_ci),
      VAR_21, VAR_22);
 VAR_16 = FUNC_10(VAR_8, VAR_9, *VAR_10, VAR_23,
         VAR_22, VAR_24, VAR_14);
 if (VAR_16 < 0) {
  FUNC_3(VAR_16);
  VAR_18 = 1;
  goto bail;
 }

 FUNC_11(VAR_8, VAR_9->et_root_bh);

 VAR_11 -= VAR_22;
 *VAR_10 += VAR_22;

 if (VAR_11) {
  VAR_17 = VAR_11;
  VAR_16 = -VAR_0;
  VAR_20 = VAR_7;
 }

bail:
 if (VAR_18) {
  if (VAR_13->ac_which == VAR_2)
   FUNC_9(VAR_25, VAR_8, VAR_13,
     VAR_21, VAR_22);
  else
   FUNC_8(VAR_8,
     VAR_13->ac_inode,
     VAR_13->ac_bh,
     FUNC_5(VAR_25->sb, VAR_21),
     VAR_22);
 }

leave:
 if (VAR_15)
  *VAR_15 = VAR_20;
 FUNC_16(VAR_16, VAR_20, VAR_17);
 return VAR_16;
}
