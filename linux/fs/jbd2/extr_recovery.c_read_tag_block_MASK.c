
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int journal_t ;
struct TYPE_3__ {int t_blocknr_high; int t_blocknr; } ;
typedef TYPE_1__ journal_block_tag_t ;


 unsigned long long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline unsigned long long FUNC_2(journal_t *VAR_0,
      journal_block_tag_t *VAR_1)
{
 unsigned long long VAR_2 = FUNC_0(VAR_1->t_blocknr);
 if (FUNC_1(VAR_0))
  VAR_2 |= (u64)FUNC_0(VAR_1->t_blocknr_high) << 32;
 return VAR_2;
}
