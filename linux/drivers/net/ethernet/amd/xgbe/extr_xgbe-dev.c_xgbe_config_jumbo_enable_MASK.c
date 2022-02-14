
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {TYPE_1__* netdev; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,unsigned int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = (VAR_3->netdev->mtu > VAR_2) ? 1 : 0;

 FUNC_0(VAR_3, VAR_1, VAR_0, VAR_4);
}
