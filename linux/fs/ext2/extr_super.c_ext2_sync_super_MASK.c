
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext2_super_block {void* s_wtime; void* s_free_inodes_count; void* s_free_blocks_count; } ;
struct TYPE_2__ {int s_sbh; int s_lock; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

void FUNC_10(struct super_block *VAR_0, struct ext2_super_block *VAR_1,
       int VAR_2)
{
 FUNC_2(VAR_0);
 FUNC_7(&FUNC_0(VAR_0)->s_lock);
 VAR_1->s_free_blocks_count = FUNC_1(FUNC_3(VAR_0));
 VAR_1->s_free_inodes_count = FUNC_1(FUNC_4(VAR_0));
 VAR_1->s_wtime = FUNC_1(FUNC_5());

 FUNC_8(&FUNC_0(VAR_0)->s_lock);
 FUNC_6(FUNC_0(VAR_0)->s_sbh);
 if (VAR_2)
  FUNC_9(FUNC_0(VAR_0)->s_sbh);
}
