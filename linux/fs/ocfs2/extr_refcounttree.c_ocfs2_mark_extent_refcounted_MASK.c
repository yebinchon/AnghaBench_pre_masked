
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_ino; int i_sb; } ;
typedef int handle_t ;
struct TYPE_2__ {int ip_blkno; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,struct ocfs2_extent_tree*,int ,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*,int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1,
    struct ocfs2_extent_tree *VAR_2,
    handle_t *VAR_3, u32 VAR_4,
    u32 VAR_5, u32 VAR_6,
    struct ocfs2_alloc_context *VAR_7,
    struct ocfs2_cached_dealloc_ctxt *VAR_8)
{
 int VAR_9;

 FUNC_6(FUNC_0(VAR_1)->ip_blkno,
        VAR_4, VAR_5, VAR_6);

 if (!FUNC_5(FUNC_1(VAR_1->i_sb))) {
  VAR_9 = FUNC_4(VAR_1->i_sb, "Inode %lu want to use refcount tree, but the feature bit is not set in the super block\n",
      VAR_1->i_ino);
  goto out;
 }

 VAR_9 = FUNC_3(VAR_3, VAR_2, VAR_4,
           VAR_5, VAR_6, VAR_7, VAR_8,
           VAR_0, 0);
 if (VAR_9)
  FUNC_2(VAR_9);

out:
 return VAR_9;
}
