
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {TYPE_1__* mac_ops; } ;
struct TYPE_2__ {int (* enable_tx_pause ) (struct xgene_enet_pdata*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct xgene_enet_pdata*,int) ;
 int FUNC_1 (struct xgene_enet_pdata*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct xgene_enet_pdata *VAR_1, bool VAR_2)
{
 FUNC_1(VAR_1, VAR_0, VAR_2);

 VAR_1->mac_ops->enable_tx_pause(VAR_1, VAR_2);
}
