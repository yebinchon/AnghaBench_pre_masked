
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ufs_sb_private_info {unsigned int s_apb; int s_fpb; int s_bsize; } ;
struct ufs_buffer_head {int dummy; } ;
struct to_free {struct inode* inode; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct to_free*,scalar_t__,int ) ;
 int FUNC_2 (struct ufs_buffer_head*) ;
 struct ufs_buffer_head* FUNC_3 (struct super_block*,scalar_t__,int ) ;
 void* FUNC_4 (struct ufs_sb_private_info*,struct ufs_buffer_head*,unsigned int) ;
 scalar_t__ FUNC_5 (struct super_block*,void*) ;
 int FUNC_6 (struct inode*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_0, u64 VAR_1, int VAR_2)
{
 struct super_block *VAR_3 = VAR_0->i_sb;
 struct ufs_sb_private_info *VAR_4 = FUNC_0(VAR_3)->s_uspi;
 struct ufs_buffer_head *VAR_5 = FUNC_3(VAR_3, VAR_1, VAR_4->s_bsize);
 unsigned VAR_6;

 if (!VAR_5)
  return;

 if (--VAR_2) {
  for (VAR_6 = 0; VAR_6 < VAR_4->s_apb; VAR_6++) {
   void *VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6);
   u64 VAR_8 = FUNC_5(VAR_3, VAR_7);
   if (VAR_8)
    FUNC_7(VAR_0, VAR_8, VAR_2);
  }
 } else {
  struct to_free VAR_9 = {.inode = VAR_0};

  for (VAR_6 = 0; VAR_6 < VAR_4->s_apb; VAR_6++) {
   void *VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_6);
   u64 VAR_11 = FUNC_5(VAR_3, VAR_10);
   if (VAR_11)
    FUNC_1(&VAR_9, VAR_11, VAR_4->s_fpb);
  }
  FUNC_1(&VAR_9, 0, 0);
 }

 FUNC_2(VAR_5);
 FUNC_6(VAR_0, VAR_1, VAR_4->s_fpb);
}
