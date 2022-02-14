
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int domain; int fwnode; } ;
struct hv_pcibus_device {scalar_t__ state; TYPE_1__ sysdata; int wq; int remove_event; int irq_domain; int resources_for_children; int cfg_addr; int pci_bus; } ;
struct hv_device {int channel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct hv_pcibus_device*) ;
 struct hv_pcibus_device* FUNC_3 (struct hv_device*) ;
 int FUNC_4 (struct hv_device*) ;
 int FUNC_5 (struct hv_pcibus_device*) ;
 int FUNC_6 (struct hv_pcibus_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (struct hv_pcibus_device*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct hv_device *VAR_2)
{
 struct hv_pcibus_device *VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3->state == VAR_0) {

  FUNC_12();
  FUNC_14(VAR_3->pci_bus);
  FUNC_6(VAR_3);
  FUNC_13(VAR_3->pci_bus);
  FUNC_15();
  VAR_3->state = VAR_1;
 }

 FUNC_4(VAR_2);

 FUNC_17(VAR_2->channel);

 FUNC_8(VAR_3->cfg_addr);
 FUNC_2(VAR_3);
 FUNC_11(&VAR_3->resources_for_children);
 FUNC_5(VAR_3);
 FUNC_10(VAR_3->irq_domain);
 FUNC_9(VAR_3->sysdata.fwnode);
 FUNC_16(VAR_3);
 FUNC_18(&VAR_3->remove_event);
 FUNC_0(VAR_3->wq);

 FUNC_7(VAR_3->sysdata.domain);

 FUNC_1((unsigned long)VAR_3);
 return 0;
}
