
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath6kl {TYPE_1__* htc_ops; } ;
struct TYPE_2__ {void* (* create ) (struct ath6kl*) ;} ;


 void* FUNC_0 (struct ath6kl*) ;

__attribute__((used)) static inline void *FUNC_1(struct ath6kl *VAR_0)
{
 return VAR_0->htc_ops->create(VAR_0);
}
