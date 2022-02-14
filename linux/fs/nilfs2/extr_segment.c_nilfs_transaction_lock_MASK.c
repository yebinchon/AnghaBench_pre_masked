
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_segctor_sem; struct nilfs_sc_info* ns_writer; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_transaction_info {int ti_flags; scalar_t__ ti_count; int ti_magic; struct nilfs_transaction_info* ti_save; } ;
struct nilfs_sc_info {int sc_flags; } ;
struct TYPE_2__ {struct nilfs_transaction_info* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nilfs_transaction_info*) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nilfs_sc_info*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct super_block*,struct nilfs_transaction_info*,scalar_t__,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_7,
       struct nilfs_transaction_info *VAR_8,
       int VAR_9)
{
 struct nilfs_transaction_info *VAR_10 = VAR_6->journal_info;
 struct the_nilfs *VAR_11 = VAR_7->s_fs_info;
 struct nilfs_sc_info *VAR_12 = VAR_11->ns_writer;

 FUNC_0(VAR_10);
 VAR_8->ti_flags = VAR_3;
 VAR_8->ti_count = 0;
 VAR_8->ti_save = VAR_10;
 VAR_8->ti_magic = VAR_2;
 VAR_6->journal_info = VAR_8;

 for (;;) {
  FUNC_5(VAR_7, VAR_8, VAR_8->ti_count,
       VAR_8->ti_flags, VAR_5);

  FUNC_2(&VAR_11->ns_segctor_sem);
  if (!FUNC_4(VAR_0, &VAR_12->sc_flags))
   break;

  FUNC_3(VAR_12);

  FUNC_6(&VAR_11->ns_segctor_sem);
  FUNC_1();
 }
 if (VAR_9)
  VAR_8->ti_flags |= VAR_1;

 FUNC_5(VAR_7, VAR_8, VAR_8->ti_count,
       VAR_8->ti_flags, VAR_4);
}
