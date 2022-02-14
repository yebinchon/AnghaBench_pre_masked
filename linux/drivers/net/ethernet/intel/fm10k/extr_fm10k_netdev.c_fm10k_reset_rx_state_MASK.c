
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int (* update_lport_state ) (struct fm10k_hw*,int ,int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ mac; } ;
struct fm10k_intfc {int xcast_mode; int glort_count; int glort; int state; struct fm10k_hw hw; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 (struct fm10k_intfc*,int ,int) ;
 scalar_t__ FUNC_3 (struct fm10k_intfc*) ;
 int FUNC_4 (struct fm10k_intfc*) ;
 int FUNC_5 (struct fm10k_intfc*) ;
 int FUNC_6 (struct fm10k_hw*,int ,int ,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int) ;

void FUNC_9(struct fm10k_intfc *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 struct fm10k_hw *VAR_4 = &VAR_2->hw;


 while (FUNC_7(VAR_1, VAR_2->state))
  FUNC_8(1000, 2000);


 FUNC_2(VAR_2, VAR_2->glort, 1);

 FUNC_4(VAR_2);




 if (FUNC_3(VAR_2))
  VAR_4->mac.ops.update_lport_state(VAR_4, VAR_2->glort,
            VAR_2->glort_count, 0);

 FUNC_5(VAR_2);


 VAR_2->xcast_mode = VAR_0;


 FUNC_1(VAR_3, ((void*)0));
 FUNC_0(VAR_3, ((void*)0));
}
