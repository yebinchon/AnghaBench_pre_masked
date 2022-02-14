
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* update_int_moderator ) (struct fm10k_hw*) ;int (* start_hw ) (struct fm10k_hw*) ;} ;
struct TYPE_4__ {int get_host_state; TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ mac; } ;
struct fm10k_intfc {int service_timer; int netdev; int state; struct fm10k_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 int FUNC_3 (struct fm10k_intfc*) ;
 int FUNC_4 (struct fm10k_intfc*) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct fm10k_hw*) ;
 int FUNC_8 (struct fm10k_hw*) ;

void FUNC_9(struct fm10k_intfc *VAR_3)
{
 struct fm10k_hw *VAR_4 = &VAR_3->hw;


 VAR_4->mac.ops.start_hw(VAR_4);


 FUNC_2(VAR_3);


 FUNC_1(VAR_3);


 VAR_4->mac.ops.update_int_moderator(VAR_4);


 FUNC_0(VAR_1, VAR_3->state);


 FUNC_0(VAR_0, VAR_3->state);


 FUNC_3(VAR_3);


 FUNC_4(VAR_3);


 FUNC_6(VAR_3->netdev);


 VAR_4->mac.get_host_state = 1;
 FUNC_5(&VAR_3->service_timer, VAR_2);
}
