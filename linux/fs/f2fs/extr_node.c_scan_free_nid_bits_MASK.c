
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {unsigned int nat_blocks; scalar_t__* nid_cnt; int nat_tree_lock; int * free_nid_bitmap; int * free_nid_count; int nat_block_bitmap; } ;
typedef unsigned int nid_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*,unsigned int,int,int) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int ,unsigned int,unsigned int) ;
 int FUNC_4 (struct f2fs_sb_info*) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct f2fs_sb_info *VAR_3)
{
 struct f2fs_nm_info *VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5, VAR_6;
 nid_t VAR_7;

 FUNC_2(&VAR_4->nat_tree_lock);

 for (VAR_5 = 0; VAR_5 < VAR_4->nat_blocks; VAR_5++) {
  if (!FUNC_5(VAR_5, VAR_4->nat_block_bitmap))
   continue;
  if (!VAR_4->free_nid_count[VAR_5])
   continue;
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   VAR_6 = FUNC_3(VAR_4->free_nid_bitmap[VAR_5],
      VAR_2, VAR_6);
   if (VAR_6 >= VAR_2)
    break;

   VAR_7 = VAR_5 * VAR_2 + VAR_6;
   FUNC_1(VAR_3, VAR_7, 1, 0);

   if (VAR_4->nid_cnt[VAR_0] >= VAR_1)
    goto out;
  }
 }
out:
 FUNC_4(VAR_3);

 FUNC_6(&VAR_4->nat_tree_lock);
}
