
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl1c_adapter {int napi; int flags; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct atl1c_adapter*) ;
 int FUNC_1 (struct atl1c_adapter*) ;
 int FUNC_2 (struct atl1c_adapter*) ;
 int FUNC_3 (struct atl1c_adapter*) ;
 int FUNC_4 (struct atl1c_adapter*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct atl1c_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 int VAR_3;

 FUNC_7(VAR_2);

 VAR_3 = FUNC_2(VAR_1);
 if (FUNC_9(VAR_3))
  goto err_up;

 VAR_3 = FUNC_4(VAR_1);
 if (FUNC_9(VAR_3))
  goto err_up;

 FUNC_0(VAR_1);
 FUNC_5(VAR_0, &VAR_1->flags);
 FUNC_6(&VAR_1->napi);
 FUNC_3(VAR_1);
 FUNC_8(VAR_2);
 return VAR_3;

err_up:
 FUNC_1(VAR_1);
 return VAR_3;
}
