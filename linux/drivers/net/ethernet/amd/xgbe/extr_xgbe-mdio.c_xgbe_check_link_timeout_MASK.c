
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned long link_check; int netdev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = VAR_4->link_check + (VAR_1 * VAR_0);
 if (FUNC_1(VAR_2, VAR_5)) {
  FUNC_0(VAR_4, VAR_3, VAR_4->netdev, "AN link timeout\n");
  FUNC_2(VAR_4);
 }
}
