
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct f2fs_sb_info {scalar_t__ gc_mode; int sb; } ;
struct discard_policy {unsigned int max_interval; unsigned int min_interval; unsigned int mid_interval; } ;
struct discard_cmd_control {int discard_granularity; int queued_discard; scalar_t__ discard_wake; int discard_wait_queue; } ;
struct TYPE_2__ {struct discard_cmd_control* dcc_info; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*,struct discard_policy*,int ,int) ;
 int FUNC_2 (struct f2fs_sb_info*,struct discard_policy*) ;
 int FUNC_3 (struct f2fs_sb_info*,struct discard_policy*) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 unsigned int FUNC_6 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int ,int,int ) ;

__attribute__((used)) static int FUNC_16(void *VAR_7)
{
 struct f2fs_sb_info *VAR_8 = VAR_7;
 struct discard_cmd_control *VAR_9 = FUNC_0(VAR_8)->dcc_info;
 wait_queue_head_t *VAR_10 = &VAR_9->discard_wait_queue;
 struct discard_policy VAR_11;
 unsigned int VAR_12 = VAR_0;
 int VAR_13;

 FUNC_13();

 do {
  FUNC_1(VAR_8, &VAR_11, VAR_2,
     VAR_9->discard_granularity);

  FUNC_15(*VAR_10,
    FUNC_9() || FUNC_7(VAR_6) ||
    VAR_9->discard_wake,
    FUNC_10(VAR_12));

  if (VAR_9->discard_wake)
   VAR_9->discard_wake = 0;


  if (FUNC_4(&VAR_9->queued_discard))
   FUNC_3(VAR_8, ((void*)0));

  if (FUNC_14())
   continue;
  if (FUNC_5(VAR_8->sb))
   continue;
  if (FUNC_9())
   return 0;
  if (FUNC_8(VAR_8, VAR_5)) {
   VAR_12 = VAR_11.max_interval;
   continue;
  }

  if (VAR_8->gc_mode == VAR_4)
   FUNC_1(VAR_8, &VAR_11, VAR_3, 1);

  FUNC_12(VAR_8->sb);

  VAR_13 = FUNC_2(VAR_8, &VAR_11);
  if (VAR_13 > 0) {
   FUNC_3(VAR_8, &VAR_11);
   VAR_12 = VAR_11.min_interval;
  } else if (VAR_13 == -1){
   VAR_12 = FUNC_6(VAR_8, VAR_1);
   if (!VAR_12)
    VAR_12 = VAR_11.mid_interval;
  } else {
   VAR_12 = VAR_11.max_interval;
  }

  FUNC_11(VAR_8->sb);

 } while (!FUNC_9());
 return 0;
}
