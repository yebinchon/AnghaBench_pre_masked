
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ena_com_dev {int dummy; } ;
struct ena_adapter {int dev_up_before_reset; int flags; int reset_reason; struct ena_com_dev* ena_dev; int timer_service; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ena_com_dev*) ;
 int FUNC_3 (struct ena_com_dev*) ;
 int FUNC_4 (struct ena_com_dev*,int ) ;
 int FUNC_5 (struct ena_com_dev*) ;
 int FUNC_6 (struct ena_com_dev*,int) ;
 int FUNC_7 (struct ena_com_dev*) ;
 int FUNC_8 (struct ena_adapter*) ;
 int FUNC_9 (struct ena_adapter*) ;
 int FUNC_10 (struct ena_adapter*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct ena_adapter *VAR_4, bool VAR_5)
{
 struct net_device *VAR_6 = VAR_4->netdev;
 struct ena_com_dev *VAR_7 = VAR_4->ena_dev;
 bool VAR_8;

 if (!FUNC_12(VAR_0, &VAR_4->flags))
  return;

 FUNC_11(VAR_6);

 FUNC_1(&VAR_4->timer_service);

 VAR_8 = FUNC_12(VAR_1, &VAR_4->flags);
 VAR_4->dev_up_before_reset = VAR_8;
 if (!VAR_5)
  FUNC_6(VAR_7, 0);

 if (FUNC_12(VAR_1, &VAR_4->flags))
  FUNC_9(VAR_4);




 if (!(FUNC_12(VAR_2, &VAR_4->flags) && VAR_8))
  FUNC_4(VAR_4->ena_dev, VAR_4->reset_reason);

 FUNC_10(VAR_4);

 FUNC_8(VAR_4);

 FUNC_2(VAR_7);

 FUNC_7(VAR_7);

 FUNC_3(VAR_7);

 FUNC_5(VAR_7);

 VAR_4->reset_reason = VAR_3;

 FUNC_0(VAR_2, &VAR_4->flags);
 FUNC_0(VAR_0, &VAR_4->flags);
}
