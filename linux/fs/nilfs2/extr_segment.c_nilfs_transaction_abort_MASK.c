
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_segctor_sem; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_transaction_info {scalar_t__ ti_magic; scalar_t__ ti_count; int ti_flags; struct nilfs_transaction_info* ti_save; } ;
struct TYPE_2__ {struct nilfs_transaction_info* journal_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,struct nilfs_transaction_info*) ;
 int VAR_4 ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,struct nilfs_transaction_info*,scalar_t__,int,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct super_block *VAR_5)
{
 struct nilfs_transaction_info *VAR_6 = VAR_3->journal_info;
 struct the_nilfs *VAR_7 = VAR_5->s_fs_info;

 FUNC_0(VAR_6 == ((void*)0) || VAR_6->ti_magic != VAR_1);
 if (VAR_6->ti_count > 0) {
  VAR_6->ti_count--;
  FUNC_3(VAR_5, VAR_6, VAR_6->ti_count,
       VAR_6->ti_flags, VAR_2);
  return;
 }
 FUNC_4(&VAR_7->ns_segctor_sem);

 FUNC_3(VAR_5, VAR_6, VAR_6->ti_count,
      VAR_6->ti_flags, VAR_2);

 VAR_3->journal_info = VAR_6->ti_save;
 if (VAR_6->ti_flags & VAR_0)
  FUNC_1(VAR_4, VAR_6);
 FUNC_2(VAR_5);
}
