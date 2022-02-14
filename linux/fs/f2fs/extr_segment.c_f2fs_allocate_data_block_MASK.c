
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sit_info {int sentry_lock; TYPE_1__* s_ops; } ;
struct page {int dummy; } ;
struct f2fs_summary {int dummy; } ;
struct f2fs_sb_info {struct f2fs_bio_info** write_io; } ;
struct f2fs_io_info {int retry; int in_list; size_t type; int temp; int list; } ;
struct f2fs_bio_info {int io_lock; int io_list; } ;
struct curseg_info {int curseg_mutex; } ;
typedef int block_t ;
struct TYPE_4__ {int curseg_lock; } ;
struct TYPE_3__ {int (* allocate_segment ) (struct f2fs_sb_info*,int,int) ;} ;


 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct f2fs_sb_info*,struct curseg_info*) ;
 scalar_t__ VAR_0 ;
 struct sit_info* FUNC_6 (struct f2fs_sb_info*) ;
 TYPE_2__* FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (struct f2fs_sb_info*,int,struct f2fs_summary*) ;
 int FUNC_9 (struct f2fs_sb_info*,int) ;
 int FUNC_10 (struct f2fs_sb_info*,struct curseg_info*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct f2fs_sb_info*,struct page*) ;
 int FUNC_14 (struct f2fs_sb_info*,int ) ;
 int FUNC_15 (struct page*,int ) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct f2fs_sb_info*,struct curseg_info*) ;
 int FUNC_23 (struct f2fs_sb_info*,int,int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct f2fs_sb_info*,int ,int) ;

void FUNC_27(struct f2fs_sb_info *VAR_1, struct page *VAR_2,
  block_t VAR_3, block_t *VAR_4,
  struct f2fs_summary *VAR_5, int VAR_6,
  struct f2fs_io_info *VAR_7, bool VAR_8)
{
 struct sit_info *VAR_9 = FUNC_6(VAR_1);
 struct curseg_info *VAR_10 = FUNC_0(VAR_1, VAR_6);

 FUNC_11(&FUNC_7(VAR_1)->curseg_lock);

 FUNC_18(&VAR_10->curseg_mutex);
 FUNC_12(&VAR_9->sentry_lock);

 *VAR_4 = FUNC_5(VAR_1, VAR_10);

 FUNC_14(VAR_1, *VAR_4);






 FUNC_8(VAR_1, VAR_6, VAR_5);

 FUNC_10(VAR_1, VAR_10);

 FUNC_22(VAR_1, VAR_10);





 FUNC_26(VAR_1, *VAR_4, 1);
 if (FUNC_2(VAR_1, VAR_3) != VAR_0)
  FUNC_26(VAR_1, VAR_3, -1);

 if (!FUNC_9(VAR_1, VAR_6))
  VAR_9->s_ops->allocate_segment(VAR_1, VAR_6, 0);






 FUNC_17(VAR_1, FUNC_2(VAR_1, VAR_3));
 FUNC_17(VAR_1, FUNC_2(VAR_1, *VAR_4));

 FUNC_25(&VAR_9->sentry_lock);

 if (VAR_2 && FUNC_4(VAR_6)) {
  FUNC_15(VAR_2, FUNC_5(VAR_1, VAR_10));

  FUNC_13(VAR_1, VAR_2);
 }

 if (FUNC_1(VAR_1))
  VAR_7->retry = 0;

 if (VAR_8) {
  struct f2fs_bio_info *VAR_11;

  FUNC_3(&VAR_7->list);
  VAR_7->in_list = 1;
  VAR_11 = VAR_1->write_io[VAR_7->type] + VAR_7->temp;
  FUNC_20(&VAR_11->io_lock);
  FUNC_16(&VAR_7->list, &VAR_11->io_list);
  FUNC_21(&VAR_11->io_lock);
 }

 FUNC_19(&VAR_10->curseg_mutex);

 FUNC_24(&FUNC_7(VAR_1)->curseg_lock);
}
