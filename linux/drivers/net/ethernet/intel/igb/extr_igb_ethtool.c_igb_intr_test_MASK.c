
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct net_device {int name; } ;
struct TYPE_5__ {int type; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct igb_adapter {int flags; int test_icr; TYPE_3__* msix_entries; TYPE_1__* pdev; struct net_device* netdev; struct e1000_hw hw; } ;
struct TYPE_6__ {int vector; } ;
struct TYPE_4__ {int irq; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,char*) ;







 int FUNC_2 (int,struct igb_adapter*) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int,int ,int ,int ,struct igb_adapter*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct igb_adapter *VAR_9, u64 *VAR_10)
{
 struct e1000_hw *VAR_11 = &VAR_9->hw;
 struct net_device *VAR_12 = VAR_9->netdev;
 u32 VAR_13, VAR_14, VAR_15 = 0, VAR_16 = 1;
 u32 VAR_17 = VAR_9->pdev->irq;

 *VAR_10 = 0;


 if (VAR_9->flags & VAR_5) {
  if (FUNC_3(VAR_9->msix_entries[0].vector,
    VAR_8, 0, VAR_12->name, VAR_9)) {
   *VAR_10 = 1;
   return -1;
  }
 } else if (VAR_9->flags & VAR_4) {
  VAR_16 = 0;
  if (FUNC_3(VAR_17,
    VAR_8, 0, VAR_12->name, VAR_9)) {
   *VAR_10 = 1;
   return -1;
  }
 } else if (!FUNC_3(VAR_17, VAR_8, VAR_6,
    VAR_12->name, VAR_9)) {
  VAR_16 = 0;
 } else if (FUNC_3(VAR_17, VAR_8, VAR_7,
   VAR_12->name, VAR_9)) {
  *VAR_10 = 1;
  return -1;
 }
 FUNC_1(&VAR_9->pdev->dev, "testing %s interrupt\n",
  (VAR_16 ? "shared" : "unshared"));


 FUNC_5(VAR_2, ~0);
 FUNC_6();
 FUNC_4(10000, 11000);


 switch (VAR_11->mac.type) {
 case 134:
  VAR_14 = 0x37F47EDD;
  break;
 case 133:
  VAR_14 = 0x77D4FBFD;
  break;
 case 132:
  VAR_14 = 0x77DCFED5;
  break;
 case 129:
 case 128:
 case 131:
 case 130:
  VAR_14 = 0x77DCFED5;
  break;
 default:
  VAR_14 = 0x7FFFFFFF;
  break;
 }


 for (; VAR_15 < 31; VAR_15++) {

  VAR_13 = FUNC_0(VAR_15);

  if (!(VAR_13 & VAR_14))
   continue;

  if (!VAR_16) {






   VAR_9->test_icr = 0;


   FUNC_5(VAR_0, ~0);

   FUNC_5(VAR_2, VAR_13);
   FUNC_5(VAR_1, VAR_13);
   FUNC_6();
   FUNC_4(10000, 11000);

   if (VAR_9->test_icr & VAR_13) {
    *VAR_10 = 3;
    break;
   }
  }







  VAR_9->test_icr = 0;


  FUNC_5(VAR_0, ~0);

  FUNC_5(VAR_3, VAR_13);
  FUNC_5(VAR_1, VAR_13);
  FUNC_6();
  FUNC_4(10000, 11000);

  if (!(VAR_9->test_icr & VAR_13)) {
   *VAR_10 = 4;
   break;
  }

  if (!VAR_16) {






   VAR_9->test_icr = 0;


   FUNC_5(VAR_0, ~0);

   FUNC_5(VAR_2, ~VAR_13);
   FUNC_5(VAR_1, ~VAR_13);
   FUNC_6();
   FUNC_4(10000, 11000);

   if (VAR_9->test_icr & VAR_13) {
    *VAR_10 = 5;
    break;
   }
  }
 }


 FUNC_5(VAR_2, ~0);
 FUNC_6();
 FUNC_4(10000, 11000);


 if (VAR_9->flags & VAR_5)
  FUNC_2(VAR_9->msix_entries[0].vector, VAR_9);
 else
  FUNC_2(VAR_17, VAR_9);

 return *VAR_10;
}
