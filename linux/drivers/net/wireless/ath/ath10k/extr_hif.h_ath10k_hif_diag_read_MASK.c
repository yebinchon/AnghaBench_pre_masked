
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ hif; } ;
struct TYPE_3__ {int (* diag_read ) (struct ath10k*,int ,void*,size_t) ;} ;


 int FUNC_0 (struct ath10k*,int ,void*,size_t) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k *VAR_0, u32 VAR_1, void *VAR_2,
           size_t VAR_3)
{
 return VAR_0->hif.ops->diag_read(VAR_0, VAR_1, VAR_2, VAR_3);
}
