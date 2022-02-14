
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40e_vsi {int alloc_queue_pairs; int netdev_registered; int netdev; } ;
struct TYPE_3__ {scalar_t__ num_vsis; } ;
struct TYPE_4__ {TYPE_1__ func_caps; } ;
struct i40e_pf {scalar_t__ num_alloc_vsi; int lan_vsi; int pdev; int service_timer; scalar_t__ service_timer_period; struct i40e_vsi** vsi; TYPE_2__ hw; int state; int service_task; } ;
struct i40e_hw {int hw_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i40e_vsi*) ;
 int FUNC_4 (struct i40e_pf*) ;
 int FUNC_5 (struct i40e_pf*) ;
 int FUNC_6 (struct i40e_pf*) ;
 int FUNC_7 (struct i40e_pf*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct i40e_pf*) ;
 int FUNC_9 (struct i40e_hw*) ;
 int FUNC_10 (struct i40e_pf*,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_8 ;
 struct i40e_vsi** FUNC_12 (scalar_t__,int,int ) ;
 int FUNC_13 (struct i40e_pf*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_22(struct i40e_pf *VAR_9, struct i40e_hw *VAR_10)
{
 struct i40e_vsi *VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_18(VAR_9->pdev);


 FUNC_21(&VAR_9->service_timer, VAR_7, 0);
 VAR_9->service_timer_period = VAR_2;

 FUNC_0(&VAR_9->service_task, VAR_6);
 FUNC_1(VAR_5, VAR_9->state);

 VAR_12 = FUNC_5(VAR_9);
 if (VAR_12)
  goto err_switch_setup;






 if (VAR_9->hw.func_caps.num_vsis < VAR_3)
  VAR_9->num_alloc_vsi = VAR_3;
 else
  VAR_9->num_alloc_vsi = VAR_9->hw.func_caps.num_vsis;


 VAR_9->vsi = FUNC_12(VAR_9->num_alloc_vsi, sizeof(struct i40e_vsi *),
     VAR_1);
 if (!VAR_9->vsi) {
  VAR_12 = -VAR_0;
  goto err_switch_setup;
 }




 VAR_13 = FUNC_10(VAR_9, VAR_4);
 if (VAR_13 < 0)
  goto err_switch_setup;
 VAR_9->lan_vsi = VAR_13;
 VAR_11 = VAR_9->vsi[VAR_13];
 if (!VAR_11)
  goto err_switch_setup;
 VAR_11->alloc_queue_pairs = 1;
 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12)
  goto err_switch_setup;
 VAR_12 = FUNC_19(VAR_11->netdev);
 if (VAR_12)
  goto err_switch_setup;
 VAR_11->netdev_registered = 1;
 FUNC_4(VAR_9);

 VAR_12 = FUNC_8(VAR_9);
 if (VAR_12)
  goto err_switch_setup;


 FUNC_7(VAR_9);


 FUNC_14(&VAR_9->service_timer,
    FUNC_20(VAR_8 + VAR_9->service_timer_period));

 return 0;

err_switch_setup:
 FUNC_6(VAR_9);
 FUNC_2(&VAR_9->service_timer);
 FUNC_9(VAR_10);
 FUNC_11(VAR_10->hw_addr);
 FUNC_16(VAR_9->pdev);
 FUNC_17(VAR_9->pdev);
 FUNC_15(VAR_9->pdev);
 FUNC_13(VAR_9);

 return VAR_12;
}
