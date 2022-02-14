
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct atl1e_adapter {int hw; int napi; int flags; struct net_device* netdev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct atl1e_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct atl1e_adapter*) ;
 int FUNC_5 (struct atl1e_adapter*) ;
 int FUNC_6 (struct atl1e_adapter*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct atl1e_adapter *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->netdev;
 int VAR_6 = 0;
 u32 VAR_7;


 VAR_6 = FUNC_3(&VAR_4->hw);
 if (VAR_6) {
  VAR_6 = -VAR_0;
  return VAR_6;
 }
 FUNC_4(VAR_4);
 FUNC_7(VAR_5);
 FUNC_6(VAR_4);

 if (FUNC_2(VAR_4)) {
  VAR_6 = -VAR_0;
  goto err_up;
 }

 FUNC_8(VAR_3, &VAR_4->flags);
 FUNC_9(&VAR_4->napi);
 FUNC_5(VAR_4);
 VAR_7 = FUNC_0(&VAR_4->hw, VAR_2);
 FUNC_1(&VAR_4->hw, VAR_2,
        VAR_7 | VAR_1);

err_up:
 return VAR_6;
}
