
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_ctime; } ;
struct ext2_block_alloc_info {long last_alloc_logical_block; void* last_alloc_physical_block; } ;
typedef void* ext2_fsblk_t ;
struct TYPE_5__ {struct ext2_block_alloc_info* i_block_alloc_info; } ;
struct TYPE_4__ {scalar_t__ bh; int key; int * p; } ;
typedef TYPE_1__ Indirect ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,struct inode*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_0,
   long VAR_1, Indirect *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 struct ext2_block_alloc_info *VAR_6;
 ext2_fsblk_t VAR_7;

 VAR_6 = FUNC_0(VAR_0)->i_block_alloc_info;




 *VAR_2->p = VAR_2->key;





 if (VAR_3 == 0 && VAR_4 > 1) {
  VAR_7 = FUNC_3(VAR_2->key) + 1;
  for (VAR_5 = 1; VAR_5 < VAR_4; VAR_5++)
   *(VAR_2->p + VAR_5 ) = FUNC_1(VAR_7++);
 }






 if (VAR_6) {
  VAR_6->last_alloc_logical_block = VAR_1 + VAR_4 - 1;
  VAR_6->last_alloc_physical_block =
    FUNC_3(VAR_2[VAR_3].key) + VAR_4 - 1;
 }




 if (VAR_2->bh)
  FUNC_4(VAR_2->bh, VAR_0);

 VAR_0->i_ctime = FUNC_2(VAR_0);
 FUNC_5(VAR_0);
}
