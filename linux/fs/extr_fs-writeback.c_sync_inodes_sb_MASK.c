
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_writeback_work {int for_sync; int reason; int * done; int range_cyclic; int nr_pages; int sync_mode; struct super_block* sb; } ;
struct super_block {int s_umount; struct backing_dev_info* s_bdi; } ;
struct backing_dev_info {int dummy; } ;


 int FUNC_0 (int ,struct backing_dev_info*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct backing_dev_info*) ;
 int FUNC_3 (struct backing_dev_info*,struct wb_writeback_work*,int) ;
 int FUNC_4 (struct backing_dev_info*) ;
 int VAR_3 ;
 struct backing_dev_info VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct super_block *VAR_5)
{
 struct backing_dev_info *VAR_6 = VAR_5->s_bdi;
 FUNC_0(VAR_3, VAR_6);
 struct wb_writeback_work VAR_7 = {
  .sb = VAR_5,
  .sync_mode = VAR_2,
  .nr_pages = VAR_0,
  .range_cyclic = 0,
  .done = &VAR_3,
  .reason = VAR_1,
  .for_sync = 1,
 };






 if (VAR_6 == &VAR_4)
  return;
 FUNC_1(!FUNC_5(&VAR_5->s_umount));


 FUNC_2(VAR_6);
 FUNC_3(VAR_6, &VAR_7, 0);
 FUNC_7(&VAR_3);
 FUNC_4(VAR_6);

 FUNC_6(VAR_5);
}
