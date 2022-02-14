
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct hfsplus_sb_info {scalar_t__ total_blocks; int alloc_mutex; int free_blocks; TYPE_1__* alloc_file; } ;
struct address_space {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hfsplus_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct super_block*) ;
 int * FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ) ;
 struct page* FUNC_11 (struct address_space*,scalar_t__,int *) ;
 int FUNC_12 (struct page*) ;

int FUNC_13(struct super_block *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct hfsplus_sb_info *VAR_7 = FUNC_0(VAR_4);
 struct page *VAR_8;
 struct address_space *VAR_9;
 __be32 *VAR_10, *VAR_11, *VAR_12;
 u32 VAR_13, VAR_14, VAR_15;
 int VAR_16;


 if (!VAR_6)
  return 0;

 FUNC_4(VAR_0, "block_free: %u,%u\n", VAR_5, VAR_6);

 if ((VAR_5 + VAR_6) > VAR_7->total_blocks)
  return -VAR_2;

 FUNC_8(&VAR_7->alloc_mutex);
 VAR_9 = VAR_7->alloc_file->i_mapping;
 VAR_15 = VAR_5 / VAR_3;
 VAR_8 = FUNC_11(VAR_9, VAR_15, ((void*)0));
 if (FUNC_1(VAR_8))
  goto kaboom;
 VAR_10 = FUNC_6(VAR_8);
 VAR_11 = VAR_10 + (VAR_5 & (VAR_3 - 1)) / 32;
 VAR_12 = VAR_10 + VAR_3 / 32;
 VAR_14 = VAR_6;


 VAR_16 = VAR_5 % 32;
 if (VAR_16) {
  int VAR_17 = 32 - VAR_16;
  VAR_13 = 0xffffffffU << VAR_17;
  if (VAR_17 > VAR_6) {
   VAR_13 |= 0xffffffffU >> (VAR_16 + VAR_6);
   *VAR_11++ &= FUNC_3(VAR_13);
   goto out;
  }
  *VAR_11++ &= FUNC_3(VAR_13);
  VAR_6 -= VAR_17;
 }


 while (1) {
  while (VAR_11 < VAR_12) {
   if (VAR_6 < 32)
    goto done;
   *VAR_11++ = 0;
   VAR_6 -= 32;
  }
  if (!VAR_6)
   break;
  FUNC_12(VAR_8);
  FUNC_7(VAR_8);
  VAR_8 = FUNC_11(VAR_9, ++VAR_15, ((void*)0));
  if (FUNC_1(VAR_8))
   goto kaboom;
  VAR_10 = FUNC_6(VAR_8);
  VAR_11 = VAR_10;
  VAR_12 = VAR_10 + VAR_3 / 32;
 }
done:

 if (VAR_6) {
  VAR_13 = 0xffffffffU >> VAR_6;
  *VAR_11 &= FUNC_3(VAR_13);
 }
out:
 FUNC_12(VAR_8);
 FUNC_7(VAR_8);
 VAR_7->free_blocks += VAR_14;
 FUNC_5(VAR_4);
 FUNC_9(&VAR_7->alloc_mutex);

 return 0;

kaboom:
 FUNC_10("unable to mark blocks free: error %ld\n", FUNC_2(VAR_8));
 FUNC_9(&VAR_7->alloc_mutex);

 return -VAR_1;
}
