
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int full_nat_bits; int empty_nat_bits; } ;
struct f2fs_nat_block {TYPE_1__* entries; } ;
typedef int nid_t ;
struct TYPE_2__ {int block_addr; } ;


 int VAR_0 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 struct f2fs_nat_block* FUNC_5 (struct page*) ;

__attribute__((used)) static void FUNC_6(struct f2fs_sb_info *VAR_2, nid_t VAR_3,
      struct page *VAR_4)
{
 struct f2fs_nm_info *VAR_5 = FUNC_0(VAR_2);
 unsigned int VAR_6 = VAR_3 / VAR_0;
 struct f2fs_nat_block *VAR_7 = FUNC_5(VAR_4);
 int VAR_8 = 0;
 int VAR_9 = 0;

 if (!FUNC_3(VAR_2, ((void*)0)))
  return;

 if (VAR_6 == 0) {
  VAR_8 = 1;
  VAR_9 = 1;
 }
 for (; VAR_9 < VAR_0; VAR_9++) {
  if (FUNC_4(VAR_7->entries[VAR_9].block_addr) != VAR_1)
   VAR_8++;
 }
 if (VAR_8 == 0) {
  FUNC_2(VAR_6, VAR_5->empty_nat_bits);
  FUNC_1(VAR_6, VAR_5->full_nat_bits);
  return;
 }

 FUNC_1(VAR_6, VAR_5->empty_nat_bits);
 if (VAR_8 == VAR_0)
  FUNC_2(VAR_6, VAR_5->full_nat_bits);
 else
  FUNC_1(VAR_6, VAR_5->full_nat_bits);
}
