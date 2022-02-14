
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_chain_list {int cl_cpg; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct inode*,struct buffer_head*,scalar_t__,int ,unsigned int,struct ocfs2_chain_list*) ;
 int FUNC_6 (int *,struct ocfs2_alloc_context*,int ,int *,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 unsigned int FUNC_8 (struct ocfs2_chain_list*) ;
 int FUNC_9 (int ,struct buffer_head*) ;
 struct buffer_head* FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (unsigned long long,unsigned int) ;

__attribute__((used)) static struct buffer_head *
FUNC_12(struct ocfs2_super *VAR_2, handle_t *VAR_3,
          struct inode *VAR_4,
          struct ocfs2_alloc_context *VAR_5,
          struct ocfs2_chain_list *VAR_6)
{
 int VAR_7;
 u32 VAR_8, VAR_9;
 u64 VAR_10;
 struct buffer_head *VAR_11;
 unsigned int VAR_12 = FUNC_8(VAR_6);

 VAR_7 = FUNC_6(VAR_3, VAR_5,
          FUNC_3(VAR_6->cl_cpg), &VAR_8,
          &VAR_9);
 if (VAR_7 < 0) {
  if (VAR_7 != -VAR_1)
   FUNC_4(VAR_7);
  goto bail;
 }


 VAR_10 = FUNC_7(VAR_2->sb, VAR_8);
 FUNC_11(
      (unsigned long long)VAR_10, VAR_12);

 VAR_11 = FUNC_10(VAR_2->sb, VAR_10);
 if (!VAR_11) {
  VAR_7 = -VAR_0;
  FUNC_4(VAR_7);
  goto bail;
 }
 FUNC_9(FUNC_1(VAR_4), VAR_11);

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_11,
     VAR_10, VAR_9, VAR_12, VAR_6);
 if (VAR_7 < 0) {
  FUNC_2(VAR_11);
  FUNC_4(VAR_7);
 }

bail:
 return VAR_7 ? FUNC_0(VAR_7) : VAR_11;
}
