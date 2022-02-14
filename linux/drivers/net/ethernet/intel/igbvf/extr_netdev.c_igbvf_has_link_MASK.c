
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* check_for_link ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {int get_link_status; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; int mbx_lock; } ;
struct igbvf_adapter {int reset_task; scalar_t__ last_reset; int state; struct e1000_hw hw; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_6(struct igbvf_adapter *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 s32 VAR_6 = VAR_0;
 bool VAR_7;


 if (FUNC_4(VAR_2, &VAR_4->state))
  return 0;

 FUNC_1(&VAR_5->mbx_lock);

 VAR_6 = VAR_5->mac.ops.check_for_link(VAR_5);

 FUNC_2(&VAR_5->mbx_lock);

 VAR_7 = !VAR_5->mac.get_link_status;


 if (VAR_6 && FUNC_5(VAR_3, VAR_4->last_reset + (10 * VAR_1)))
  FUNC_0(&VAR_4->reset_task);

 return VAR_7;
}
