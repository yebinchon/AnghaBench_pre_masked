
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl1e_adapter {int hw; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atl1e_adapter*) ;
 int FUNC_1 (struct atl1e_adapter*) ;
 int FUNC_2 (struct atl1e_adapter*) ;
 int FUNC_3 (struct atl1e_adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct atl1e_adapter*) ;
 int FUNC_6 (struct atl1e_adapter*) ;
 struct atl1e_adapter* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_2)
{
 struct atl1e_adapter *VAR_3 = FUNC_7(VAR_2);
 int VAR_4;


 if (FUNC_8(VAR_1, &VAR_3->flags))
  return -VAR_0;


 FUNC_2(VAR_3);
 VAR_4 = FUNC_5(VAR_3);
 if (FUNC_9(VAR_4))
  return VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 if (FUNC_9(VAR_4))
  goto err_req_irq;

 VAR_4 = FUNC_6(VAR_3);
 if (FUNC_9(VAR_4))
  goto err_up;

 return 0;

err_up:
 FUNC_0(VAR_3);
err_req_irq:
 FUNC_1(VAR_3);
 FUNC_4(&VAR_3->hw);

 return VAR_4;
}
