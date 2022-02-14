
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_extent_rec {int e_blkno; int e_cpos; } ;
struct ocfs2_extent_list {int dummy; } ;
struct inode {int i_sb; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0,
     struct ocfs2_extent_list *VAR_1,
     struct ocfs2_extent_rec *VAR_2,
     u32 VAR_3, u32 *VAR_4,
     u32 *VAR_5, u32 *VAR_6,
     u64 *VAR_7, int *VAR_8)
{
 int VAR_9 = 0;
 u32 VAR_10, VAR_11;

 VAR_11 = FUNC_0(VAR_2->e_cpos) + FUNC_3(VAR_1, VAR_2);

 if (FUNC_0(VAR_2->e_cpos) >= VAR_3) {



  *VAR_4 = FUNC_0(VAR_2->e_cpos);



  if (VAR_11 < *VAR_6)
   *VAR_6 = VAR_11;
  *VAR_5 = *VAR_6 - FUNC_0(VAR_2->e_cpos);
  *VAR_7 = FUNC_1(VAR_2->e_blkno);
  *VAR_6 = FUNC_0(VAR_2->e_cpos);
 } else if (VAR_11 > VAR_3) {




  *VAR_4 = VAR_3;



  if (VAR_11 < *VAR_6)
   *VAR_6 = VAR_11;
  *VAR_5 = *VAR_6 - VAR_3;
  VAR_10 = VAR_3 - FUNC_0(VAR_2->e_cpos);
  *VAR_7 = FUNC_1(VAR_2->e_blkno) +
    FUNC_2(VAR_0->i_sb, VAR_10);
  *VAR_6 = VAR_3;
 } else {
  VAR_9 = 1;
 }

 *VAR_8 = VAR_9;
}
