
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ufs_sb_private_info {int s_bshift; int s_apb; int s_bsize; } ;
struct ufs_inode_info {int truncate_mutex; int meta_lock; int i_lastfrag; } ;
struct ufs_buffer_head {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
typedef int sector_t ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 struct ufs_inode_info* FUNC_0 (struct inode*) ;
 unsigned int VAR_1 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct inode*,unsigned int,struct ufs_buffer_head*,int) ;
 int FUNC_3 (struct inode*,scalar_t__,unsigned int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct ufs_buffer_head* FUNC_9 (struct super_block*,scalar_t__,int ) ;
 void* FUNC_10 (struct ufs_sb_private_info*,struct ufs_buffer_head*,int ) ;
 int FUNC_11 (struct inode*,int,unsigned int*) ;
 int FUNC_12 (struct ufs_sb_private_info*,void*) ;
 scalar_t__ FUNC_13 (struct super_block*,void*) ;
 void* FUNC_14 (struct ufs_sb_private_info*,struct ufs_inode_info*,unsigned int) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(struct inode *VAR_3)
{
 struct ufs_inode_info *VAR_4 = FUNC_0(VAR_3);
 struct super_block *VAR_5 = VAR_3->i_sb;
 struct ufs_sb_private_info *VAR_6 = FUNC_1(VAR_5)->s_uspi;
 unsigned VAR_7[4];
 int VAR_8;
 int VAR_9;
 unsigned VAR_10;
 struct ufs_buffer_head *VAR_11[3];
 void *VAR_12;
 u64 VAR_13;

 if (VAR_3->i_size) {
  sector_t VAR_14 = (VAR_3->i_size - 1) >> VAR_6->s_bshift;
  VAR_8 = FUNC_11(VAR_3, VAR_14, VAR_7);
  if (!VAR_8)
   return;
 } else {
  VAR_8 = 1;
 }

 for (VAR_9 = VAR_8 - 1; VAR_9; VAR_9--)
  if (VAR_7[VAR_9] != VAR_6->s_apb - 1)
   break;

 FUNC_5(&VAR_4->truncate_mutex);
 if (VAR_8 == 1) {
  FUNC_15(VAR_3);
  VAR_7[0] = VAR_1;
 } else {

  VAR_12 = FUNC_14(VAR_6, VAR_4, VAR_7[0]++);
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
   VAR_13 = FUNC_13(VAR_5, VAR_12);
   if (!VAR_13)
    break;
   VAR_11[VAR_10] = FUNC_9(VAR_5, VAR_13, VAR_6->s_bsize);
   if (!VAR_11[VAR_10]) {
    FUNC_16(&VAR_4->meta_lock);
    FUNC_12(VAR_6, VAR_12);
    FUNC_17(&VAR_4->meta_lock);
    break;
   }
   VAR_12 = FUNC_10(VAR_6, VAR_11[VAR_10], VAR_7[VAR_10 + 1]++);
  }
  while (VAR_10--)
   FUNC_2(VAR_3, VAR_7[VAR_10 + 1], VAR_11[VAR_10], VAR_8 - VAR_10 - 1);
 }
 for (VAR_10 = VAR_7[0]; VAR_10 <= VAR_2; VAR_10++) {
  VAR_12 = FUNC_14(VAR_6, VAR_4, VAR_10);
  VAR_13 = FUNC_13(VAR_5, VAR_12);
  if (VAR_13) {
   FUNC_16(&VAR_4->meta_lock);
   FUNC_12(VAR_6, VAR_12);
   FUNC_17(&VAR_4->meta_lock);
   FUNC_3(VAR_3, VAR_13, VAR_10 - VAR_1 + 1);
  }
 }
 FUNC_7(&VAR_4->meta_lock);
 VAR_4->i_lastfrag = VAR_0;
 FUNC_8(&VAR_4->meta_lock);
 FUNC_4(VAR_3);
 FUNC_6(&VAR_4->truncate_mutex);
}
