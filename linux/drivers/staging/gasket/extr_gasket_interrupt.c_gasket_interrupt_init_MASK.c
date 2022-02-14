
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gasket_interrupt_data {int type; struct gasket_interrupt_data* eventfd_ctxs; void* interrupt_counts; scalar_t__ num_configured; int pack_width; int interrupt_bar_index; int interrupts; int num_interrupts; int pci_dev; int name; } ;
struct gasket_driver_desc {int interrupt_type; int num_interrupts; int interrupt_pack_width; int interrupt_bar_index; int interrupts; int name; } ;
struct TYPE_2__ {int device; } ;
struct gasket_dev {TYPE_1__ dev_info; int dev; int pci_dev; struct gasket_interrupt_data* interrupt_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct gasket_dev*) ;
 struct gasket_driver_desc* FUNC_2 (struct gasket_dev*) ;
 int FUNC_3 (struct gasket_interrupt_data*) ;
 int FUNC_4 (struct gasket_dev*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 void* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct gasket_interrupt_data*) ;
 struct gasket_interrupt_data* FUNC_8 (int,int ) ;

int FUNC_9(struct gasket_dev *VAR_4)
{
 int VAR_5;
 struct gasket_interrupt_data *VAR_6;
 const struct gasket_driver_desc *VAR_7 =
  FUNC_2(VAR_4);

 VAR_6 = FUNC_8(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;
 VAR_4->interrupt_data = VAR_6;
 VAR_6->name = VAR_7->name;
 VAR_6->type = VAR_7->interrupt_type;
 VAR_6->pci_dev = VAR_4->pci_dev;
 VAR_6->num_interrupts = VAR_7->num_interrupts;
 VAR_6->interrupts = VAR_7->interrupts;
 VAR_6->interrupt_bar_index = VAR_7->interrupt_bar_index;
 VAR_6->pack_width = VAR_7->interrupt_pack_width;
 VAR_6->num_configured = 0;

 VAR_6->eventfd_ctxs =
  FUNC_6(VAR_7->num_interrupts,
   sizeof(*VAR_6->eventfd_ctxs), VAR_2);
 if (!VAR_6->eventfd_ctxs) {
  FUNC_7(VAR_6);
  return -VAR_1;
 }

 VAR_6->interrupt_counts =
  FUNC_6(VAR_7->num_interrupts,
   sizeof(*VAR_6->interrupt_counts), VAR_2);
 if (!VAR_6->interrupt_counts) {
  FUNC_7(VAR_6->eventfd_ctxs);
  FUNC_7(VAR_6);
  return -VAR_1;
 }

 switch (VAR_6->type) {
 case 128:
  VAR_5 = FUNC_3(VAR_6);
  if (VAR_5)
   break;
  FUNC_1(VAR_4);
  break;

 default:
  VAR_5 = -VAR_0;
 }

 if (VAR_5) {



  FUNC_0(VAR_4->dev,
    "Couldn't initialize interrupts: %d\n", VAR_5);
  return 0;
 }

 FUNC_4(VAR_4);
 FUNC_5(VAR_4->dev_info.device,
        VAR_3);

 return 0;
}
