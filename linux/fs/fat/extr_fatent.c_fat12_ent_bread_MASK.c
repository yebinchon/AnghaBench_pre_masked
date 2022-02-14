
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct fat_entry {int nr_bhs; int fat_inode; struct buffer_head** bhs; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef int llu ;
struct TYPE_2__ {scalar_t__ fat_start; int fat_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct fat_entry*,int) ;
 int FUNC_4 (struct super_block*,int ,char*,int ) ;
 struct buffer_head* FUNC_5 (struct super_block*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_2, struct fat_entry *VAR_3,
      int VAR_4, sector_t VAR_5)
{
 struct buffer_head **VAR_6 = VAR_3->bhs;

 FUNC_1(VAR_5 < FUNC_0(VAR_2)->fat_start);
 VAR_3->fat_inode = FUNC_0(VAR_2)->fat_inode;

 VAR_6[0] = FUNC_5(VAR_2, VAR_5);
 if (!VAR_6[0])
  goto err;

 if ((VAR_4 + 1) < VAR_2->s_blocksize)
  VAR_3->nr_bhs = 1;
 else {

  VAR_5++;
  VAR_6[1] = FUNC_5(VAR_2, VAR_5);
  if (!VAR_6[1])
   goto err_brelse;
  VAR_3->nr_bhs = 2;
 }
 FUNC_3(VAR_3, VAR_4);
 return 0;

err_brelse:
 FUNC_2(VAR_6[0]);
err:
 FUNC_4(VAR_2, VAR_1, "FAT read failed (blocknr %llu)", (llu)VAR_5);
 return -VAR_0;
}
