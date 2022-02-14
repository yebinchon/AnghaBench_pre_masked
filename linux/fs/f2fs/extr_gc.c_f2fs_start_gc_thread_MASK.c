
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct f2fs_sb_info {struct f2fs_gc_kthread* gc_thread; TYPE_2__* sb; } ;
struct f2fs_gc_kthread {int f2fs_gc_task; int gc_wait_queue_head; scalar_t__ gc_wake; int no_gc_sleep_time; int max_sleep_time; int min_sleep_time; int urgent_sleep_time; } ;
typedef int dev_t ;
struct TYPE_4__ {TYPE_1__* s_bdev; } ;
struct TYPE_3__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct f2fs_gc_kthread* FUNC_4 (struct f2fs_sb_info*,int,int ) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct f2fs_sb_info*,char*,int ,int ) ;
 int FUNC_7 (struct f2fs_gc_kthread*) ;

int FUNC_8(struct f2fs_sb_info *VAR_7)
{
 struct f2fs_gc_kthread *VAR_8;
 dev_t VAR_9 = VAR_7->sb->s_bdev->bd_dev;
 int VAR_10 = 0;

 VAR_8 = FUNC_4(VAR_7, sizeof(struct f2fs_gc_kthread), VAR_5);
 if (!VAR_8) {
  VAR_10 = -VAR_4;
  goto out;
 }

 VAR_8->urgent_sleep_time = VAR_3;
 VAR_8->min_sleep_time = VAR_1;
 VAR_8->max_sleep_time = VAR_0;
 VAR_8->no_gc_sleep_time = VAR_2;

 VAR_8->gc_wake= 0;

 VAR_7->gc_thread = VAR_8;
 FUNC_5(&VAR_7->gc_thread->gc_wait_queue_head);
 VAR_7->gc_thread->f2fs_gc_task = FUNC_6(VAR_6, VAR_7,
   "f2fs_gc-%u:%u", FUNC_1(VAR_9), FUNC_2(VAR_9));
 if (FUNC_0(VAR_8->f2fs_gc_task)) {
  VAR_10 = FUNC_3(VAR_8->f2fs_gc_task);
  FUNC_7(VAR_8);
  VAR_7->gc_thread = ((void*)0);
 }
out:
 return VAR_10;
}
