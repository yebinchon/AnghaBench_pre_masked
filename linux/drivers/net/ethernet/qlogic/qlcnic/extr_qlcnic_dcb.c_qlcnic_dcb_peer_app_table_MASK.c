
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_dcb_cee {struct qlcnic_dcb_app* app; } ;
struct qlcnic_dcb_app {int protocol; int priority; int selector; int valid; } ;
struct qlcnic_adapter {TYPE_2__* dcb; } ;
struct net_device {int dummy; } ;
struct dcb_app {int protocol; int priority; int selector; } ;
struct TYPE_4__ {TYPE_1__* cfg; int state; } ;
struct TYPE_3__ {struct qlcnic_dcb_cee* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
         struct dcb_app *VAR_4)
{
 struct qlcnic_adapter *VAR_5 = FUNC_0(VAR_3);
 struct qlcnic_dcb_cee *VAR_6;
 struct qlcnic_dcb_app *VAR_7;
 int VAR_8, VAR_9;

 if (!FUNC_1(VAR_0, &VAR_5->dcb->state))
  return 0;

 VAR_6 = &VAR_5->dcb->cfg->type[VAR_2];

 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = &VAR_6->app[VAR_8];
  if (!VAR_7->valid)
   continue;

  VAR_4[VAR_9].selector = VAR_7->selector;
  VAR_4[VAR_9].priority = VAR_7->priority;
  VAR_4[VAR_9++].protocol = VAR_7->protocol;
 }

 return 0;
}
