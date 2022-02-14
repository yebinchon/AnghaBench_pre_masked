
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgb_adapter {int dummy; } ;


 int FUNC_0 (struct ixgb_adapter*) ;
 int FUNC_1 (struct ixgb_adapter*) ;
 int FUNC_2 (struct ixgb_adapter*) ;
 int FUNC_3 (struct ixgb_adapter*) ;
 int FUNC_4 (struct ixgb_adapter*) ;
 int FUNC_5 (struct ixgb_adapter*) ;
 struct ixgb_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int
FUNC_9(struct net_device *VAR_0)
{
 struct ixgb_adapter *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  goto err_setup_tx;

 FUNC_7(VAR_0);



 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto err_setup_rx;

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  goto err_up;

 FUNC_8(VAR_0);

 return 0;

err_up:
 FUNC_0(VAR_1);
err_setup_rx:
 FUNC_1(VAR_1);
err_setup_tx:
 FUNC_2(VAR_1);

 return VAR_2;
}
