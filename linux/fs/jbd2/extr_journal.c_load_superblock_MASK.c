
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* j_errno; void* j_last; void* j_first; void* j_tail; void* j_tail_sequence; TYPE_2__* j_superblock; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_6__ {int s_errno; int s_maxlen; int s_first; int s_start; int s_sequence; } ;
typedef TYPE_2__ journal_superblock_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(journal_t *VAR_0)
{
 int VAR_1;
 journal_superblock_t *VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_2 = VAR_0->j_superblock;

 VAR_0->j_tail_sequence = FUNC_0(VAR_2->s_sequence);
 VAR_0->j_tail = FUNC_0(VAR_2->s_start);
 VAR_0->j_first = FUNC_0(VAR_2->s_first);
 VAR_0->j_last = FUNC_0(VAR_2->s_maxlen);
 VAR_0->j_errno = FUNC_0(VAR_2->s_errno);

 return 0;
}
