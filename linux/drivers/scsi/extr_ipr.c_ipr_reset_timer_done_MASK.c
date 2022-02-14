
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct ipr_ioa_cfg {TYPE_1__* host; struct ipr_cmnd* reset_cmd; } ;
struct ipr_cmnd {int (* done ) (struct ipr_cmnd*) ;int queue; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_2__ {int host_lock; } ;


 struct ipr_cmnd* FUNC_0 (int ,struct timer_list*,int ) ;
 struct ipr_cmnd* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct ipr_cmnd*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct ipr_cmnd *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 struct ipr_ioa_cfg *VAR_4 = VAR_3->ioa_cfg;
 unsigned long VAR_5 = 0;

 FUNC_2(VAR_4->host->host_lock, VAR_5);

 if (VAR_4->reset_cmd == VAR_3) {
  FUNC_1(&VAR_3->queue);
  VAR_3->done(VAR_3);
 }

 FUNC_3(VAR_4->host->host_lock, VAR_5);
}
