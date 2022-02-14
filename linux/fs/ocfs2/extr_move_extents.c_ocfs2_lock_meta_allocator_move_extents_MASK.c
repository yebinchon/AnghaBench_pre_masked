
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_extent_tree {int et_root_el; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;


 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ocfs2_alloc_context*) ;
 int FUNC_6 (struct ocfs2_extent_tree*) ;
 int FUNC_7 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 scalar_t__ FUNC_8 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_0,
     struct ocfs2_extent_tree *VAR_1,
     u32 VAR_2,
     u32 VAR_3,
     struct ocfs2_alloc_context **VAR_4,
     int VAR_5,
     int *VAR_6)
{
 int VAR_7, VAR_8;
 unsigned int VAR_9 = 2 * VAR_3 + VAR_2;
 struct ocfs2_super *VAR_10 = FUNC_0(VAR_0->i_sb);

 VAR_8 = FUNC_6(VAR_1);
 if (VAR_8 < 0) {
  VAR_7 = VAR_8;
  FUNC_2(VAR_7);
  goto out;
 }

 if (!VAR_8 ||
     (FUNC_8(VAR_10) && VAR_8 < VAR_9))
  VAR_5 += FUNC_4(VAR_1->et_root_el);

 VAR_7 = FUNC_7(VAR_10, VAR_5, VAR_4);
 if (VAR_7) {
  FUNC_2(VAR_7);
  goto out;
 }


 *VAR_6 += FUNC_3(VAR_10->sb, VAR_1->et_root_el);

 FUNC_1(0, "reserve metadata_blocks: %d, data_clusters: %u, credits: %d\n",
      VAR_5, VAR_2, *VAR_6);
out:
 if (VAR_7) {
  if (*VAR_4) {
   FUNC_5(*VAR_4);
   *VAR_4 = ((void*)0);
  }
 }

 return VAR_7;
}
