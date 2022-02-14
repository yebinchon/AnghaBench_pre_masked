
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct atl1e_hw {struct atl1e_adapter* adapter; } ;
struct atl1e_adapter {int netdev; } ;


 int FUNC_0 (struct atl1e_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct atl1e_hw*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;

int FUNC_4(struct atl1e_hw *VAR_7)
{
 struct atl1e_adapter *VAR_8 = VAR_7->adapter;
 int VAR_9;
 u16 VAR_10;

 VAR_10 = VAR_2 | VAR_0 | VAR_1;

 VAR_9 = FUNC_1(VAR_7, VAR_5, VAR_10);
 if (VAR_9) {
  u32 VAR_11;
  int VAR_12;



  for (VAR_12 = 0; VAR_12 < 25; VAR_12++) {
   FUNC_2(1);
   VAR_11 = FUNC_0(VAR_7, VAR_6);
   if (!(VAR_11 & (VAR_4 | VAR_3)))
    break;
  }

  if (0 != (VAR_11 & (VAR_4 | VAR_3))) {
   FUNC_3(VAR_8->netdev,
       "pcie linkdown at least for 25ms\n");
   return VAR_9;
  }

  FUNC_3(VAR_8->netdev, "pcie linkup after %d ms\n", VAR_12);
 }
 return 0;
}
