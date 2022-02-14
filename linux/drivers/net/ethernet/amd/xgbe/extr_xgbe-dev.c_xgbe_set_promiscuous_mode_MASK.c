
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {TYPE_1__* netdev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,unsigned int) ;
 int VAR_3 ;
 int FUNC_2 (struct xgbe_prv_data*,int ,TYPE_1__*,char*,char*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_5(struct xgbe_prv_data *VAR_4,
         unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_5 ? 1 : 0;

 if (FUNC_0(VAR_4, VAR_0, VAR_2) == VAR_6)
  return 0;

 FUNC_2(VAR_4, VAR_3, VAR_4->netdev, "%s promiscuous mode\n",
    VAR_5 ? "entering" : "leaving");
 FUNC_1(VAR_4, VAR_0, VAR_2, VAR_6);


 if (VAR_5) {
  FUNC_3(VAR_4);
 } else {
  if (VAR_4->netdev->features & VAR_1)
   FUNC_4(VAR_4);
 }

 return 0;
}
