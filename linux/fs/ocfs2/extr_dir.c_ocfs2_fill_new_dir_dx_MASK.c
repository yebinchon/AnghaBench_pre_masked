
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_dx_entry_list {int dummy; } ;
struct ocfs2_dx_root_block {struct ocfs2_dx_entry_list dr_entries; } ;
struct ocfs2_dx_hinfo {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ocfs2_super*,int *,struct inode*,struct buffer_head*,struct buffer_head*,struct ocfs2_alloc_context*,int,int,struct buffer_head**) ;
 int FUNC_3 (struct inode*,char*,int,struct ocfs2_dx_hinfo*) ;
 int FUNC_4 (struct ocfs2_dx_entry_list*,struct ocfs2_dx_hinfo*,int ) ;
 int FUNC_5 (struct ocfs2_super*,int *,struct inode*,struct inode*,struct buffer_head*,struct ocfs2_alloc_context*,struct buffer_head**) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_super *VAR_0,
     handle_t *VAR_1,
     struct inode *VAR_2,
     struct inode *VAR_3,
     struct buffer_head *VAR_4,
     struct ocfs2_alloc_context *VAR_5,
     struct ocfs2_alloc_context *VAR_6)
{
 int VAR_7;
 struct buffer_head *VAR_8 = ((void*)0);
 struct buffer_head *VAR_9 = ((void*)0);
 struct ocfs2_dx_hinfo VAR_10;
 struct ocfs2_dx_root_block *VAR_11;
 struct ocfs2_dx_entry_list *VAR_12;
 VAR_7 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5, &VAR_8);
 if (VAR_7) {
  FUNC_1(VAR_7);
  goto out;
 }

 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_3, VAR_4, VAR_8,
     VAR_6, 1, 2, &VAR_9);
 if (VAR_7) {
  FUNC_1(VAR_7);
  goto out;
 }
 VAR_11 = (struct ocfs2_dx_root_block *)VAR_9->b_data;
 VAR_12 = &VAR_11->dr_entries;


 FUNC_3(VAR_3, ".", 1, &VAR_10);
 FUNC_4(VAR_12, &VAR_10, VAR_8->b_blocknr);

 FUNC_3(VAR_3, "..", 2, &VAR_10);
 FUNC_4(VAR_12, &VAR_10, VAR_8->b_blocknr);

out:
 FUNC_0(VAR_9);
 FUNC_0(VAR_8);
 return VAR_7;
}
