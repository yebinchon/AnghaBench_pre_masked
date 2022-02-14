
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int * free_nid_count; int * free_nid_bitmap; int nat_block_bitmap; } ;
typedef unsigned int nid_t ;


 unsigned int FUNC_0 (unsigned int) ;
 struct f2fs_nm_info* FUNC_1 (struct f2fs_sb_info*) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 scalar_t__ FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_6(struct f2fs_sb_info *VAR_0, nid_t VAR_1,
       bool VAR_2, bool VAR_3)
{
 struct f2fs_nm_info *VAR_4 = FUNC_1(VAR_0);
 unsigned int VAR_5 = FUNC_0(VAR_1);
 unsigned int VAR_6 = VAR_1 - FUNC_2(VAR_1);

 if (!FUNC_5(VAR_5, VAR_4->nat_block_bitmap))
  return;

 if (VAR_2) {
  if (FUNC_5(VAR_6, VAR_4->free_nid_bitmap[VAR_5]))
   return;
  FUNC_4(VAR_6, VAR_4->free_nid_bitmap[VAR_5]);
  VAR_4->free_nid_count[VAR_5]++;
 } else {
  if (!FUNC_5(VAR_6, VAR_4->free_nid_bitmap[VAR_5]))
   return;
  FUNC_3(VAR_6, VAR_4->free_nid_bitmap[VAR_5]);
  if (!VAR_3)
   VAR_4->free_nid_count[VAR_5]--;
 }
}
