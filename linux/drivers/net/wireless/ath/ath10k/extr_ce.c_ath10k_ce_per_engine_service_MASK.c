
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_hw_ce_host_wm_regs {int wm_mask; int cc_mask; } ;
struct ath10k_ce_pipe {int (* send_cb ) (struct ath10k_ce_pipe*) ;int (* recv_cb ) (struct ath10k_ce_pipe*) ;int ctrl_addr; } ;
struct ath10k_ce {int ce_lock; struct ath10k_ce_pipe* ce_states; } ;
struct ath10k {TYPE_1__* hw_ce_regs; } ;
struct TYPE_2__ {struct ath10k_hw_ce_host_wm_regs* wm_regs; } ;


 int FUNC_0 (struct ath10k*,int ,int ) ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ath10k_ce_pipe*) ;
 int FUNC_5 (struct ath10k_ce_pipe*) ;

void FUNC_6(struct ath10k *VAR_0, unsigned int VAR_1)
{
 struct ath10k_ce *VAR_2 = FUNC_1(VAR_0);
 struct ath10k_ce_pipe *VAR_3 = &VAR_2->ce_states[VAR_1];
 struct ath10k_hw_ce_host_wm_regs *VAR_4 = VAR_0->hw_ce_regs->wm_regs;
 u32 VAR_5 = VAR_3->ctrl_addr;

 FUNC_2(&VAR_2->ce_lock);


 FUNC_0(VAR_0, VAR_5,
       VAR_4->cc_mask);

 FUNC_3(&VAR_2->ce_lock);

 if (VAR_3->recv_cb)
  VAR_3->recv_cb(VAR_3);

 if (VAR_3->send_cb)
  VAR_3->send_cb(VAR_3);

 FUNC_2(&VAR_2->ce_lock);





 FUNC_0(VAR_0, VAR_5, VAR_4->wm_mask);

 FUNC_3(&VAR_2->ce_lock);
}
