
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int ip_dyn_features; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct ocfs2_super*,int *,struct inode*,struct inode*,struct buffer_head*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*) ;
 int FUNC_3 (struct ocfs2_super*,int *,struct inode*,struct inode*,struct buffer_head*,struct ocfs2_alloc_context*,int *) ;
 int FUNC_4 (struct ocfs2_super*,int *,struct inode*,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct ocfs2_super*) ;
 int FUNC_6 (struct ocfs2_super*) ;

int FUNC_7(struct ocfs2_super *VAR_1,
         handle_t *VAR_2,
         struct inode *VAR_3,
         struct inode *VAR_4,
         struct buffer_head *VAR_5,
         struct ocfs2_alloc_context *VAR_6,
         struct ocfs2_alloc_context *VAR_7)

{
 FUNC_0(!FUNC_6(VAR_1) && VAR_6 == ((void*)0));

 if (FUNC_1(VAR_4)->ip_dyn_features & VAR_0)
  return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 if (FUNC_5(VAR_1))
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_6, VAR_7);

 return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, ((void*)0));
}
