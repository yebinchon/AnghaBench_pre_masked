
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vxn; } ;
struct xgbe_prv_data {int netdev; TYPE_1__ hw_feat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int) ;
 int VAR_5 ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_6)
{
 if (!VAR_6->hw_feat.vxn)
  return;


 FUNC_2(VAR_6);


 FUNC_0(VAR_6, VAR_0, VAR_4, 1);


 FUNC_0(VAR_6, VAR_1, VAR_3, 0);
 FUNC_0(VAR_6, VAR_1, VAR_2, 1);

 FUNC_1(VAR_6, VAR_5, VAR_6->netdev, "VXLAN acceleration enabled\n");
}
