
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int local_alloc_bits; } ;
struct ocfs2_alloc_context {struct buffer_head* ac_bh; struct inode* ac_inode; int ac_bits_wanted; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*) ;
 struct ocfs2_alloc_context* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ocfs2_alloc_context*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_alloc_context*) ;
 int FUNC_6 (struct ocfs2_alloc_context*) ;
 scalar_t__ FUNC_7 (struct ocfs2_super*,int ) ;
 int FUNC_8 (struct ocfs2_super*,struct ocfs2_alloc_context*) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_super *VAR_5,
      struct ocfs2_alloc_context **VAR_6,
      struct inode **VAR_7,
      struct buffer_head **VAR_8)
{
 int VAR_9;

 *VAR_6 = FUNC_2(sizeof(struct ocfs2_alloc_context), VAR_2);
 if (!(*VAR_6)) {
  VAR_9 = -VAR_0;
  FUNC_4(VAR_9);
  goto bail;
 }

retry_enospc:
 (*VAR_6)->ac_bits_wanted = VAR_5->local_alloc_bits;
 VAR_9 = FUNC_8(VAR_5, *VAR_6);
 if (VAR_9 == -VAR_1) {
  if (FUNC_7(VAR_5, VAR_4) ==
      VAR_3)
   goto bail;

  FUNC_5(*VAR_6);
  FUNC_3(*VAR_6, 0, sizeof(struct ocfs2_alloc_context));
  goto retry_enospc;
 }
 if (VAR_9 < 0) {
  FUNC_4(VAR_9);
  goto bail;
 }

 *VAR_7 = (*VAR_6)->ac_inode;
 FUNC_1(*VAR_7);
 *VAR_8 = (*VAR_6)->ac_bh;
 FUNC_0(*VAR_8);
 VAR_9 = 0;
bail:
 if ((VAR_9 < 0) && *VAR_6) {
  FUNC_6(*VAR_6);
  *VAR_6 = ((void*)0);
 }

 if (VAR_9)
  FUNC_4(VAR_9);
 return VAR_9;
}
