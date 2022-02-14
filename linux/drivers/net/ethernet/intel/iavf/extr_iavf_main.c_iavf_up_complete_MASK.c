
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct iavf_adapter {int watchdog_task; int flags; int aq_required; TYPE_1__ vsi; int state; } ;


 scalar_t__ FUNC_0 (struct iavf_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iavf_adapter*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct iavf_adapter *VAR_5)
{
 VAR_5->state = VAR_2;
 FUNC_1(VAR_3, VAR_5->vsi.state);

 FUNC_2(VAR_5);

 VAR_5->aq_required |= VAR_0;
 if (FUNC_0(VAR_5))
  VAR_5->flags |= VAR_1;
 FUNC_3(VAR_4, &VAR_5->watchdog_task, 0);
}
