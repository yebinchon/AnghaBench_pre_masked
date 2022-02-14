
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int s_blocksize_bits; } ;
struct kmem_cache {int dummy; } ;
struct ext4_sb_info {size_t s_group_info_size; int * s_group_info; TYPE_1__* s_buddy_cache; } ;
struct ext4_group_desc {int dummy; } ;
typedef size_t ext4_group_t ;
struct TYPE_6__ {scalar_t__ i_disksize; } ;
struct TYPE_5__ {int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 struct ext4_group_desc* FUNC_3 (struct super_block*,size_t,int *) ;
 int FUNC_4 (struct super_block*,size_t) ;
 size_t FUNC_5 (struct super_block*) ;
 scalar_t__ FUNC_6 (struct super_block*,size_t,struct ext4_group_desc*) ;
 int FUNC_7 (struct super_block*,size_t) ;
 int FUNC_8 (struct super_block*,int ,char*,...) ;
 struct kmem_cache* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct kmem_cache*,int ) ;
 int FUNC_13 (int *) ;
 TYPE_1__* FUNC_14 (struct super_block*) ;

__attribute__((used)) static int FUNC_15(struct super_block *VAR_3)
{
 ext4_group_t VAR_4 = FUNC_5(VAR_3);
 ext4_group_t VAR_5;
 struct ext4_sb_info *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;
 struct ext4_group_desc *VAR_8;
 struct kmem_cache *VAR_9;

 VAR_7 = FUNC_7(VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_6->s_buddy_cache = FUNC_14(VAR_3);
 if (VAR_6->s_buddy_cache == ((void*)0)) {
  FUNC_8(VAR_3, VAR_2, "can't get new inode");
  goto err_freesgi;
 }




 VAR_6->s_buddy_cache->i_ino = VAR_1;
 FUNC_0(VAR_6->s_buddy_cache)->i_disksize = 0;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_2();
  VAR_8 = FUNC_3(VAR_3, VAR_5, ((void*)0));
  if (VAR_8 == ((void*)0)) {
   FUNC_8(VAR_3, VAR_2, "can't read descriptor %u", VAR_5);
   goto err_freebuddy;
  }
  if (FUNC_6(VAR_3, VAR_5, VAR_8) != 0)
   goto err_freebuddy;
 }

 return 0;

err_freebuddy:
 VAR_9 = FUNC_9(VAR_3->s_blocksize_bits);
 while (VAR_5-- > 0)
  FUNC_12(VAR_9, FUNC_4(VAR_3, VAR_5));
 VAR_5 = VAR_6->s_group_info_size;
 while (VAR_5-- > 0)
  FUNC_11(VAR_6->s_group_info[VAR_5]);
 FUNC_10(VAR_6->s_buddy_cache);
err_freesgi:
 FUNC_13(VAR_6->s_group_info);
 return -VAR_0;
}
