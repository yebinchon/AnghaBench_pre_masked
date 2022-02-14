
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ hif; } ;
struct TYPE_3__ {int (* diag_write ) (struct ath10k*,int ,void const*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,void const*,int) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k *VAR_1, u32 VAR_2,
     const void *VAR_3, int VAR_4)
{
 if (!VAR_1->hif.ops->diag_write)
  return -VAR_0;

 return VAR_1->hif.ops->diag_write(VAR_1, VAR_2, VAR_3, VAR_4);
}
