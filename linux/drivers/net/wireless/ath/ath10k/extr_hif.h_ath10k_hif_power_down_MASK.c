
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ hif; } ;
struct TYPE_3__ {int (* power_down ) (struct ath10k*) ;} ;


 int FUNC_0 (struct ath10k*) ;

__attribute__((used)) static inline void FUNC_1(struct ath10k *VAR_0)
{
 VAR_0->hif.ops->power_down(VAR_0);
}
