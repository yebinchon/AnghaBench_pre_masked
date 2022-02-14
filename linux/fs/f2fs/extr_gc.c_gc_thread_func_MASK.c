
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct f2fs_sb_info {scalar_t__ gc_mode; TYPE_2__* sb; int gc_mutex; struct f2fs_gc_kthread* gc_thread; } ;
struct f2fs_gc_kthread {unsigned int min_sleep_time; unsigned int urgent_sleep_time; unsigned int no_gc_sleep_time; scalar_t__ gc_wake; int gc_wait_queue_head; } ;
struct TYPE_5__ {scalar_t__ frozen; } ;
struct TYPE_6__ {TYPE_1__ s_writers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct f2fs_gc_kthread*,unsigned int*) ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*,int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct f2fs_sb_info*,int) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (struct f2fs_gc_kthread*,unsigned int*) ;
 int FUNC_9 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct f2fs_sb_info*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 () ;
 int FUNC_19 (struct f2fs_sb_info*) ;
 int FUNC_20 (struct f2fs_sb_info*) ;
 int FUNC_21 (struct f2fs_sb_info*) ;
 int FUNC_22 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_23 (struct f2fs_sb_info*,int ) ;
 int FUNC_24 (TYPE_2__*,unsigned int,int ,int ) ;
 scalar_t__ FUNC_25 () ;
 int FUNC_26 (int ,int,int ) ;

__attribute__((used)) static int FUNC_27(void *VAR_7)
{
 struct f2fs_sb_info *VAR_8 = VAR_7;
 struct f2fs_gc_kthread *VAR_9 = VAR_8->gc_thread;
 wait_queue_head_t *VAR_10 = &VAR_8->gc_thread->gc_wait_queue_head;
 unsigned int VAR_11;

 VAR_11 = VAR_9->min_sleep_time;

 FUNC_18();
 do {
  FUNC_26(*VAR_10,
    FUNC_10() || FUNC_6(VAR_6) ||
    VAR_9->gc_wake,
    FUNC_11(VAR_11));


  if (VAR_9->gc_wake)
   VAR_9->gc_wake = 0;

  if (FUNC_25()) {
   FUNC_21(VAR_8);
   continue;
  }
  if (FUNC_10())
   break;

  if (VAR_8->sb->s_writers.frozen >= VAR_5) {
   FUNC_8(VAR_9, &VAR_11);
   FUNC_21(VAR_8);
   continue;
  }

  if (FUNC_23(VAR_8, VAR_0)) {
   FUNC_3(VAR_0);
   FUNC_4(VAR_8, 0);
  }

  if (!FUNC_17(VAR_8->sb)) {
   FUNC_21(VAR_8);
   continue;
  }
  if (VAR_8->gc_mode == VAR_3) {
   VAR_11 = VAR_9->urgent_sleep_time;
   FUNC_12(&VAR_8->gc_mutex);
   goto do_gc;
  }

  if (!FUNC_13(&VAR_8->gc_mutex)) {
   FUNC_21(VAR_8);
   goto next;
  }

  if (!FUNC_9(VAR_8, VAR_2)) {
   FUNC_8(VAR_9, &VAR_11);
   FUNC_14(&VAR_8->gc_mutex);
   FUNC_20(VAR_8);
   goto next;
  }

  if (FUNC_7(VAR_8))
   FUNC_0(VAR_9, &VAR_11);
  else
   FUNC_8(VAR_9, &VAR_11);
do_gc:
  FUNC_19(VAR_8);


  if (FUNC_2(VAR_8, FUNC_22(VAR_8, VAR_1), 1, VAR_4))
   VAR_11 = VAR_9->no_gc_sleep_time;

  FUNC_24(VAR_8->sb, VAR_11,
    FUNC_15(VAR_8), FUNC_5(VAR_8));


  FUNC_1(VAR_8);
next:
  FUNC_16(VAR_8->sb);

 } while (!FUNC_10());
 return 0;
}
