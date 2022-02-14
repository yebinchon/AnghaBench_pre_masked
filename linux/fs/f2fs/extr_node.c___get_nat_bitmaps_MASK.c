
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {scalar_t__ blocks_per_seg; } ;
struct f2fs_nm_info {unsigned int nat_blocks; unsigned int nat_bits_blocks; scalar_t__ full_nat_bits; scalar_t__ empty_nat_bits; scalar_t__ nat_bits; } ;
struct f2fs_checkpoint {int dummy; } ;
typedef scalar_t__ block_t ;
typedef int __u64 ;
typedef scalar_t__ __le64 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (unsigned int) ;
 struct f2fs_checkpoint* FUNC_1 (struct f2fs_sb_info*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct page*) ;
 struct f2fs_nm_info* FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct f2fs_checkpoint*) ;
 int FUNC_8 (struct f2fs_checkpoint*) ;
 int FUNC_9 (struct f2fs_sb_info*,int) ;
 int FUNC_10 (struct f2fs_sb_info*,int *) ;
 struct page* FUNC_11 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_12 (struct f2fs_sb_info*,unsigned int,int ) ;
 int FUNC_13 (struct f2fs_sb_info*,char*) ;
 int FUNC_14 (struct page*,int) ;
 int FUNC_15 (scalar_t__,int ,int ) ;
 int FUNC_16 (struct page*) ;

__attribute__((used)) static int FUNC_17(struct f2fs_sb_info *VAR_5)
{
 struct f2fs_checkpoint *VAR_6 = FUNC_1(VAR_5);
 struct f2fs_nm_info *VAR_7 = FUNC_3(VAR_5);
 unsigned int VAR_8 = VAR_7->nat_blocks / VAR_0;
 unsigned int VAR_9;
 __u64 VAR_10 = FUNC_8(VAR_6);
 block_t VAR_11;

 if (!FUNC_10(VAR_5, ((void*)0)))
  return 0;

 VAR_7->nat_bits_blocks = FUNC_0((VAR_8 << 1) + 8);
 VAR_7->nat_bits = FUNC_12(VAR_5,
   VAR_7->nat_bits_blocks << VAR_3, VAR_4);
 if (!VAR_7->nat_bits)
  return -VAR_1;

 VAR_11 = FUNC_5(VAR_5) + VAR_5->blocks_per_seg -
      VAR_7->nat_bits_blocks;
 for (VAR_9 = 0; VAR_9 < VAR_7->nat_bits_blocks; VAR_9++) {
  struct page *VAR_12;

  VAR_12 = FUNC_11(VAR_5, VAR_11++);
  if (FUNC_2(VAR_12))
   return FUNC_4(VAR_12);

  FUNC_15(VAR_7->nat_bits + (VAR_9 << VAR_3),
     FUNC_16(VAR_12), VAR_2);
  FUNC_14(VAR_12, 1);
 }

 VAR_10 |= (FUNC_7(VAR_6) << 32);
 if (FUNC_6(VAR_10) != *(__le64 *)VAR_7->nat_bits) {
  FUNC_9(VAR_5, 1);
  return 0;
 }

 VAR_7->full_nat_bits = VAR_7->nat_bits + 8;
 VAR_7->empty_nat_bits = VAR_7->full_nat_bits + VAR_8;

 FUNC_13(VAR_5, "Found nat_bits in checkpoint");
 return 0;
}
