
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_5__ {unsigned long j_tail; unsigned long j_free; int j_state_lock; int j_tail_sequence; scalar_t__ j_first; scalar_t__ j_last; int j_checkpoint_mutex; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,unsigned long,int) ;
 int FUNC_2 (int,char*,int ,int ,unsigned long,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ,unsigned long,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(journal_t *VAR_2, tid_t VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_0(!FUNC_3(&VAR_2->j_checkpoint_mutex));







 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4,
           VAR_1 | VAR_0);
 if (VAR_6)
  goto out;

 FUNC_5(&VAR_2->j_state_lock);
 VAR_5 = VAR_4 - VAR_2->j_tail;
 if (VAR_4 < VAR_2->j_tail)
  VAR_5 += VAR_2->j_last - VAR_2->j_first;

 FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2(1,
    "Cleaning journal tail from %u to %u (offset %lu), "
    "freeing %lu\n",
    VAR_2->j_tail_sequence, VAR_3, VAR_4, VAR_5);

 VAR_2->j_free += VAR_5;
 VAR_2->j_tail_sequence = VAR_3;
 VAR_2->j_tail = VAR_4;
 FUNC_6(&VAR_2->j_state_lock);

out:
 return VAR_6;
}
