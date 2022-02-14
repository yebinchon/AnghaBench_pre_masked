
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct the_nilfs {int dummy; } ;
struct TYPE_3__ {int expires; } ;
struct nilfs_sc_info {int sc_interval; int sc_mjcp_freq; int sc_state; scalar_t__ sc_seq_request; scalar_t__ sc_seq_done; int sc_wait_task; int * sc_task; int sc_state_lock; TYPE_1__ sc_timer; int sc_wait_daemon; scalar_t__ sc_flush_request; TYPE_2__* sc_super; void* sc_timer_task; } ;
struct TYPE_4__ {struct the_nilfs* s_fs_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*,int ,char*,int,int) ;
 scalar_t__ FUNC_4 (struct the_nilfs*) ;
 scalar_t__ FUNC_5 (struct the_nilfs*) ;
 int FUNC_6 (struct nilfs_sc_info*) ;
 int FUNC_7 (struct nilfs_sc_info*,int) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct the_nilfs*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 () ;
 int VAR_8 ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(void *VAR_9)
{
 struct nilfs_sc_info *VAR_10 = (struct nilfs_sc_info *)VAR_9;
 struct the_nilfs *VAR_11 = VAR_10->sc_super->s_fs_info;
 int VAR_12 = 0;

 VAR_10->sc_timer_task = VAR_6;


 VAR_10->sc_task = VAR_6;
 FUNC_16(&VAR_10->sc_wait_task);
 FUNC_3(VAR_10->sc_super, VAR_1,
    "segctord starting. Construction interval = %lu seconds, CP frequency < %lu seconds",
    VAR_10->sc_interval / VAR_0, VAR_10->sc_mjcp_freq / VAR_0);

 FUNC_11(&VAR_10->sc_state_lock);
 loop:
 for (;;) {
  int VAR_13;

  if (VAR_10->sc_state & VAR_3)
   goto end_thread;

  if (VAR_12 || VAR_10->sc_seq_request != VAR_10->sc_seq_done)
   VAR_13 = VAR_4;
  else if (VAR_10->sc_flush_request)
   VAR_13 = FUNC_6(VAR_10);
  else
   break;

  FUNC_12(&VAR_10->sc_state_lock);
  FUNC_7(VAR_10, VAR_13);
  FUNC_11(&VAR_10->sc_state_lock);
  VAR_12 = 0;
 }


 if (FUNC_2(VAR_6)) {
  FUNC_12(&VAR_10->sc_state_lock);
  FUNC_15();
  FUNC_11(&VAR_10->sc_state_lock);
 } else {
  FUNC_0(VAR_8);
  int VAR_14 = 1;

  FUNC_8(&VAR_10->sc_wait_daemon, &VAR_8,
    VAR_5);

  if (VAR_10->sc_seq_request != VAR_10->sc_seq_done)
   VAR_14 = 0;
  else if (VAR_10->sc_flush_request)
   VAR_14 = 0;
  else if (VAR_10->sc_state & VAR_2)
   VAR_14 = FUNC_14(VAR_7,
     VAR_10->sc_timer.expires);

  if (VAR_14) {
   FUNC_12(&VAR_10->sc_state_lock);
   FUNC_9();
   FUNC_11(&VAR_10->sc_state_lock);
  }
  FUNC_1(&VAR_10->sc_wait_daemon, &VAR_8);
  VAR_12 = ((VAR_10->sc_state & VAR_2) &&
      FUNC_13(VAR_7, VAR_10->sc_timer.expires));

  if (FUNC_4(VAR_11) && FUNC_5(VAR_11))
   FUNC_10(VAR_11);
 }
 goto loop;

 end_thread:
 FUNC_12(&VAR_10->sc_state_lock);


 VAR_10->sc_task = ((void*)0);
 FUNC_16(&VAR_10->sc_wait_task);
 return 0;
}
