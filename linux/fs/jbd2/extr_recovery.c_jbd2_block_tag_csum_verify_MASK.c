
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int seq ;
struct TYPE_9__ {int j_blocksize; int j_csum_seed; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_10__ {scalar_t__ t_checksum; } ;
typedef TYPE_2__ journal_block_tag_t ;
struct TYPE_11__ {scalar_t__ t_checksum; } ;
typedef TYPE_3__ journal_block_tag3_t ;
typedef void __u8 ;
typedef int __u32 ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,void*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(journal_t *VAR_0, journal_block_tag_t *VAR_1,
          void *VAR_2, __u32 VAR_3)
{
 journal_block_tag3_t *VAR_4 = (journal_block_tag3_t *)VAR_1;
 __u32 VAR_5;
 __be32 VAR_6;

 if (!FUNC_4(VAR_0))
  return 1;

 VAR_6 = FUNC_1(VAR_3);
 VAR_5 = FUNC_2(VAR_0, VAR_0->j_csum_seed, (__u8 *)&VAR_6, sizeof(VAR_6));
 VAR_5 = FUNC_2(VAR_0, VAR_5, VAR_2, VAR_0->j_blocksize);

 if (FUNC_3(VAR_0))
  return VAR_4->t_checksum == FUNC_1(VAR_5);
 else
  return VAR_1->t_checksum == FUNC_0(VAR_5);
}
