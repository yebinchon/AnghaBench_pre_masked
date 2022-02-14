
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
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct super_block*,struct nilfs_transaction_info*,scalar_t__,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_3)
{
 struct nilfs_transaction_info *VAR_4 = VAR_2->journal_info;
 struct the_nilfs *VAR_5 = VAR_3->s_fs_info;

 FUNC_0(VAR_4 == ((void*)0) || VAR_4->ti_magic != VAR_0);
 FUNC_0(VAR_4->ti_count > 0);

 FUNC_2(&VAR_5->ns_segctor_sem);
 VAR_2->journal_info = VAR_4->ti_save;

 FUNC_1(VAR_3, VAR_4, VAR_4->ti_count,
       VAR_4->ti_flags, VAR_1);
}
