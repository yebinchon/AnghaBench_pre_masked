
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xgbe_prv_data {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct xgbe_prv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,struct net_device*,char*,int) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_3(struct net_device *VAR_1, u8 VAR_2)
{
 struct xgbe_prv_data *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4 = FUNC_2(VAR_1);

 FUNC_1(VAR_3, VAR_0, VAR_1, "DCBX=%#hhx\n", VAR_2);

 if (VAR_2 & ~VAR_4)
  return 1;

 if ((VAR_2 & VAR_4) != VAR_4)
  return 1;

 return 0;
}
