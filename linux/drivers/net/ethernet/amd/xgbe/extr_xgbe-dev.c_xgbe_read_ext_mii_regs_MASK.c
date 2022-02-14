
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; int mdio_complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,unsigned int) ;
 int FUNC_2 (unsigned int,int ,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 unsigned int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct xgbe_prv_data *VAR_7, int VAR_8,
      int VAR_9)
{
 unsigned int VAR_10, VAR_11;

 FUNC_4(&VAR_7->mdio_complete);

 VAR_10 = FUNC_6(VAR_8, VAR_9);
 FUNC_1(VAR_7, VAR_5, VAR_10);

 VAR_11 = 0;
 FUNC_2(VAR_11, VAR_6, VAR_1, 3);
 FUNC_2(VAR_11, VAR_6, VAR_0, 1);
 FUNC_1(VAR_7, VAR_6, VAR_11);

 if (!FUNC_5(&VAR_7->mdio_complete, VAR_4)) {
  FUNC_3(VAR_7->netdev, "mdio read operation timed out\n");
  return -VAR_3;
 }

 return FUNC_0(VAR_7, VAR_6, VAR_2);
}
