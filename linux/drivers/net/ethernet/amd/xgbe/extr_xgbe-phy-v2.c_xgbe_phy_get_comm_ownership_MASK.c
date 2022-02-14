
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct xgbe_prv_data*,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,unsigned int) ;
 int VAR_6 ;
 int FUNC_2 (unsigned int,int ,int ,int) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int,unsigned long) ;
 int FUNC_7 (int,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(struct xgbe_prv_data *VAR_9)
{
 struct xgbe_phy_data *VAR_10 = VAR_9->phy_data;
 unsigned long VAR_11;
 unsigned int VAR_12;





 FUNC_3(&VAR_8);


 FUNC_1(VAR_9, VAR_5, VAR_4);
 FUNC_1(VAR_9, VAR_6, VAR_4);


 VAR_12 = 0;
 FUNC_2(VAR_12, VAR_5, VAR_3, VAR_10->port_id);
 FUNC_2(VAR_12, VAR_5, VAR_0, 1);

 VAR_11 = VAR_7 + (5 * VAR_2);
 while (FUNC_6(VAR_7, VAR_11)) {

  if (FUNC_0(VAR_9, VAR_5) ||
      FUNC_0(VAR_9, VAR_6)) {
   FUNC_7(100, 200);
   continue;
  }


  FUNC_1(VAR_9, VAR_5, VAR_12);
  FUNC_1(VAR_9, VAR_6, VAR_12);

  return 0;
 }

 FUNC_4(&VAR_8);

 FUNC_5(VAR_9->netdev, "unable to obtain hardware mutexes\n");

 return -VAR_1;
}
