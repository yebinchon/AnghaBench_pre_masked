
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {struct nilfs_sc_info* ns_writer; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_transaction_info {scalar_t__ ti_magic; } ;
struct nilfs_sc_info {int dummy; } ;
struct TYPE_2__ {struct nilfs_transaction_info* journal_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct nilfs_sc_info*) ;

int FUNC_2(struct super_block *VAR_3)
{
 struct the_nilfs *VAR_4 = VAR_3->s_fs_info;
 struct nilfs_sc_info *VAR_5 = VAR_4->ns_writer;
 struct nilfs_transaction_info *VAR_6;
 int VAR_7;

 if (!VAR_5)
  return -VAR_0;


 FUNC_0((VAR_6 = VAR_2->journal_info) && VAR_6->ti_magic == VAR_1);

 VAR_7 = FUNC_1(VAR_5);
 return VAR_7;
}
