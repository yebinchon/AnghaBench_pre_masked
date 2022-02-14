
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct lbs_private {int cmd_timed_out; scalar_t__ dnld_sent; int driver_lock; int waitq; TYPE_2__* cur_cmd; int dev; } ;
struct TYPE_4__ {TYPE_1__* cmdbuf; } ;
struct TYPE_3__ {int command; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct lbs_private* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 struct lbs_private* VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_4)
{
 struct lbs_private *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_2);
 unsigned long VAR_6;

 FUNC_3(&VAR_5->driver_lock, VAR_6);

 if (!VAR_5->cur_cmd)
  goto out;

 FUNC_2(VAR_5->dev, "command 0x%04x timed out\n",
      FUNC_1(VAR_5->cur_cmd->cmdbuf->command));

 VAR_5->cmd_timed_out = 1;





 if (VAR_5->dnld_sent == VAR_0)
  VAR_5->dnld_sent = VAR_1;

 FUNC_5(&VAR_5->waitq);
out:
 FUNC_4(&VAR_5->driver_lock, VAR_6);
}
