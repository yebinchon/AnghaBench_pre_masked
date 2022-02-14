
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xgbe_prv_data {int netdev; int mdio_complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,unsigned int) ;
 int FUNC_1 (unsigned int,int ,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 unsigned int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct xgbe_prv_data *VAR_7, int VAR_8,
       int VAR_9, u16 VAR_10)
{
 unsigned int VAR_11, VAR_12;

 FUNC_3(&VAR_7->mdio_complete);

 VAR_11 = FUNC_5(VAR_8, VAR_9);
 FUNC_0(VAR_7, VAR_5, VAR_11);

 VAR_12 = 0;
 FUNC_1(VAR_12, VAR_6, VAR_2, VAR_10);
 FUNC_1(VAR_12, VAR_6, VAR_1, 1);
 FUNC_1(VAR_12, VAR_6, VAR_0, 1);
 FUNC_0(VAR_7, VAR_6, VAR_12);

 if (!FUNC_4(&VAR_7->mdio_complete, VAR_4)) {
  FUNC_2(VAR_7->netdev, "mdio write operation timed out\n");
  return -VAR_3;
 }

 return 0;
}
