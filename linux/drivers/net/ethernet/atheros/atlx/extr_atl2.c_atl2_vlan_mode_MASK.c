
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct atl2_adapter {int hw; } ;
typedef int netdev_features_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct atl2_adapter*) ;
 int FUNC_4 (struct atl2_adapter*) ;
 struct atl2_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1,
 netdev_features_t VAR_2)
{
 struct atl2_adapter *VAR_3 = FUNC_5(VAR_1);
 u32 VAR_4;

 FUNC_3(VAR_3);

 VAR_4 = FUNC_0(&VAR_3->hw, VAR_0);
 FUNC_2(VAR_2, &VAR_4);
 FUNC_1(&VAR_3->hw, VAR_0, VAR_4);

 FUNC_4(VAR_3);
}
