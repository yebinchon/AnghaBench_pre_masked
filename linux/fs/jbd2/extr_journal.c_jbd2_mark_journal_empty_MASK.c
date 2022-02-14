
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int j_state_lock; int j_flags; int j_tail_sequence; int j_sb_buffer; int j_checkpoint_mutex; TYPE_2__* j_superblock; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_6__ {scalar_t__ s_start; void* s_sequence; } ;
typedef TYPE_2__ journal_superblock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(journal_t *VAR_1, int VAR_2)
{
 journal_superblock_t *VAR_3 = VAR_1->j_superblock;

 FUNC_0(!FUNC_5(&VAR_1->j_checkpoint_mutex));
 FUNC_4(VAR_1->j_sb_buffer);
 if (VAR_3->s_start == 0) {
  FUNC_6(VAR_1->j_sb_buffer);
  return;
 }

 FUNC_3(1, "JBD2: Marking journal as empty (seq %u)\n",
    VAR_1->j_tail_sequence);

 VAR_3->s_sequence = FUNC_1(VAR_1->j_tail_sequence);
 VAR_3->s_start = FUNC_1(0);

 FUNC_2(VAR_1, VAR_2);


 FUNC_7(&VAR_1->j_state_lock);
 VAR_1->j_flags |= VAR_0;
 FUNC_8(&VAR_1->j_state_lock);
}
