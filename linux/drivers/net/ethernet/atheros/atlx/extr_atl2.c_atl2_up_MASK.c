
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct atl2_adapter {int hw; int flags; struct net_device* netdev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct atl2_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct atl2_adapter*) ;
 int FUNC_5 (struct atl2_adapter*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct atl2_adapter*) ;

__attribute__((used)) static int FUNC_9(struct atl2_adapter *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->netdev;
 int VAR_6 = 0;
 u32 VAR_7;



 VAR_6 = FUNC_3(&VAR_4->hw);
 if (VAR_6) {
  VAR_6 = -VAR_0;
  return VAR_6;
 }

 FUNC_6(VAR_5);
 FUNC_8(VAR_4);

 FUNC_5(VAR_4);

 if (FUNC_2(VAR_4)) {
  VAR_6 = -VAR_0;
  goto err_up;
 }

 FUNC_7(VAR_3, &VAR_4->flags);

 VAR_7 = FUNC_0(&VAR_4->hw, VAR_2);
 FUNC_1(&VAR_4->hw, VAR_2, VAR_7 |
  VAR_1);

 FUNC_4(VAR_4);

err_up:
 return VAR_6;
}
