
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_writeback_work {int tagged_writepages; unsigned long nr_pages; int reason; int * done; int sync_mode; struct super_block* sb; } ;
struct super_block {struct backing_dev_info* s_bdi; int s_umount; } ;
struct backing_dev_info {int dummy; } ;
typedef enum wb_reason { ____Placeholder_wb_reason } wb_reason ;


 int FUNC_0 (int ,struct backing_dev_info*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct backing_dev_info*) ;
 int FUNC_3 (struct backing_dev_info*,struct wb_writeback_work*,int) ;
 int VAR_1 ;
 struct backing_dev_info VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct super_block *VAR_3, unsigned long VAR_4,
         enum wb_reason VAR_5, bool VAR_6)
{
 struct backing_dev_info *VAR_7 = VAR_3->s_bdi;
 FUNC_0(VAR_1, VAR_7);
 struct wb_writeback_work VAR_8 = {
  .sb = VAR_3,
  .sync_mode = VAR_0,
  .tagged_writepages = 1,
  .done = &VAR_1,
  .nr_pages = VAR_4,
  .reason = VAR_5,
 };

 if (!FUNC_2(VAR_7) || VAR_7 == &VAR_2)
  return;
 FUNC_1(!FUNC_4(&VAR_3->s_umount));

 FUNC_3(VAR_3->s_bdi, &VAR_8, VAR_6);
 FUNC_5(&VAR_1);
}
