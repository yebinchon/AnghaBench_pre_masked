
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct super_block {int s_blocksize; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {scalar_t__ fs_blocks; int alloc_blocks; int first_blocks; int cached_start; int phys_size; int extents_lock; int cached_extents; int first_extents; } ;
struct TYPE_3__ {int fs_div; scalar_t__ fs_start; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct buffer_head*,struct super_block*,scalar_t__) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct buffer_head*) ;

int FUNC_11(struct inode *VAR_1, sector_t VAR_2,
    struct buffer_head *VAR_3, int VAR_4)
{
 struct super_block *VAR_5;
 u16 VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = VAR_1->i_sb;

 VAR_7 = (u32)VAR_2 / FUNC_1(VAR_5)->fs_div;

 if (VAR_2 >= FUNC_0(VAR_1)->fs_blocks) {
  if (!VAR_4)
   return 0;
  if (VAR_2 > FUNC_0(VAR_1)->fs_blocks)
   return -VAR_0;
  if (VAR_7 >= FUNC_0(VAR_1)->alloc_blocks) {
   VAR_8 = FUNC_4(VAR_1);
   if (VAR_8)
    return VAR_8;
  }
 } else
  VAR_4 = 0;

 if (VAR_7 < FUNC_0(VAR_1)->first_blocks) {
  VAR_6 = FUNC_2(FUNC_0(VAR_1)->first_extents, VAR_7);
  goto done;
 }

 FUNC_8(&FUNC_0(VAR_1)->extents_lock);
 VAR_8 = FUNC_3(VAR_1, VAR_7);
 if (!VAR_8)
  VAR_6 = FUNC_2(FUNC_0(VAR_1)->cached_extents,
         VAR_7 - FUNC_0(VAR_1)->cached_start);
 else {
  FUNC_9(&FUNC_0(VAR_1)->extents_lock);
  return -VAR_0;
 }
 FUNC_9(&FUNC_0(VAR_1)->extents_lock);

done:
 FUNC_6(VAR_3, VAR_5, FUNC_1(VAR_5)->fs_start +
        VAR_6 * FUNC_1(VAR_5)->fs_div +
        (u32)VAR_2 % FUNC_1(VAR_5)->fs_div);

 if (VAR_4) {
  FUNC_10(VAR_3);
  FUNC_0(VAR_1)->phys_size += VAR_5->s_blocksize;
  FUNC_0(VAR_1)->fs_blocks++;
  FUNC_5(VAR_1, VAR_5->s_blocksize);
  FUNC_7(VAR_1);
 }
 return 0;
}
