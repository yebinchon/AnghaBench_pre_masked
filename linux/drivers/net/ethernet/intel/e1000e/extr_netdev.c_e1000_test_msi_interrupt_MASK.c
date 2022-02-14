
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int flags; TYPE_1__* pdev; int int_mode; struct e1000_hw hw; struct net_device* netdev; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int VAR_5 ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*) ;
 int FUNC_5 (struct e1000_adapter*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,struct net_device*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(struct e1000_adapter *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->netdev;
 struct e1000_hw *VAR_8 = &VAR_6->hw;
 int VAR_9;



 FUNC_9(VAR_3);


 FUNC_0(VAR_6);
 FUNC_4(VAR_6);




 VAR_6->flags |= VAR_2;

 VAR_9 = FUNC_14(VAR_6->pdev);
 if (VAR_9)
  goto msi_test_failed;

 VAR_9 = FUNC_15(VAR_6->pdev->irq, VAR_5, 0,
     VAR_7->name, VAR_7);
 if (VAR_9) {
  FUNC_13(VAR_6->pdev);
  goto msi_test_failed;
 }




 FUNC_17();

 FUNC_2(VAR_6);


 FUNC_10(VAR_4, VAR_1);
 FUNC_6();
 FUNC_12(100);

 FUNC_1(VAR_6);

 FUNC_16();

 if (VAR_6->flags & VAR_2) {
  VAR_6->int_mode = VAR_0;
  FUNC_8("MSI interrupt test failed, using legacy interrupt.\n");
 } else {
  FUNC_7("MSI interrupt test succeeded!\n");
 }

 FUNC_11(VAR_6->pdev->irq, VAR_7);
 FUNC_13(VAR_6->pdev);

msi_test_failed:
 FUNC_5(VAR_6);
 return FUNC_3(VAR_6);
}
