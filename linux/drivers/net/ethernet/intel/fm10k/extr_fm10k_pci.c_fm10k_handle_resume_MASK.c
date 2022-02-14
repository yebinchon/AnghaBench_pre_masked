
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* rebind_hw_stats ) (struct fm10k_hw*,int *) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ mac; } ;
struct fm10k_intfc {int host_ready; int state; scalar_t__ link_down_event; int stats; TYPE_3__* pdev; struct fm10k_hw hw; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 int FUNC_3 (struct fm10k_intfc*) ;
 int FUNC_4 (struct fm10k_intfc*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct fm10k_hw*,int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct fm10k_intfc *VAR_4)
{
 struct fm10k_hw *VAR_5 = &VAR_4->hw;
 int VAR_6;




 if (!FUNC_7(VAR_2, VAR_4->state))
  FUNC_0(&VAR_4->pdev->dev,
    "Device was shut down as part of suspend... Attempting to recover\n");


 VAR_5->mac.ops.rebind_hw_stats(VAR_5, &VAR_4->stats);

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  return VAR_6;




 VAR_4->host_ready = 0;
 FUNC_4(VAR_4);


 VAR_4->link_down_event = VAR_3 + (VAR_0);
 FUNC_5(VAR_1, VAR_4->state);


 FUNC_3(VAR_4);


 FUNC_2(VAR_4);

 return 0;
}
