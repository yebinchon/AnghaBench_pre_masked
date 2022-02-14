
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct atl1e_adapter {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int*) ;
 struct atl1e_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2, int VAR_3)
{
 struct atl1e_adapter *VAR_4 = FUNC_1(VAR_1);
 u16 VAR_5;

 FUNC_0(&VAR_4->hw, VAR_3 & VAR_0, &VAR_5);
 return VAR_5;
}
