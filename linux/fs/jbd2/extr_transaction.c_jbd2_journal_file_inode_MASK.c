
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int t_need_data_flush; int t_inode_list; int t_tid; TYPE_3__* t_journal; } ;
typedef TYPE_2__ transaction_t ;
struct jbd2_inode {unsigned long i_flags; int i_list; TYPE_2__* i_transaction; TYPE_2__* i_next_transaction; void* i_dirty_end; void* i_dirty_start; TYPE_1__* i_vfs_inode; } ;
typedef void* loff_t ;
struct TYPE_9__ {int j_list_lock; TYPE_2__* j_committing_transaction; } ;
typedef TYPE_3__ journal_t ;
struct TYPE_10__ {TYPE_2__* h_transaction; } ;
typedef TYPE_4__ handle_t ;
struct TYPE_7__ {int i_ino; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int,char*,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (void*,void*) ;
 void* FUNC_5 (void*,void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(handle_t *VAR_1, struct jbd2_inode *VAR_2,
  unsigned long VAR_3, loff_t VAR_4, loff_t VAR_5)
{
 transaction_t *VAR_6 = VAR_1->h_transaction;
 journal_t *VAR_7;

 if (FUNC_1(VAR_1))
  return -VAR_0;
 VAR_7 = VAR_6->t_journal;

 FUNC_2(4, "Adding inode %lu, tid:%d\n", VAR_2->i_vfs_inode->i_ino,
   VAR_6->t_tid);

 FUNC_6(&VAR_7->j_list_lock);
 VAR_2->i_flags |= VAR_3;

 if (VAR_2->i_dirty_end) {
  VAR_2->i_dirty_start = FUNC_5(VAR_2->i_dirty_start, VAR_4);
  VAR_2->i_dirty_end = FUNC_4(VAR_2->i_dirty_end, VAR_5);
 } else {
  VAR_2->i_dirty_start = VAR_4;
  VAR_2->i_dirty_end = VAR_5;
 }


 if (VAR_2->i_transaction == VAR_6 ||
     VAR_2->i_next_transaction == VAR_6)
  goto done;






 if (!VAR_6->t_need_data_flush)
  VAR_6->t_need_data_flush = 1;


 if (VAR_2->i_transaction) {
  FUNC_0(VAR_2->i_next_transaction == ((void*)0));
  FUNC_0(VAR_2->i_transaction ==
     VAR_7->j_committing_transaction);
  VAR_2->i_next_transaction = VAR_6;
  goto done;
 }

 FUNC_0(!VAR_2->i_next_transaction);
 VAR_2->i_transaction = VAR_6;
 FUNC_3(&VAR_2->i_list, &VAR_6->t_inode_list);
done:
 FUNC_7(&VAR_7->j_list_lock);

 return 0;
}
