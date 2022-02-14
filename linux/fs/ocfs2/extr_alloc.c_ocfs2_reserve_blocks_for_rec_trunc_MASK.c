
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_extent_tree {int et_root_el; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ocfs2_alloc_context*) ;
 int FUNC_4 (struct ocfs2_extent_tree*) ;
 int FUNC_5 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 scalar_t__ FUNC_6 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1,
           struct ocfs2_extent_tree *VAR_2,
           u32 VAR_3,
           struct ocfs2_alloc_context **VAR_4,
           int VAR_5)
{
 int VAR_6 = 0, VAR_7;
 unsigned int VAR_8 = 2 * VAR_3;
 struct ocfs2_super *VAR_9 = FUNC_0(VAR_1->i_sb);

 *VAR_4 = ((void*)0);

 VAR_7 = FUNC_4(VAR_2);
 if (VAR_7 < 0) {
  VAR_6 = VAR_7;
  FUNC_1(VAR_6);
  goto out;
 }

 if (!VAR_7 ||
     (FUNC_6(VAR_9) && VAR_7 < VAR_8))
  VAR_5 += FUNC_2(VAR_2->et_root_el);

 if (VAR_5) {
  VAR_6 = FUNC_5(VAR_9, VAR_5, VAR_4);
  if (VAR_6 < 0) {
   if (VAR_6 != -VAR_0)
    FUNC_1(VAR_6);
  }
 }

out:
 if (VAR_6) {
  if (*VAR_4) {
   FUNC_3(*VAR_4);
   *VAR_4 = ((void*)0);
  }
 }

 return VAR_6;
}
