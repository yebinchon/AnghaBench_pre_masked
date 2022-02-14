
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct ath10k_ce_pipe {int attr_flags; } ;
struct ath10k_ce {struct ath10k_ce_pipe* ce_states; } ;
struct TYPE_4__ {scalar_t__ rri_on_ddr; } ;
struct ath10k {TYPE_1__* hw_ce_regs; TYPE_2__ hw_params; } ;
struct TYPE_3__ {size_t current_drri_addr; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (struct ath10k*,size_t) ;
 struct ath10k_ce* FUNC_2 (struct ath10k*) ;
 size_t FUNC_3 (struct ath10k*,size_t) ;

__attribute__((used)) static inline u32 FUNC_4(struct ath10k *VAR_1,
           u32 VAR_2)
{
 struct ath10k_ce *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4 = FUNC_0(VAR_2);
 struct ath10k_ce_pipe *VAR_5 = &VAR_3->ce_states[VAR_4];
 u32 VAR_6;

 if (VAR_1->hw_params.rri_on_ddr &&
     (VAR_5->attr_flags & VAR_0))
  VAR_6 = FUNC_1(VAR_1, VAR_4);
 else
  VAR_6 = FUNC_3(VAR_1, VAR_2 +
      VAR_1->hw_ce_regs->current_drri_addr);

 return VAR_6;
}
