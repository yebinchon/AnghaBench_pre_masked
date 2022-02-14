
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_segctor_sem; int ns_ndirtyblks; struct nilfs_sc_info* ns_writer; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_transaction_info {scalar_t__ ti_magic; int ti_flags; scalar_t__ ti_count; struct nilfs_transaction_info* ti_save; } ;
struct nilfs_sc_info {scalar_t__ sc_watermark; } ;
struct TYPE_2__ {struct nilfs_transaction_info* journal_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int ,struct nilfs_transaction_info*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct nilfs_sc_info*,int ) ;
 int FUNC_5 (struct nilfs_sc_info*) ;
 int VAR_6 ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,struct nilfs_transaction_info*,scalar_t__,int,int ) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct super_block *VAR_7)
{
 struct nilfs_transaction_info *VAR_8 = VAR_5->journal_info;
 struct the_nilfs *VAR_9 = VAR_7->s_fs_info;
 int VAR_10 = 0;

 FUNC_0(VAR_8 == ((void*)0) || VAR_8->ti_magic != VAR_2);
 VAR_8->ti_flags |= VAR_0;
 if (VAR_8->ti_count > 0) {
  VAR_8->ti_count--;
  FUNC_7(VAR_7, VAR_8, VAR_8->ti_count,
       VAR_8->ti_flags, VAR_4);
  return 0;
 }
 if (VAR_9->ns_writer) {
  struct nilfs_sc_info *VAR_11 = VAR_9->ns_writer;

  if (VAR_8->ti_flags & VAR_0)
   FUNC_5(VAR_11);
  if (FUNC_1(&VAR_9->ns_ndirtyblks) > VAR_11->sc_watermark)
   FUNC_4(VAR_11, 0);
 }
 FUNC_8(&VAR_9->ns_segctor_sem);
 FUNC_7(VAR_7, VAR_8, VAR_8->ti_count,
       VAR_8->ti_flags, VAR_4);

 VAR_5->journal_info = VAR_8->ti_save;

 if (VAR_8->ti_flags & VAR_3)
  VAR_10 = FUNC_3(VAR_7);
 if (VAR_8->ti_flags & VAR_1)
  FUNC_2(VAR_6, VAR_8);
 FUNC_6(VAR_7);
 return VAR_10;
}
