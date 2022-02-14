
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {unsigned int nat_blocks; int nat_block_bitmap; int full_nat_bits; int nid_list_lock; int empty_nat_bits; } ;
typedef unsigned int nid_t ;


 unsigned int VAR_0 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct f2fs_sb_info*,int *) ;
 unsigned int FUNC_3 (int ,unsigned int,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct f2fs_sb_info*,unsigned int,int,int) ;

__attribute__((used)) static inline void FUNC_7(struct f2fs_sb_info *VAR_1)
{
 struct f2fs_nm_info *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3 = 0;
 nid_t VAR_4, VAR_5;

 if (!FUNC_2(VAR_1, ((void*)0)))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->nat_blocks; VAR_3++) {
  VAR_3 = FUNC_3(VAR_2->empty_nat_bits, VAR_2->nat_blocks, VAR_3);
  if (VAR_3 >= VAR_2->nat_blocks)
   break;

  FUNC_1(VAR_3, VAR_2->nat_block_bitmap);

  VAR_4 = VAR_3 * VAR_0;
  VAR_5 = VAR_4 + VAR_0;

  FUNC_4(&FUNC_0(VAR_1)->nid_list_lock);
  for (; VAR_4 < VAR_5; VAR_4++)
   FUNC_6(VAR_1, VAR_4, 1, 1);
  FUNC_5(&FUNC_0(VAR_1)->nid_list_lock);
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->nat_blocks; VAR_3++) {
  VAR_3 = FUNC_3(VAR_2->full_nat_bits, VAR_2->nat_blocks, VAR_3);
  if (VAR_3 >= VAR_2->nat_blocks)
   break;

  FUNC_1(VAR_3, VAR_2->nat_block_bitmap);
 }
}
