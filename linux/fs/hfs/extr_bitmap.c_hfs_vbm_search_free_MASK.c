
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct TYPE_2__ {scalar_t__ fs_ablocks; int bitmap_lock; int free_ablocks; void* bitmap; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (void*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

u32 FUNC_6(struct super_block *VAR_1, u32 VAR_2, u32 *VAR_3)
{
 void *VAR_4;
 u32 VAR_5;


 if (!*VAR_3)
  return 0;

 FUNC_4(&FUNC_0(VAR_1)->bitmap_lock);
 VAR_4 = FUNC_0(VAR_1)->bitmap;

 VAR_5 = FUNC_3(VAR_4, FUNC_0(VAR_1)->fs_ablocks, VAR_2, VAR_3);
 if (VAR_5 >= FUNC_0(VAR_1)->fs_ablocks) {
  if (VAR_2)
   VAR_5 = FUNC_3(VAR_4, VAR_2, 0, VAR_3);
  if (VAR_5 >= FUNC_0(VAR_1)->fs_ablocks) {
   *VAR_3 = VAR_5 = 0;
   goto out;
  }
 }

 FUNC_2(VAR_0, "alloc_bits: %u,%u\n", VAR_5, *VAR_3);
 FUNC_0(VAR_1)->free_ablocks -= *VAR_3;
 FUNC_1(VAR_1);
out:
 FUNC_5(&FUNC_0(VAR_1)->bitmap_lock);
 return VAR_5;
}
