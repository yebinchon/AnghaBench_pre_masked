
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct jbd2_journal_block_tail {scalar_t__ t_checksum; } ;
struct TYPE_5__ {int j_blocksize; int j_csum_seed; } ;
typedef TYPE_1__ journal_t ;
typedef int __u32 ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,void*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(journal_t *VAR_0, void *VAR_1)
{
 struct jbd2_journal_block_tail *VAR_2;
 __be32 VAR_3;
 __u32 VAR_4;

 if (!FUNC_2(VAR_0))
  return 1;

 VAR_2 = (struct jbd2_journal_block_tail *)(VAR_1 + VAR_0->j_blocksize -
   sizeof(struct jbd2_journal_block_tail));
 VAR_3 = VAR_2->t_checksum;
 VAR_2->t_checksum = 0;
 VAR_4 = FUNC_1(VAR_0, VAR_0->j_csum_seed, VAR_1, VAR_0->j_blocksize);
 VAR_2->t_checksum = VAR_3;

 return VAR_3 == FUNC_0(VAR_4);
}
