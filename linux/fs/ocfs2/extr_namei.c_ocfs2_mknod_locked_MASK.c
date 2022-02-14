
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_alloc_context {int ac_bh; int ac_inode; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef int dev_t ;


 int FUNC_0 (struct inode*,struct inode*,int ,struct buffer_head**,struct buffer_head*,int *,struct ocfs2_alloc_context*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct inode*,struct buffer_head*,struct ocfs2_alloc_context*,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ocfs2_super *VAR_0,
         struct inode *VAR_1,
         struct inode *VAR_2,
         dev_t VAR_3,
         struct buffer_head **VAR_4,
         struct buffer_head *VAR_5,
         handle_t *VAR_6,
         struct ocfs2_alloc_context *VAR_7)
{
 int VAR_8 = 0;
 u64 VAR_9, VAR_10 = 0;
 u16 VAR_11;

 *VAR_4 = ((void*)0);

 VAR_8 = FUNC_2(VAR_6, VAR_1, VAR_5,
           VAR_7, &VAR_9,
           &VAR_11, &VAR_10);
 if (VAR_8 < 0) {
  FUNC_1(VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5, VAR_6, VAR_7,
        VAR_10, VAR_9, VAR_11);
 if (VAR_8 < 0) {
  u64 VAR_12 = FUNC_4(VAR_10, VAR_11);
  int VAR_13 = FUNC_3(VAR_6, VAR_7->ac_inode,
    VAR_7->ac_bh, VAR_11, VAR_12, 1);
  if (VAR_13)
   FUNC_1(VAR_13);
 }

 return VAR_8;
}
