
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct hfsplus_sb_info {int free_blocks; int alloc_mutex; TYPE_1__* alloc_file; } ;
struct address_space {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 struct hfsplus_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct super_block*) ;
 int* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct page* FUNC_11 (struct address_space*,int,int *) ;
 int FUNC_12 (struct page*) ;

int FUNC_13(struct super_block *VAR_2, u32 VAR_3,
  u32 VAR_4, u32 *VAR_5)
{
 struct hfsplus_sb_info *VAR_6 = FUNC_0(VAR_2);
 struct page *VAR_7;
 struct address_space *VAR_8;
 __be32 *VAR_9, *VAR_10, *VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 __be32 VAR_16;
 int VAR_17;

 VAR_14 = *VAR_5;
 if (!VAR_14)
  return VAR_3;

 FUNC_4(VAR_0, "block_allocate: %u,%u,%u\n", VAR_3, VAR_4, VAR_14);
 FUNC_9(&VAR_6->alloc_mutex);
 VAR_8 = VAR_6->alloc_file->i_mapping;
 VAR_7 = FUNC_11(VAR_8, VAR_4 / VAR_1, ((void*)0));
 if (FUNC_1(VAR_7)) {
  VAR_13 = VAR_3;
  goto out;
 }
 VAR_9 = FUNC_6(VAR_7);
 VAR_10 = VAR_9 + (VAR_4 & (VAR_1 - 1)) / 32;
 VAR_17 = VAR_4 % 32;
 VAR_4 &= ~(VAR_1 - 1);
 if ((VAR_3 ^ VAR_4) / VAR_1)
  VAR_11 = VAR_9 + VAR_1 / 32;
 else
  VAR_11 = VAR_9 + ((VAR_3 + 31) & (VAR_1 - 1)) / 32;


 VAR_16 = *VAR_10;
 if (~VAR_16) {
  VAR_15 = FUNC_2(VAR_16);
  VAR_12 = (1U << 31) >> VAR_17;
  for (; VAR_17 < 32; VAR_12 >>= 1, VAR_17++) {
   if (!(VAR_15 & VAR_12))
    goto found;
  }
 }
 VAR_10++;


 while (1) {
  while (VAR_10 < VAR_11) {
   VAR_16 = *VAR_10;
   if (~VAR_16) {
    VAR_15 = FUNC_2(VAR_16);
    VAR_12 = 1 << 31;
    for (VAR_17 = 0; VAR_17 < 32; VAR_12 >>= 1, VAR_17++) {
     if (!(VAR_15 & VAR_12))
      goto found;
    }
   }
   VAR_10++;
  }
  FUNC_7(VAR_7);
  VAR_4 += VAR_1;
  if (VAR_4 >= VAR_3)
   break;
  VAR_7 = FUNC_11(VAR_8, VAR_4 / VAR_1,
      ((void*)0));
  if (FUNC_1(VAR_7)) {
   VAR_13 = VAR_3;
   goto out;
  }
  VAR_10 = VAR_9 = FUNC_6(VAR_7);
  if ((VAR_3 ^ VAR_4) / VAR_1)
   VAR_11 = VAR_9 + VAR_1 / 32;
  else
   VAR_11 = VAR_9 + ((VAR_3 + 31) & (VAR_1 - 1)) / 32;
 }
 FUNC_4(VAR_0, "bitmap full\n");
 VAR_13 = VAR_3;
 goto out;

found:
 VAR_13 = VAR_4 + (VAR_10 - VAR_9) * 32 + VAR_17;
 if (VAR_13 >= VAR_3) {
  FUNC_4(VAR_0, "bitmap full\n");
  goto out;
 }

 VAR_14 = FUNC_8(VAR_3 - VAR_13, VAR_14);
 while (1) {
  VAR_15 |= VAR_12;
  if (++VAR_17 >= 32)
   break;
  VAR_12 >>= 1;
  if (!--VAR_14 || VAR_15 & VAR_12)
   goto done;
 }
 if (!--VAR_14)
  goto done;
 *VAR_10++ = FUNC_3(VAR_15);

 while (1) {
  while (VAR_10 < VAR_11) {
   VAR_15 = FUNC_2(*VAR_10);
   if (VAR_14 < 32)
    goto last;
   if (VAR_15) {
    VAR_14 = 32;
    goto last;
   }
   *VAR_10++ = FUNC_3(0xffffffff);
   VAR_14 -= 32;
  }
  FUNC_12(VAR_7);
  FUNC_7(VAR_7);
  VAR_4 += VAR_1;
  VAR_7 = FUNC_11(VAR_8, VAR_4 / VAR_1,
      ((void*)0));
  if (FUNC_1(VAR_7)) {
   VAR_13 = VAR_3;
   goto out;
  }
  VAR_9 = FUNC_6(VAR_7);
  VAR_10 = VAR_9;
  VAR_11 = VAR_9 + VAR_1 / 32;
 }
last:

 VAR_12 = 1U << 31;
 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
  if (VAR_15 & VAR_12)
   break;
  VAR_15 |= VAR_12;
  VAR_12 >>= 1;
 }
done:
 *VAR_10 = FUNC_3(VAR_15);
 FUNC_12(VAR_7);
 FUNC_7(VAR_7);
 *VAR_5 = VAR_4 + (VAR_10 - VAR_9) * 32 + VAR_17 - VAR_13;
 VAR_6->free_blocks -= *VAR_5;
 FUNC_5(VAR_2);
 FUNC_4(VAR_0, "-> %u,%u\n", VAR_13, *VAR_5);
out:
 FUNC_10(&VAR_6->alloc_mutex);
 return VAR_13;
}
