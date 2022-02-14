
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_ino; int i_state; int i_count; int i_lock; int i_sb; int i_mapping; int i_nlink; } ;
struct f2fs_sb_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int ) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct f2fs_sb_info*,struct inode*,int *,int ,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct f2fs_sb_info*,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct inode*,int) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;

__attribute__((used)) static int FUNC_24(struct inode *VAR_3)
{
 struct f2fs_sb_info *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;





 if (FUNC_23(FUNC_16(VAR_4, VAR_2))) {
  if (VAR_3->i_ino == FUNC_3(VAR_4) ||
   VAR_3->i_ino == FUNC_2(VAR_4)) {
   FUNC_21(VAR_3, 1);
   return 1;
  }
 }
 if ((!FUNC_14(VAR_3) && VAR_3->i_state & VAR_1)) {
  if (!VAR_3->i_nlink && !FUNC_15(VAR_3)) {

   FUNC_5(&VAR_3->i_count);
   FUNC_20(&VAR_3->i_lock);


   if (FUNC_9(VAR_3))
    FUNC_7(VAR_3);


   FUNC_6(VAR_3);

   FUNC_18(VAR_3->i_sb);
   FUNC_8(VAR_3, 0);

   FUNC_10(FUNC_1(VAR_3),
     VAR_3, ((void*)0), 0, VAR_0);
   FUNC_22(VAR_3->i_mapping);

   if (FUNC_0(VAR_3))
    FUNC_11(VAR_3);

   FUNC_17(VAR_3->i_sb);

   FUNC_19(&VAR_3->i_lock);
   FUNC_4(&VAR_3->i_count);
  }
  FUNC_21(VAR_3, 0);
  return 0;
 }
 VAR_5 = FUNC_13(VAR_3);
 if (!VAR_5)
  VAR_5 = FUNC_12(VAR_3);
 FUNC_21(VAR_3, VAR_5);
 return VAR_5;
}
