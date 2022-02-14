
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct iavf_adapter {scalar_t__ state; int down_waitqueue; int crit_section; int flags; TYPE_1__ vsi; } ;


 scalar_t__ FUNC_0 (struct iavf_adapter*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct iavf_adapter*) ;
 int FUNC_3 (struct iavf_adapter*) ;
 int FUNC_4 (int) ;
 struct iavf_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5)
{
 struct iavf_adapter *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;

 if (VAR_6->state <= VAR_2)
  return 0;

 while (FUNC_8(VAR_3,
    &VAR_6->crit_section))
  FUNC_9(500, 1000);

 FUNC_7(VAR_4, VAR_6->vsi.state);
 if (FUNC_0(VAR_6))
  VAR_6->flags |= VAR_0;

 FUNC_2(VAR_6);
 VAR_6->state = VAR_2;
 FUNC_3(VAR_6);

 FUNC_1(VAR_3, &VAR_6->crit_section);
 VAR_7 = FUNC_10(VAR_6->down_waitqueue,
        VAR_6->state == VAR_1,
        FUNC_4(500));
 if (!VAR_7)
  FUNC_6(VAR_5, "Device resources not yet released\n");
 return 0;
}
