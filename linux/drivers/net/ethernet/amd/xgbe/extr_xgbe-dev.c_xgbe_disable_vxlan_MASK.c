
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
 int VAR_5 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_7)
{
 if (!VAR_7->hw_feat.vxn)
  return;


 FUNC_0(VAR_7, VAR_1, VAR_4, 0);


 FUNC_0(VAR_7, VAR_0, VAR_5, 0);


 FUNC_0(VAR_7, VAR_2, VAR_3, 0);

 FUNC_1(VAR_7, VAR_6, VAR_7->netdev, "VXLAN acceleration disabled\n");
}
