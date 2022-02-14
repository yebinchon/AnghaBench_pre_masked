
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocfs2_super {int bitmap_cpg; int first_cluster_group_blkno; } ;
struct inode {int i_sb; } ;


 int FUNC_0 (int) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct inode*) ;

u64 FUNC_4(struct inode *VAR_0, u32 VAR_1)
{
 struct ocfs2_super *VAR_2 = FUNC_1(VAR_0->i_sb);
 u32 VAR_3;

 FUNC_0(!FUNC_3(VAR_0));

 VAR_3 = VAR_1 / VAR_2->bitmap_cpg;
 if (!VAR_3)
  return VAR_2->first_cluster_group_blkno;
 return FUNC_2(VAR_0->i_sb,
     VAR_3 * VAR_2->bitmap_cpg);
}
