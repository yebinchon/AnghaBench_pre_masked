
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpaa2_eth_priv {TYPE_1__* dpbp_dev; int mc_io; } ;
struct TYPE_2__ {int mc_handle; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct dpaa2_eth_priv*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct dpaa2_eth_priv *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->mc_io, 0, VAR_0->dpbp_dev->mc_handle);
 FUNC_0(VAR_0->mc_io, 0, VAR_0->dpbp_dev->mc_handle);
 FUNC_3(VAR_0->dpbp_dev);
}
