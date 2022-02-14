
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* get_host_state ) (struct fm10k_hw*,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ mac; } ;
struct fm10k_intfc {int host_ready; int flags; int last_reset; int state; int link_down_event; struct fm10k_hw hw; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 int FUNC_3 (struct fm10k_intfc*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (struct fm10k_hw*,int*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct fm10k_intfc *VAR_3)
{
 struct fm10k_hw *VAR_4 = &VAR_3->hw;
 s32 VAR_5;

 if (FUNC_8(VAR_2, VAR_3->state)) {
  VAR_3->host_ready = 0;
  if (FUNC_9(VAR_3->link_down_event))
   return;
  FUNC_0(VAR_2, VAR_3->state);
 }

 if (FUNC_8(VAR_1, VAR_3->flags)) {
  if (FUNC_4()) {
   FUNC_1(VAR_3);
   FUNC_5();
  }
 }


 FUNC_2(VAR_3);

 VAR_5 = VAR_4->mac.ops.get_host_state(VAR_4, &VAR_3->host_ready);
 if (VAR_5 && FUNC_10(VAR_3->last_reset))
  FUNC_6(VAR_0, VAR_3->flags);


 FUNC_3(VAR_3);
}
