
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct net_device {int name; } ;
struct TYPE_4__ {int type; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct e1000_adapter {int int_mode; int flags; int test_icr; struct e1000_hw hw; TYPE_1__* pdev; struct net_device* netdev; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,struct net_device*) ;
 scalar_t__ FUNC_7 (int,int ,int ,int ,struct net_device*) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct e1000_adapter *VAR_11, u64 *VAR_12)
{
 struct net_device *VAR_13 = VAR_11->netdev;
 struct e1000_hw *VAR_14 = &VAR_11->hw;
 u32 VAR_15;
 u32 VAR_16 = 1;
 u32 VAR_17 = VAR_11->pdev->irq;
 int VAR_18;
 int VAR_19 = 0;
 int VAR_20 = VAR_0;

 *VAR_12 = 0;


 if (VAR_11->int_mode == VAR_1) {
  VAR_20 = VAR_11->int_mode;
  FUNC_1(VAR_11);
  VAR_11->int_mode = VAR_0;
  FUNC_2(VAR_11);
 }

 if (!FUNC_7(VAR_17, VAR_10, VAR_6, VAR_13->name,
    VAR_13)) {
  VAR_16 = 0;
 } else if (FUNC_7(VAR_17, VAR_10, VAR_7, VAR_13->name,
          VAR_13)) {
  *VAR_12 = 1;
  VAR_19 = -1;
  goto out;
 }
 FUNC_4("testing %s interrupt\n", (VAR_16 ? "shared" : "unshared"));


 FUNC_5(VAR_4, 0xFFFFFFFF);
 FUNC_3();
 FUNC_8(10000, 11000);


 for (VAR_18 = 0; VAR_18 < 10; VAR_18++) {

  VAR_15 = FUNC_0(VAR_18);

  if (VAR_11->flags & VAR_2) {
   switch (VAR_15) {
   case 128:
    continue;
   case 0x00000100:
    if (VAR_11->hw.mac.type == VAR_8 ||
        VAR_11->hw.mac.type == VAR_9)
     continue;
    break;
   default:
    break;
   }
  }

  if (!VAR_16) {






   VAR_11->test_icr = 0;
   FUNC_5(VAR_4, VAR_15);
   FUNC_5(VAR_3, VAR_15);
   FUNC_3();
   FUNC_8(10000, 11000);

   if (VAR_11->test_icr & VAR_15) {
    *VAR_12 = 3;
    break;
   }
  }







  VAR_11->test_icr = 0;
  FUNC_5(VAR_5, VAR_15);
  FUNC_5(VAR_3, VAR_15);
  FUNC_3();
  FUNC_8(10000, 11000);

  if (!(VAR_11->test_icr & VAR_15)) {
   *VAR_12 = 4;
   break;
  }

  if (!VAR_16) {






   VAR_11->test_icr = 0;
   FUNC_5(VAR_4, ~VAR_15 & 0x00007FFF);
   FUNC_5(VAR_3, ~VAR_15 & 0x00007FFF);
   FUNC_3();
   FUNC_8(10000, 11000);

   if (VAR_11->test_icr) {
    *VAR_12 = 5;
    break;
   }
  }
 }


 FUNC_5(VAR_4, 0xFFFFFFFF);
 FUNC_3();
 FUNC_8(10000, 11000);


 FUNC_6(VAR_17, VAR_13);

out:
 if (VAR_20 == VAR_1) {
  FUNC_1(VAR_11);
  VAR_11->int_mode = VAR_20;
  FUNC_2(VAR_11);
 }

 return VAR_19;
}
