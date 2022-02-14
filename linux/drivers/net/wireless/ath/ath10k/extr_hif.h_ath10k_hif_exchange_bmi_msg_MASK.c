
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ hif; } ;
struct TYPE_3__ {int (* exchange_bmi_msg ) (struct ath10k*,void*,int ,void*,int *) ;} ;


 int FUNC_0 (struct ath10k*,void*,int ,void*,int *) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k *VAR_0,
           void *VAR_1, u32 VAR_2,
           void *VAR_3, u32 *VAR_4)
{
 return VAR_0->hif.ops->exchange_bmi_msg(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4);
}
