
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int max_nid; int nid_list_lock; int nat_block_bitmap; } ;
struct f2fs_nat_block {TYPE_1__* entries; } ;
typedef int nid_t ;
typedef scalar_t__ block_t ;
struct TYPE_2__ {int block_addr; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct f2fs_nm_info* FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,int,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 struct f2fs_nat_block* FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct f2fs_sb_info*,int,int,int) ;

__attribute__((used)) static int FUNC_10(struct f2fs_sb_info *VAR_4,
   struct page *VAR_5, nid_t VAR_6)
{
 struct f2fs_nm_info *VAR_7 = FUNC_1(VAR_4);
 struct f2fs_nat_block *VAR_8 = FUNC_5(VAR_5);
 block_t VAR_9;
 unsigned int VAR_10 = FUNC_0(VAR_6);
 int VAR_11;

 FUNC_2(VAR_10, VAR_7->nat_block_bitmap);

 VAR_11 = VAR_6 % VAR_1;

 for (; VAR_11 < VAR_1; VAR_11++, VAR_6++) {
  if (FUNC_8(VAR_6 >= VAR_7->max_nid))
   break;

  VAR_9 = FUNC_4(VAR_8->entries[VAR_11].block_addr);

  if (VAR_9 == VAR_2)
   return -VAR_0;

  if (VAR_9 == VAR_3) {
   FUNC_3(VAR_4, VAR_6, 1, 1);
  } else {
   FUNC_6(&FUNC_1(VAR_4)->nid_list_lock);
   FUNC_9(VAR_4, VAR_6, 0, 1);
   FUNC_7(&FUNC_1(VAR_4)->nid_list_lock);
  }
 }

 return 0;
}
