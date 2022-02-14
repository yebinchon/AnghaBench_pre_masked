
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_ce {TYPE_2__* bus_ops; } ;
struct TYPE_3__ {int per_ce_irq; } ;
struct ath10k {TYPE_1__ hw_params; } ;
struct TYPE_4__ {int (* read32 ) (struct ath10k*,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_3(struct ath10k *VAR_3)
{
 struct ath10k_ce *VAR_4 = FUNC_1(VAR_3);

 if (!VAR_3->hw_params.per_ce_irq)
  return FUNC_0(
   VAR_4->bus_ops->read32((VAR_3), VAR_1 +
   VAR_2));
 else
  return VAR_0;
}
