
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct kmem_cache {int dummy; } ;
struct ext4_sb_info {struct ext4_group_info*** s_group_info; } ;
struct ext4_group_info {int bb_largest_free_order; int * bb_bitmap; int bb_free_root; int alloc_sem; int bb_prealloc_list; int bb_free; int bb_state; } ;
struct ext4_group_desc {int bg_flags; } ;
struct buffer_head {int b_data; } ;
typedef size_t ext4_group_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (struct super_block*) ;
 size_t FUNC_2 (struct super_block*) ;
 int VAR_2 ;
 struct ext4_sb_info* FUNC_3 (struct super_block*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct super_block*,size_t,struct ext4_group_desc*) ;
 int FUNC_8 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct super_block*,int ,char*) ;
 struct buffer_head* FUNC_11 (struct super_block*,size_t) ;
 struct kmem_cache* FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ext4_group_info**) ;
 void* FUNC_15 (int,int ) ;
 struct ext4_group_info* FUNC_16 (struct kmem_cache*,int ) ;
 int FUNC_17 (int *,int ,int) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (int ,int *) ;

int FUNC_20(struct super_block *VAR_6, ext4_group_t VAR_7,
     struct ext4_group_desc *VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;
 struct ext4_sb_info *VAR_11 = FUNC_3(VAR_6);
 struct ext4_group_info **VAR_12;
 struct kmem_cache *VAR_13 = FUNC_12(VAR_6->s_blocksize_bits);






 if (VAR_7 % FUNC_1(VAR_6) == 0) {
  VAR_10 = sizeof(*VAR_12) <<
   FUNC_2(VAR_6);
  VAR_12 = FUNC_15(VAR_10, VAR_3);
  if (VAR_12 == ((void*)0)) {
   FUNC_10(VAR_6, VAR_4, "can't allocate mem "
     "for a buddy group");
   goto exit_meta_group_info;
  }
  VAR_11->s_group_info[VAR_7 >> FUNC_2(VAR_6)] =
   VAR_12;
 }

 VAR_12 =
  VAR_11->s_group_info[VAR_7 >> FUNC_2(VAR_6)];
 VAR_9 = VAR_7 & (FUNC_1(VAR_6) - 1);

 VAR_12[VAR_9] = FUNC_16(VAR_13, VAR_3);
 if (VAR_12[VAR_9] == ((void*)0)) {
  FUNC_10(VAR_6, VAR_4, "can't allocate buddy mem");
  goto exit_group_info;
 }
 FUNC_19(VAR_2,
  &(VAR_12[VAR_9]->bb_state));





 if (FUNC_9(VAR_6) &&
     (VAR_8->bg_flags & FUNC_6(VAR_1))) {
  VAR_12[VAR_9]->bb_free =
   FUNC_7(VAR_6, VAR_7, VAR_8);
 } else {
  VAR_12[VAR_9]->bb_free =
   FUNC_8(VAR_6, VAR_8);
 }

 FUNC_4(&VAR_12[VAR_9]->bb_prealloc_list);
 FUNC_13(&VAR_12[VAR_9]->alloc_sem);
 VAR_12[VAR_9]->bb_free_root = VAR_5;
 VAR_12[VAR_9]->bb_largest_free_order = -1;
 return 0;

exit_group_info:

 if (VAR_7 % FUNC_1(VAR_6) == 0) {
  FUNC_14(VAR_11->s_group_info[VAR_7 >> FUNC_2(VAR_6)]);
  VAR_11->s_group_info[VAR_7 >> FUNC_2(VAR_6)] = ((void*)0);
 }
exit_meta_group_info:
 return -VAR_0;
}
