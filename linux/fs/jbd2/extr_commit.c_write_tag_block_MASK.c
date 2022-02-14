
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u32 ;
typedef int journal_t ;
struct TYPE_3__ {void* t_blocknr_high; void* t_blocknr; } ;
typedef TYPE_1__ journal_block_tag_t ;


 void* FUNC_0 (unsigned long long) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(journal_t *VAR_0, journal_block_tag_t *VAR_1,
       unsigned long long VAR_2)
{
 VAR_1->t_blocknr = FUNC_0(VAR_2 & (u32)~0);
 if (FUNC_1(VAR_0))
  VAR_1->t_blocknr_high = FUNC_0((VAR_2 >> 31) >> 1);
}
