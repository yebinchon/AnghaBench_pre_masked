
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct ath10k_ce_pipe {TYPE_1__* ops; } ;
struct ath10k_ce {struct ath10k_ce_pipe* ce_states; } ;
struct ath10k {TYPE_2__* hw_ce_regs; } ;
struct TYPE_4__ {size_t sr_base_addr_lo; } ;
struct TYPE_3__ {int (* ce_set_src_ring_base_addr_hi ) (struct ath10k*,size_t,int ) ;} ;


 size_t FUNC_0 (struct ath10k*,size_t) ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,size_t,size_t) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (struct ath10k*,size_t,int ) ;

__attribute__((used)) static inline void FUNC_5(struct ath10k *VAR_0,
          u32 VAR_1,
          u64 VAR_2)
{
 struct ath10k_ce *VAR_3 = FUNC_1(VAR_0);
 struct ath10k_ce_pipe *VAR_4 = &VAR_3->ce_states[VAR_1];
 u32 VAR_5 = FUNC_0(VAR_0, VAR_1);
 u32 VAR_6 = FUNC_3(VAR_2);

 FUNC_2(VAR_0, VAR_5 +
     VAR_0->hw_ce_regs->sr_base_addr_lo, VAR_6);

 if (VAR_4->ops->ce_set_src_ring_base_addr_hi) {
  VAR_4->ops->ce_set_src_ring_base_addr_hi(VAR_0, VAR_5,
           VAR_2);
 }
}
