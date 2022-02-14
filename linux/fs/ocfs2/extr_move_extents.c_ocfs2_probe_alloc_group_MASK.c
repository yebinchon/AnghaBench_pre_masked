
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_group_desc {scalar_t__ bg_bitmap; int bg_bits; int bg_blkno; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0, struct buffer_head *VAR_1,
        int *VAR_2, u32 VAR_3, u32 VAR_4,
        u32 *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0, VAR_9 = *VAR_2;
 struct ocfs2_group_desc *VAR_10 = (struct ocfs2_group_desc *)VAR_1->b_data;
 u32 VAR_11 = FUNC_3(VAR_0->i_sb,
       FUNC_1(VAR_10->bg_blkno));

 for (VAR_6 = VAR_9; VAR_6 < FUNC_0(VAR_10->bg_bits); VAR_6++) {

  VAR_7 = FUNC_4(VAR_6, (unsigned long *)VAR_10->bg_bitmap);
  if (VAR_7) {




   if ((VAR_6 - VAR_9) > VAR_4) {
    *VAR_5 = 0;
    break;
   }

   if (VAR_8)
    VAR_8 = 0;

   continue;
  } else
   VAR_8++;

  if (VAR_8 == VAR_3) {
   *VAR_2 = VAR_6;
   *VAR_5 = VAR_11 + VAR_6;
   break;
  }
 }

 FUNC_2(0, "found phys_cpos: %u to fit the wanted moving.\n", *VAR_5);
}
