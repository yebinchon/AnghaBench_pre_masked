
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int min_timeout; int max_timeout; int * ops; TYPE_2__* info; } ;
struct mlxreg_wdt {int reset_idx; int action_idx; int timeout_idx; int tleft_idx; int ping_idx; scalar_t__ wdt_type; TYPE_1__ wdd; struct mlxreg_core_platform_data* pdata; } ;
struct mlxreg_core_platform_data {int counter; scalar_t__ version; int identity; struct mlxreg_core_data* data; } ;
struct mlxreg_core_data {int label; } ;
struct TYPE_5__ {char* identity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct mlxreg_wdt *VAR_9,
         struct mlxreg_core_platform_data *VAR_10)
{
 struct mlxreg_core_data *VAR_11 = VAR_10->data;
 int VAR_12;

 VAR_9->reset_idx = -VAR_0;
 for (VAR_12 = 0; VAR_12 < VAR_10->counter; VAR_12++, VAR_11++) {
  if (FUNC_0(VAR_11->label, "action", sizeof(VAR_11->label)))
   VAR_9->action_idx = VAR_12;
  else if (FUNC_0(VAR_11->label, "timeout", sizeof(VAR_11->label)))
   VAR_9->timeout_idx = VAR_12;
  else if (FUNC_0(VAR_11->label, "timeleft", sizeof(VAR_11->label)))
   VAR_9->tleft_idx = VAR_12;
  else if (FUNC_0(VAR_11->label, "ping", sizeof(VAR_11->label)))
   VAR_9->ping_idx = VAR_12;
  else if (FUNC_0(VAR_11->label, "reset", sizeof(VAR_11->label)))
   VAR_9->reset_idx = VAR_12;
 }

 VAR_9->pdata = VAR_10;
 if (FUNC_0(VAR_10->identity, VAR_6.identity,
      sizeof(VAR_6.identity)))
  VAR_9->wdd.info = &VAR_6;
 else
  VAR_9->wdd.info = &VAR_5;

 VAR_9->wdt_type = VAR_10->version;
 if (VAR_9->wdt_type == VAR_4) {
  VAR_9->wdd.ops = &VAR_8;
  VAR_9->wdd.max_timeout = VAR_2;
 } else {
  VAR_9->wdd.ops = &VAR_7;
  VAR_9->wdd.max_timeout = VAR_1;
 }
 VAR_9->wdd.min_timeout = VAR_3;
}
