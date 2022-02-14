
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_super {scalar_t__ first_cluster_group_blkno; } ;
struct ocfs2_group_desc {int bg_blkno; } ;


 int VAR_0 ;
 struct ocfs2_super* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct super_block*,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_4 (struct super_block*,unsigned long long,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_1,
        struct ocfs2_group_desc *VAR_2,
        u64 VAR_3, u32 VAR_4, u32 VAR_5)
{
 u64 VAR_6, VAR_7;
 struct ocfs2_super *VAR_8 = FUNC_0(VAR_1);

 VAR_7 = FUNC_2(VAR_1, VAR_5);
 VAR_6 = FUNC_2(VAR_1, VAR_4);
 if (VAR_3 != VAR_8->first_cluster_group_blkno)
  VAR_6 += FUNC_1(VAR_2->bg_blkno);

 FUNC_4(VAR_1, (unsigned long long)VAR_6, VAR_7);

 return FUNC_3(VAR_1, VAR_6, VAR_7, VAR_0, 0);
}
