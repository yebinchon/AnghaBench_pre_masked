
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct e1000_hw {TYPE_3__ phy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct e1000_adapter* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_2(VAR_2);
 struct e1000_adapter *VAR_4 = FUNC_1(VAR_3);
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 u32 VAR_6;

 FUNC_3(VAR_3->dev.parent);

 VAR_6 = VAR_5->phy.ops.acquire(VAR_5);
 if (VAR_6)
  goto fl_out;

 FUNC_5("EEE TX LPI TIMER: %08X\n",
  FUNC_0(VAR_1) >> VAR_0);

 VAR_5->phy.ops.release(VAR_5);

fl_out:
 FUNC_4(VAR_3->dev.parent);
}
