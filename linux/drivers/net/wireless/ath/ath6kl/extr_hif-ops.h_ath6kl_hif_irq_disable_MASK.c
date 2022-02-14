
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath6kl {TYPE_1__* hif_ops; } ;
struct TYPE_2__ {void (* irq_disable ) (struct ath6kl*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 void FUNC_1 (struct ath6kl*) ;

__attribute__((used)) static inline void FUNC_2(struct ath6kl *VAR_1)
{
 FUNC_0(VAR_0, "hif irq disable\n");

 return VAR_1->hif_ops->irq_disable(VAR_1);
}
