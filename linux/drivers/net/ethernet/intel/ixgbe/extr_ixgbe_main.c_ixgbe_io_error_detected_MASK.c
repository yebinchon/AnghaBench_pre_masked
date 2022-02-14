
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct ixgbe_hw {TYPE_2__ mac; int hw_addr; } ;
struct ixgbe_adapter {scalar_t__ num_vfs; int state; int vferr_refcount; struct ixgbe_hw hw; struct net_device* netdev; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;
struct TYPE_3__ {struct pci_dev* self; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int VAR_14 ;





 int FUNC_2 (struct ixgbe_hw*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 struct pci_dev* FUNC_10 (int ,unsigned int,struct pci_dev*) ;
 struct ixgbe_adapter* FUNC_11 (struct pci_dev*) ;
 scalar_t__ FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int *) ;

__attribute__((used)) static pci_ers_result_t FUNC_18(struct pci_dev *VAR_16,
      pci_channel_state_t VAR_17)
{
 struct ixgbe_adapter *VAR_18 = FUNC_11(VAR_16);
 struct net_device *VAR_19 = VAR_18->netdev;
 if (!FUNC_17(VAR_13, &VAR_18->state))
  return VAR_6;

 if (!FUNC_5(VAR_19))
  return VAR_6;

 FUNC_14();
 FUNC_4(VAR_19);

 if (FUNC_6(VAR_19))
  FUNC_1(VAR_18);

 if (VAR_17 == VAR_15) {
  FUNC_15();
  return VAR_6;
 }

 if (!FUNC_16(VAR_12, &VAR_18->state))
  FUNC_8(VAR_16);
 FUNC_15();


 return VAR_7;
}
