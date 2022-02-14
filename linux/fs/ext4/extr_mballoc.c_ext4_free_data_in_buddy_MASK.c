
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_3__ {int rb_node; } ;
struct ext4_group_info {TYPE_1__ bb_free_root; } ;
struct ext4_free_data {int efd_count; int efd_group; int efd_start_cluster; int efd_node; } ;
struct ext4_buddy {int bd_bitmap_page; int bd_buddy_page; struct ext4_group_info* bd_info; } ;
struct TYPE_4__ {int s_mb_free_pending; int s_md_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ext4_group_info*) ;
 TYPE_2__* FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct super_block*,int ,struct ext4_buddy*) ;
 int FUNC_5 (struct ext4_buddy*) ;
 int FUNC_6 (struct super_block*,int ) ;
 int FUNC_7 (int ,struct ext4_free_data*) ;
 int FUNC_8 (int,char*,int,int,...) ;
 int FUNC_9 (int *,struct ext4_buddy*,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct super_block*,int ) ;

__attribute__((used)) static void FUNC_15(struct super_block *VAR_2,
        struct ext4_free_data *VAR_3)
{
 struct ext4_buddy VAR_4;
 struct ext4_group_info *VAR_5;
 int VAR_6, VAR_7 = 0, VAR_8 = 0;

 FUNC_8(1, "gonna free %u blocks in group %u (0x%p):",
   VAR_3->efd_count, VAR_3->efd_group, VAR_3);

 VAR_6 = FUNC_4(VAR_2, VAR_3->efd_group, &VAR_4);

 FUNC_0(VAR_6 != 0);

 FUNC_12(&FUNC_2(VAR_2)->s_md_lock);
 FUNC_2(VAR_2)->s_mb_free_pending -= VAR_3->efd_count;
 FUNC_13(&FUNC_2(VAR_2)->s_md_lock);

 VAR_5 = VAR_4.bd_info;

 VAR_7 += VAR_3->efd_count;
 VAR_8++;
 FUNC_3(VAR_2, VAR_3->efd_group);

 FUNC_11(&VAR_3->efd_node, &(VAR_5->bb_free_root));
 FUNC_9(((void*)0), &VAR_4, VAR_3->efd_start_cluster, VAR_3->efd_count);







 if (!FUNC_14(VAR_2, VAR_0))
  FUNC_1(VAR_5);

 if (!VAR_5->bb_free_root.rb_node) {



  FUNC_10(VAR_4.bd_buddy_page);
  FUNC_10(VAR_4.bd_bitmap_page);
 }
 FUNC_6(VAR_2, VAR_3->efd_group);
 FUNC_7(VAR_1, VAR_3);
 FUNC_5(&VAR_4);

 FUNC_8(1, "freed %u blocks in %u structures\n", VAR_7, VAR_8);
}
