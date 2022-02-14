
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ath10k_hif_sg_item {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ hif; } ;
struct TYPE_3__ {int (* tx_sg ) (struct ath10k*,int ,struct ath10k_hif_sg_item*,int) ;} ;


 int FUNC_0 (struct ath10k*,int ,struct ath10k_hif_sg_item*,int) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k *VAR_0, u8 VAR_1,
       struct ath10k_hif_sg_item *VAR_2,
       int VAR_3)
{
 return VAR_0->hif.ops->tx_sg(VAR_0, VAR_1, VAR_2, VAR_3);
}
