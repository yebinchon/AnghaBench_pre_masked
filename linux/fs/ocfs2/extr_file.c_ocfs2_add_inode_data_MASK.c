
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef enum ocfs2_alloc_restarted { ____Placeholder_ocfs2_alloc_restarted } ocfs2_alloc_restarted ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,struct ocfs2_extent_tree*,int *,int ,int,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,int*) ;
 int FUNC_2 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;

int FUNC_3(struct ocfs2_super *VAR_0,
    struct inode *VAR_1,
    u32 *VAR_2,
    u32 VAR_3,
    int VAR_4,
    struct buffer_head *VAR_5,
    handle_t *VAR_6,
    struct ocfs2_alloc_context *VAR_7,
    struct ocfs2_alloc_context *VAR_8,
    enum ocfs2_alloc_restarted *VAR_9)
{
 int VAR_10;
 struct ocfs2_extent_tree VAR_11;

 FUNC_2(&VAR_11, FUNC_0(VAR_1), VAR_5);
 VAR_10 = FUNC_1(VAR_6, &VAR_11, VAR_2,
       VAR_3, VAR_4,
       VAR_7, VAR_8, VAR_9);

 return VAR_10;
}
