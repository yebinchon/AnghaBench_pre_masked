
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hash_table_size; } ;
struct xgbe_prv_data {TYPE_2__ hw_feat; TYPE_1__* netdev; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_1 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_4)
{
 FUNC_1(VAR_4, VAR_4->netdev->dev_addr);


 if (VAR_4->hw_feat.hash_table_size) {
  FUNC_0(VAR_4, VAR_3, VAR_1, 1);
  FUNC_0(VAR_4, VAR_3, VAR_2, 1);
  FUNC_0(VAR_4, VAR_3, VAR_0, 1);
 }
}
