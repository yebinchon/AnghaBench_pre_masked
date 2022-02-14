
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int entries; } ;
struct TYPE_5__ {int type; } ;
struct qeth_card {int close_dev_work; int buffer_reclaim_work; TYPE_3__ ipato; int wait_q; int cmd_waiter_list; int kernel_thread_starter; int discipline_mutex; int conf_mutex; int thread_mask_lock; int lock; int state; TYPE_1__ info; } ;
struct TYPE_6__ {int driver_info; } ;
struct TYPE_8__ {TYPE_2__ id; } ;


 TYPE_4__* FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct qeth_card*,int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct qeth_card*) ;
 int FUNC_8 (struct qeth_card*) ;
 int VAR_3 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct qeth_card *VAR_4)
{
 FUNC_4(VAR_4, 2, "setupcrd");

 VAR_4->info.type = FUNC_0(VAR_4)->id.driver_info;
 VAR_4->state = VAR_0;
 FUNC_9(&VAR_4->lock);
 FUNC_9(&VAR_4->thread_mask_lock);
 FUNC_6(&VAR_4->conf_mutex);
 FUNC_6(&VAR_4->discipline_mutex);
 FUNC_3(&VAR_4->kernel_thread_starter, VAR_3);
 FUNC_2(&VAR_4->cmd_waiter_list);
 FUNC_5(&VAR_4->wait_q);
 FUNC_8(VAR_4);

 FUNC_2(&VAR_4->ipato.entries);
 FUNC_7(VAR_4);
 FUNC_1(&VAR_4->buffer_reclaim_work, VAR_1);
 FUNC_3(&VAR_4->close_dev_work, VAR_2);
}
