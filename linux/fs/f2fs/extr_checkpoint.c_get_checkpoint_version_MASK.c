
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_checkpoint {int checksum_offset; } ;
typedef int block_t ;
typedef scalar_t__ __u32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct f2fs_checkpoint*) ;
 unsigned long long FUNC_3 (struct f2fs_checkpoint*) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*,struct f2fs_checkpoint*) ;
 struct page* FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct page*,int) ;
 int FUNC_7 (struct f2fs_sb_info*,char*,...) ;
 size_t FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct page*) ;

__attribute__((used)) static int FUNC_10(struct f2fs_sb_info *VAR_3, block_t VAR_4,
  struct f2fs_checkpoint **VAR_5, struct page **VAR_6,
  unsigned long long *VAR_7)
{
 size_t VAR_8 = 0;
 __u32 VAR_9;

 *VAR_6 = FUNC_5(VAR_3, VAR_4);
 if (FUNC_0(*VAR_6))
  return FUNC_1(*VAR_6);

 *VAR_5 = (struct f2fs_checkpoint *)FUNC_9(*VAR_6);

 VAR_8 = FUNC_8((*VAR_5)->checksum_offset);
 if (VAR_8 < VAR_1 ||
   VAR_8 > VAR_0) {
  FUNC_6(*VAR_6, 1);
  FUNC_7(VAR_3, "invalid crc_offset: %zu", VAR_8);
  return -VAR_2;
 }

 VAR_9 = FUNC_4(VAR_3, *VAR_5);
 if (VAR_9 != FUNC_2(*VAR_5)) {
  FUNC_6(*VAR_6, 1);
  FUNC_7(VAR_3, "invalid crc value");
  return -VAR_2;
 }

 *VAR_7 = FUNC_3(*VAR_5);
 return 0;
}
