
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath6kl {TYPE_1__* hif_ops; } ;
struct TYPE_2__ {int (* diag_read32 ) (struct ath6kl*,int ,int *) ;} ;


 int FUNC_0 (struct ath6kl*,int ,int *) ;

__attribute__((used)) static inline int FUNC_1(struct ath6kl *VAR_0, u32 VAR_1,
      u32 *VAR_2)
{
 return VAR_0->hif_ops->diag_read32(VAR_0, VAR_1, VAR_2);
}
