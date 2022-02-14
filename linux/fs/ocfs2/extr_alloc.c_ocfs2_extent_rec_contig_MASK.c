
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct ocfs2_extent_rec {scalar_t__ e_flags; int e_blkno; } ;
typedef enum ocfs2_contig_type { ____Placeholder_ocfs2_contig_type } ocfs2_contig_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct super_block*,struct ocfs2_extent_rec*,int ) ;
 scalar_t__ FUNC_2 (struct ocfs2_extent_rec*,struct ocfs2_extent_rec*) ;

__attribute__((used)) static enum ocfs2_contig_type
 FUNC_3(struct super_block *VAR_3,
    struct ocfs2_extent_rec *VAR_4,
    struct ocfs2_extent_rec *VAR_5)
{
 u64 VAR_6 = FUNC_0(VAR_5->e_blkno);






 if (VAR_4->e_flags != VAR_5->e_flags)
  return VAR_1;

 if (FUNC_2(VAR_4, VAR_5) &&
     FUNC_1(VAR_3, VAR_4, VAR_6))
   return VAR_2;

 VAR_6 = FUNC_0(VAR_4->e_blkno);
 if (FUNC_2(VAR_5, VAR_4) &&
     FUNC_1(VAR_3, VAR_5, VAR_6))
  return VAR_0;

 return VAR_1;
}
