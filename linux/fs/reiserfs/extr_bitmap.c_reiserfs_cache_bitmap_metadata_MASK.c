
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_bitmap_info {scalar_t__ free_count; } ;
struct buffer_head {scalar_t__ b_data; int b_blocknr; scalar_t__ b_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct super_block*,char*,char*,int ) ;
 int FUNC_2 (int ,unsigned long*) ;

void FUNC_3(struct super_block *VAR_1,
                                    struct buffer_head *VAR_2,
                                    struct reiserfs_bitmap_info *VAR_3)
{
 unsigned long *VAR_4 = (unsigned long *)(VAR_2->b_data + VAR_2->b_size);


 if (!FUNC_2(0, (unsigned long *)VAR_2->b_data))
  FUNC_1(VAR_1, "reiserfs-2025", "bitmap block %lu is "
          "corrupted: first bit must be 1", VAR_2->b_blocknr);

 VAR_3->free_count = 0;

 while (--VAR_4 >= (unsigned long *)VAR_2->b_data) {

  if (*VAR_4 == 0)
   VAR_3->free_count += VAR_0;
  else if (*VAR_4 != ~0L)
   VAR_3->free_count += VAR_0 - FUNC_0(*VAR_4);
 }
}
