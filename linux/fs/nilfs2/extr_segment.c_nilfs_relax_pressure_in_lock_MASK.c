
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_segctor_sem; struct nilfs_sc_info* ns_writer; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_transaction_info {int ti_flags; } ;
struct nilfs_sc_info {int sc_flags; scalar_t__ sc_flush_request; } ;
struct TYPE_2__ {struct nilfs_transaction_info* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nilfs_sc_info*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct super_block *VAR_3)
{
 struct the_nilfs *VAR_4 = VAR_3->s_fs_info;
 struct nilfs_sc_info *VAR_5 = VAR_4->ns_writer;

 if (!VAR_5 || !VAR_5->sc_flush_request)
  return;

 FUNC_3(VAR_0, &VAR_5->sc_flags);
 FUNC_5(&VAR_4->ns_segctor_sem);

 FUNC_0(&VAR_4->ns_segctor_sem);
 if (VAR_5->sc_flush_request &&
     FUNC_4(VAR_0, &VAR_5->sc_flags)) {
  struct nilfs_transaction_info *VAR_6 = VAR_2->journal_info;

  VAR_6->ti_flags |= VAR_1;
  FUNC_2(VAR_5);
  VAR_6->ti_flags &= ~VAR_1;
 }
 FUNC_1(&VAR_4->ns_segctor_sem);
}
