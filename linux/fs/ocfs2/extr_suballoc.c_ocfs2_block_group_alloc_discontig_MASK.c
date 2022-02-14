
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef unsigned int u32 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_chain_list {int cl_cpg; } ;
struct ocfs2_alloc_context {int ac_disable_chain_relink; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct ocfs2_alloc_context*,struct inode*,struct buffer_head*) ;
 int FUNC_6 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_7 (int *,struct inode*,struct buffer_head*,scalar_t__,unsigned int,unsigned int,struct ocfs2_chain_list*) ;
 int FUNC_8 (int *,struct inode*,struct buffer_head*,struct ocfs2_alloc_context*,struct ocfs2_chain_list*,unsigned int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,unsigned int) ;
 int FUNC_11 (int *,int ) ;
 unsigned int FUNC_12 (struct ocfs2_chain_list*) ;
 int FUNC_13 (int ,struct buffer_head*) ;
 int FUNC_14 (struct ocfs2_super*) ;
 struct buffer_head* FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (unsigned long long,unsigned int) ;

__attribute__((used)) static struct buffer_head *
FUNC_17(handle_t *VAR_2,
      struct inode *VAR_3,
      struct ocfs2_alloc_context *VAR_4,
      struct ocfs2_chain_list *VAR_5)
{
 int VAR_6;
 u32 VAR_7, VAR_8;
 u64 VAR_9;
 unsigned int VAR_10 = FUNC_3(VAR_5->cl_cpg) >> 1;
 struct buffer_head *VAR_11 = ((void*)0);
 unsigned int VAR_12 = FUNC_12(VAR_5);
 struct ocfs2_super *VAR_13 = FUNC_2(VAR_3->i_sb);

 if (!FUNC_14(VAR_13)) {
  VAR_6 = -VAR_1;
  goto bail;
 }

 VAR_6 = FUNC_11(VAR_2,
        FUNC_9(VAR_13->sb));
 if (VAR_6) {
  FUNC_4(VAR_6);
  goto bail;
 }







 VAR_4->ac_disable_chain_relink = 1;


 VAR_6 = FUNC_6(VAR_13, VAR_2, VAR_4, VAR_10,
           &VAR_7, &VAR_8);
 if (VAR_6 < 0) {
  if (VAR_6 != -VAR_1)
   FUNC_4(VAR_6);
  goto bail;
 }
 VAR_10 = VAR_8;


 VAR_9 = FUNC_10(VAR_13->sb, VAR_7);
 FUNC_16(
    (unsigned long long)VAR_9, VAR_12);

 VAR_11 = FUNC_15(VAR_13->sb, VAR_9);
 if (!VAR_11) {
  VAR_6 = -VAR_0;
  FUNC_4(VAR_6);
  goto bail;
 }
 FUNC_13(FUNC_1(VAR_3), VAR_11);

 VAR_6 = FUNC_7(VAR_2, VAR_3, VAR_11,
     VAR_9, VAR_8, VAR_12, VAR_5);
 if (VAR_6 < 0) {
  FUNC_4(VAR_6);
  goto bail;
 }

 VAR_6 = FUNC_8(VAR_2, VAR_3,
        VAR_11, VAR_4, VAR_5, VAR_10);
 if (VAR_6)
  FUNC_4(VAR_6);

bail:
 if (VAR_6)
  FUNC_5(VAR_2, VAR_4, VAR_3, VAR_11);
 return VAR_6 ? FUNC_0(VAR_6) : VAR_11;
}
