
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct ocfs2_extent_rec {int e_leaf_clusters; int e_blkno; int e_cpos; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_0,
       u32 VAR_1,
       struct ocfs2_extent_rec *VAR_2,
       u32 *VAR_3, u32 *VAR_4)

{
 u32 VAR_5 = VAR_1 - FUNC_1(VAR_2->e_cpos);

 *VAR_3 = FUNC_3(VAR_0, FUNC_2(VAR_2->e_blkno));
 *VAR_3 = *VAR_3 + VAR_5;

 if (VAR_4)
  *VAR_4 = FUNC_0(VAR_2->e_leaf_clusters) - VAR_5;
}
