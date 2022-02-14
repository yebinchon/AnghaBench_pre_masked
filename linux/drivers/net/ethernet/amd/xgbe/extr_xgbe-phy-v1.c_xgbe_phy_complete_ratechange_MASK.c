
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xgbe_prv_data {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_1 (struct xgbe_prv_data*,int ) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_4 (struct xgbe_prv_data*,int ,int ,char*,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct xgbe_prv_data *VAR_9)
{
 unsigned int VAR_10;
 u16 VAR_11;


 FUNC_2(VAR_9, VAR_5, VAR_0, 0);


 VAR_10 = VAR_7;
 while (VAR_10--) {
  FUNC_5(50, 75);

  VAR_11 = FUNC_1(VAR_9, VAR_4);
  if (FUNC_3(VAR_11, VAR_4, VAR_3) &&
      FUNC_3(VAR_11, VAR_4, VAR_6))
   goto rx_reset;
 }

 FUNC_4(VAR_9, VAR_8, VAR_9->netdev, "SerDes rx/tx not ready (%#hx)\n",
    VAR_11);

rx_reset:

 FUNC_0(VAR_9, VAR_2, VAR_1, 0);
 FUNC_0(VAR_9, VAR_2, VAR_1, 1);
}
