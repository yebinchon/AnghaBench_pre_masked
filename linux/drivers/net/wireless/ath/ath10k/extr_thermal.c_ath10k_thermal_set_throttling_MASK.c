
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int quiet_period; int throttle_state; } ;
struct TYPE_5__ {TYPE_3__* ops; int svc_map; } ;
struct ath10k {scalar_t__ state; TYPE_1__ thermal; TYPE_2__ wmi; int conf_mutex; } ;
struct TYPE_6__ {int gen_pdev_set_quiet_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,char*,int,int,int,int) ;
 int FUNC_1 (struct ath10k*,int,int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct ath10k *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 int VAR_7;

 FUNC_2(&VAR_3->conf_mutex);

 if (!FUNC_3(VAR_2, VAR_3->wmi.svc_map))
  return;

 if (!VAR_3->wmi.ops->gen_pdev_set_quiet_mode)
  return;

 if (VAR_3->state != VAR_1)
  return;

 VAR_4 = VAR_3->thermal.quiet_period;
 VAR_5 = (VAR_4 * VAR_3->thermal.throttle_state) / 100;
 VAR_6 = VAR_5 ? 1 : 0;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5,
          VAR_0,
          VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_3, "failed to set quiet mode period %u duarion %u enabled %u ret %d\n",
       VAR_4, VAR_5, VAR_6, VAR_7);
 }
}
