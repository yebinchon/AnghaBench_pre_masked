
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fatent_operations {int (* ent_set_ptr ) (struct fat_entry*,int) ;} ;
struct fat_entry {int nr_bhs; int * bhs; int fat_inode; } ;
typedef scalar_t__ sector_t ;
typedef int llu ;
struct TYPE_2__ {scalar_t__ fat_start; int fat_inode; struct fatent_operations* fatent_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct super_block*,int ,char*,int ) ;
 int FUNC_3 (struct super_block*,scalar_t__) ;
 int FUNC_4 (struct fat_entry*,int) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_2, struct fat_entry *VAR_3,
    int VAR_4, sector_t VAR_5)
{
 const struct fatent_operations *VAR_6 = FUNC_0(VAR_2)->fatent_ops;

 FUNC_1(VAR_5 < FUNC_0(VAR_2)->fat_start);
 VAR_3->fat_inode = FUNC_0(VAR_2)->fat_inode;
 VAR_3->bhs[0] = FUNC_3(VAR_2, VAR_5);
 if (!VAR_3->bhs[0]) {
  FUNC_2(VAR_2, VAR_1, "FAT read failed (blocknr %llu)",
         (llu)VAR_5);
  return -VAR_0;
 }
 VAR_3->nr_bhs = 1;
 VAR_6->ent_set_ptr(VAR_3, VAR_4);
 return 0;
}
