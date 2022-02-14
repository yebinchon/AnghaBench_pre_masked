
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_segctor_sem; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_transaction_info {int ti_flags; struct nilfs_transaction_info* ti_save; int ti_count; } ;
struct TYPE_2__ {struct nilfs_transaction_info* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct nilfs_transaction_info*) ;
 scalar_t__ FUNC_2 (struct the_nilfs*) ;
 int FUNC_3 (struct super_block*,struct nilfs_transaction_info*) ;
 int VAR_4 ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*,struct nilfs_transaction_info*,int ,int,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct super_block *VAR_5,
       struct nilfs_transaction_info *VAR_6,
       int VAR_7)
{
 struct the_nilfs *VAR_8;
 int VAR_9 = FUNC_3(VAR_5, VAR_6);
 struct nilfs_transaction_info *VAR_10;

 if (FUNC_7(VAR_9 < 0))
  return VAR_9;
 if (VAR_9 > 0) {
  VAR_10 = VAR_3->journal_info;

  FUNC_6(VAR_5, VAR_10,
        VAR_10->ti_count, VAR_10->ti_flags,
        VAR_2);
  return 0;
 }

 FUNC_5(VAR_5);

 VAR_8 = VAR_5->s_fs_info;
 FUNC_0(&VAR_8->ns_segctor_sem);
 if (VAR_7 && FUNC_2(VAR_8)) {
  FUNC_8(&VAR_8->ns_segctor_sem);
  VAR_9 = -VAR_0;
  goto failed;
 }

 VAR_10 = VAR_3->journal_info;
 FUNC_6(VAR_5, VAR_10, VAR_10->ti_count,
         VAR_10->ti_flags,
         VAR_2);
 return 0;

 failed:
 VAR_6 = VAR_3->journal_info;
 VAR_3->journal_info = VAR_6->ti_save;
 if (VAR_6->ti_flags & VAR_1)
  FUNC_1(VAR_4, VAR_6);
 FUNC_4(VAR_5);
 return VAR_9;
}
