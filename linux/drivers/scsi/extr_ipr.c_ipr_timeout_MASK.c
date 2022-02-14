
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct ipr_ioa_cfg {scalar_t__ sdt_state; TYPE_2__* host; struct ipr_cmnd* reset_cmd; int in_reset_reload; TYPE_1__* pdev; int errors_logged; } ;
struct ipr_cmnd {struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct ipr_cmnd* FUNC_1 (int ,struct timer_list*,int ) ;
 struct ipr_cmnd* VAR_5 ;
 int FUNC_2 (struct ipr_ioa_cfg*,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_7)
{
 struct ipr_cmnd *VAR_8 = FUNC_1(VAR_8, VAR_7, VAR_6);
 unsigned long VAR_9 = 0;
 struct ipr_ioa_cfg *VAR_10 = VAR_8->ioa_cfg;

 VAR_0;
 FUNC_3(VAR_10->host->host_lock, VAR_9);

 VAR_10->errors_logged++;
 FUNC_0(&VAR_10->pdev->dev,
  "Adapter being reset due to command timeout.\n");

 if (VAR_4 == VAR_10->sdt_state)
  VAR_10->sdt_state = VAR_1;

 if (!VAR_10->in_reset_reload || VAR_10->reset_cmd == VAR_8)
  FUNC_2(VAR_10, VAR_2);

 FUNC_4(VAR_10->host->host_lock, VAR_9);
 VAR_3;
}
