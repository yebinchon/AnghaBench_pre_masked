
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct reiserfs_list_bitmap {TYPE_1__** bitmaps; } ;
typedef int b_blocknr_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (unsigned int,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_0,
      b_blocknr_t VAR_1,
      struct reiserfs_list_bitmap *VAR_2)
{
 unsigned int VAR_3 = VAR_1 / (VAR_0->s_blocksize << 3);
 unsigned int VAR_4 = VAR_1 % (VAR_0->s_blocksize << 3);

 if (!VAR_2->bitmaps[VAR_3]) {
  VAR_2->bitmaps[VAR_3] = FUNC_0(VAR_0);
 }
 FUNC_1(VAR_4, (unsigned long *)VAR_2->bitmaps[VAR_3]->data);
 return 0;
}
