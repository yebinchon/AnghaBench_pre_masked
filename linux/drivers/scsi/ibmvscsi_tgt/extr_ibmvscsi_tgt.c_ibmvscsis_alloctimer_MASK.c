
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct timer_cb {int started; scalar_t__ timer_pops; TYPE_1__ timer; } ;
struct scsi_info {struct timer_cb rsp_q_timer; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static long FUNC_1(struct scsi_info *VAR_4)
{
 struct timer_cb *VAR_5;

 VAR_5 = &VAR_4->rsp_q_timer;
 FUNC_0(&VAR_5->timer, VAR_1, VAR_2);

 VAR_5->timer.function = VAR_3;
 VAR_5->started = 0;
 VAR_5->timer_pops = 0;

 return VAR_0;
}
