
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct ocfs2_extent_rec {int e_flags; int e_blkno; int e_leaf_clusters; int e_cpos; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ocfs2_extent_rec*,int ,int) ;
 int FUNC_6 (struct super_block*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_0,
           struct ocfs2_extent_rec *VAR_1,
           u32 VAR_2,
           struct ocfs2_extent_rec *VAR_3)
{
 u32 VAR_4 = FUNC_3(VAR_3->e_cpos);
 u32 VAR_5 = VAR_4 + FUNC_2(VAR_3->e_leaf_clusters);

 FUNC_5(VAR_1, 0, sizeof(struct ocfs2_extent_rec));

 VAR_1->e_cpos = FUNC_1(VAR_2);
 VAR_1->e_leaf_clusters = FUNC_0(VAR_5 - VAR_2);

 VAR_1->e_blkno = VAR_3->e_blkno;
 FUNC_4(&VAR_1->e_blkno,
       FUNC_6(VAR_0, VAR_2 - VAR_4));

 VAR_1->e_flags = VAR_3->e_flags;
}
