
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {scalar_t__ driver_mismatch; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netxen_adapter*,struct net_device*) ;
 struct netxen_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct netxen_adapter*) ;
 int FUNC_4 (struct netxen_adapter*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct netxen_adapter *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = 0;

 if (VAR_2->driver_mismatch)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3)
  goto err_out;

 FUNC_2(VAR_1);

 return 0;

err_out:
 FUNC_4(VAR_2);
 return VAR_3;
}
