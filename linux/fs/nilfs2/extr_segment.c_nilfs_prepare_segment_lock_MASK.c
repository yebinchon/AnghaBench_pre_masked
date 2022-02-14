
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nilfs_transaction_info {scalar_t__ ti_magic; int ti_count; void* ti_save; scalar_t__ ti_flags; } ;
struct TYPE_2__ {struct nilfs_transaction_info* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct nilfs_transaction_info* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct super_block*,int ,char*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_7,
          struct nilfs_transaction_info *VAR_8)
{
 struct nilfs_transaction_info *VAR_9 = VAR_5->journal_info;
 void *VAR_10 = ((void*)0);

 if (VAR_9) {
  if (VAR_9->ti_magic == VAR_4)
   return ++VAR_9->ti_count;






  FUNC_1(VAR_7, VAR_2, "journal info from a different FS");
  VAR_10 = VAR_5->journal_info;
 }
 if (!VAR_8) {
  VAR_8 = FUNC_0(VAR_6, VAR_1);
  if (!VAR_8)
   return -VAR_0;
  VAR_8->ti_flags = VAR_3;
 } else {
  VAR_8->ti_flags = 0;
 }
 VAR_8->ti_count = 0;
 VAR_8->ti_save = VAR_10;
 VAR_8->ti_magic = VAR_4;
 VAR_5->journal_info = VAR_8;
 return 0;
}
