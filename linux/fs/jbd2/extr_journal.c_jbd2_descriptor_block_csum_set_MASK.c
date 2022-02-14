
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct jbd2_journal_block_tail {scalar_t__ t_checksum; } ;
struct buffer_head {int b_data; } ;
struct TYPE_5__ {int j_blocksize; int j_csum_seed; } ;
typedef TYPE_1__ journal_t ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(journal_t *VAR_0, struct buffer_head *VAR_1)
{
 struct jbd2_journal_block_tail *VAR_2;
 __u32 VAR_3;

 if (!FUNC_2(VAR_0))
  return;

 VAR_2 = (struct jbd2_journal_block_tail *)(VAR_1->b_data + VAR_0->j_blocksize -
   sizeof(struct jbd2_journal_block_tail));
 VAR_2->t_checksum = 0;
 VAR_3 = FUNC_1(VAR_0, VAR_0->j_csum_seed, VAR_1->b_data, VAR_0->j_blocksize);
 VAR_2->t_checksum = FUNC_0(VAR_3);
}
