
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {struct pci_bus* subordinate; TYPE_1__* bus; } ;
struct pci_bus {int dummy; } ;
typedef scalar_t__ pci_ers_result_t ;
typedef enum pci_channel_state { ____Placeholder_pci_channel_state } pci_channel_state ;
struct TYPE_2__ {struct pci_dev* self; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pci_dev*) ;
 int VAR_6 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,char*) ;
 int FUNC_3 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_bus*,int ,scalar_t__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (struct pci_dev*,int ) ;

void FUNC_8(struct pci_dev *VAR_12, enum pci_channel_state VAR_13,
        u32 VAR_14)
{
 pci_ers_result_t VAR_15 = VAR_0;
 struct pci_bus *VAR_16;





 if (!(FUNC_4(VAR_12) == VAR_5 ||
       FUNC_4(VAR_12) == VAR_4))
  VAR_12 = VAR_12->bus->self;
 VAR_16 = VAR_12->subordinate;

 FUNC_2(VAR_12, "broadcast error_detected message\n");
 if (VAR_13 == VAR_6)
  FUNC_6(VAR_16, VAR_7, &VAR_15);
 else
  FUNC_6(VAR_16, VAR_9, &VAR_15);

 if (VAR_13 == VAR_6 &&
     FUNC_7(VAR_12, VAR_14) != VAR_3)
  goto failed;

 if (VAR_15 == VAR_0) {
  VAR_15 = VAR_3;
  FUNC_2(VAR_12, "broadcast mmio_enabled message\n");
  FUNC_6(VAR_16, VAR_8, &VAR_15);
 }

 if (VAR_15 == VAR_2) {





  VAR_15 = VAR_3;
  FUNC_2(VAR_12, "broadcast slot_reset message\n");
  FUNC_6(VAR_16, VAR_11, &VAR_15);
 }

 if (VAR_15 != VAR_3)
  goto failed;

 FUNC_2(VAR_12, "broadcast resume message\n");
 FUNC_6(VAR_16, VAR_10, &VAR_15);

 FUNC_0(VAR_12);
 FUNC_1(VAR_12);
 FUNC_3(VAR_12, "AER: Device recovery successful\n");
 return;

failed:
 FUNC_5(VAR_12, VAR_1);


 FUNC_3(VAR_12, "AER: Device recovery failed\n");
}
