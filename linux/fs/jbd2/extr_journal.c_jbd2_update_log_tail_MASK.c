
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_4__ {int j_checkpoint_mutex; int j_tail_sequence; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (TYPE_1__*,int ,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;

void FUNC_4(journal_t *VAR_0, tid_t VAR_1, unsigned long VAR_2)
{
 FUNC_1(&VAR_0->j_checkpoint_mutex);
 if (FUNC_3(VAR_1, VAR_0->j_tail_sequence))
  FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->j_checkpoint_mutex);
}
