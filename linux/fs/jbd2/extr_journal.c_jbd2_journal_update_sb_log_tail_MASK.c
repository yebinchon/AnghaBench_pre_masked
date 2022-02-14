
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long tid_t ;
struct TYPE_6__ {int j_state_lock; int j_flags; int j_sb_buffer; int j_checkpoint_mutex; TYPE_2__* j_superblock; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_7__ {void* s_sequence; void* s_start; } ;
typedef TYPE_2__ journal_superblock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int,char*,unsigned long,unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(journal_t *VAR_2, tid_t VAR_3,
         unsigned long VAR_4, int VAR_5)
{
 journal_superblock_t *VAR_6 = VAR_2->j_superblock;
 int VAR_7;

 if (FUNC_3(VAR_2))
  return -VAR_0;

 FUNC_0(!FUNC_7(&VAR_2->j_checkpoint_mutex));
 FUNC_5(1, "JBD2: updating superblock (start %lu, seq %u)\n",
    VAR_4, VAR_3);

 FUNC_6(VAR_2->j_sb_buffer);
 VAR_6->s_sequence = FUNC_2(VAR_3);
 VAR_6->s_start = FUNC_2(VAR_4);

 VAR_7 = FUNC_4(VAR_2, VAR_5);
 if (VAR_7)
  goto out;


 FUNC_8(&VAR_2->j_state_lock);
 FUNC_1(!VAR_6->s_sequence);
 VAR_2->j_flags &= ~VAR_1;
 FUNC_9(&VAR_2->j_state_lock);

out:
 return VAR_7;
}
