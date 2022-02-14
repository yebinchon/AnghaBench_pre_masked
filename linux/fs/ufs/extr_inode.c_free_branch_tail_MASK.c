
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ufs_sb_private_info {unsigned int s_apb; int s_fpb; } ;
struct ufs_buffer_head {int dummy; } ;
struct to_free {struct inode* inode; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_4__ {int meta_lock; } ;
struct TYPE_3__ {struct ufs_sb_private_info* s_uspi; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct to_free*,scalar_t__,int ) ;
 int FUNC_4 (struct inode*,scalar_t__,int) ;
 int FUNC_5 (struct ufs_buffer_head*) ;
 scalar_t__ FUNC_6 (struct ufs_buffer_head*) ;
 void* FUNC_7 (struct ufs_sb_private_info*,struct ufs_buffer_head*,unsigned int) ;
 int FUNC_8 (struct ufs_buffer_head*) ;
 int FUNC_9 (struct ufs_buffer_head*) ;
 int FUNC_10 (struct ufs_sb_private_info*,void*) ;
 scalar_t__ FUNC_11 (struct super_block*,void*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct inode *VAR_0, unsigned VAR_1, struct ufs_buffer_head *VAR_2, int VAR_3)
{
 struct super_block *VAR_4 = VAR_0->i_sb;
 struct ufs_sb_private_info *VAR_5 = FUNC_2(VAR_4)->s_uspi;
 unsigned VAR_6;

 if (--VAR_3) {
  for (VAR_6 = VAR_1; VAR_6 < VAR_5->s_apb ; VAR_6++) {
   void *VAR_7 = FUNC_7(VAR_5, VAR_2, VAR_6);
   u64 VAR_8 = FUNC_11(VAR_4, VAR_7);
   if (VAR_8) {
    FUNC_12(&FUNC_1(VAR_0)->meta_lock);
    FUNC_10(VAR_5, VAR_7);
    FUNC_13(&FUNC_1(VAR_0)->meta_lock);
    FUNC_8(VAR_2);
    FUNC_4(VAR_0, VAR_8, VAR_3);
   }
  }
 } else {
  struct to_free VAR_9 = {.inode = VAR_0};

  for (VAR_6 = VAR_1; VAR_6 < VAR_5->s_apb; VAR_6++) {
   void *VAR_10 = FUNC_7(VAR_5, VAR_2, VAR_6);
   u64 VAR_11 = FUNC_11(VAR_4, VAR_10);
   if (VAR_11) {
    FUNC_12(&FUNC_1(VAR_0)->meta_lock);
    FUNC_10(VAR_5, VAR_10);
    FUNC_13(&FUNC_1(VAR_0)->meta_lock);
    FUNC_8(VAR_2);
    FUNC_3(&VAR_9, VAR_11, VAR_5->s_fpb);
   }
  }
  FUNC_3(&VAR_9, 0, 0);
 }
 if (FUNC_0(VAR_0) && FUNC_6(VAR_2))
  FUNC_9(VAR_2);
 FUNC_5(VAR_2);
}
