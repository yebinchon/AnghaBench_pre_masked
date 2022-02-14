
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int irq; int dev; } ;
struct parport_pc_pci {int numports; int (* postinit_hook ) (struct pci_dev*,struct parport_pc_pci*,int) ;TYPE_1__* addr; scalar_t__ (* preinit_hook ) (struct pci_dev*,struct parport_pc_pci*,int,int ) ;} ;
struct parport_serial_private {scalar_t__ num_par; struct parport** port; struct parport_pc_pci par; } ;
struct parport {int dummy; } ;
struct TYPE_2__ {int lo; int hi; } ;


 scalar_t__ FUNC_0 (struct parport**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct parport_pc_pci* VAR_5 ;
 int FUNC_1 (int *,char*,unsigned long,unsigned long,...) ;
 int FUNC_2 (int *,char*,scalar_t__,int) ;
 struct parport* FUNC_3 (unsigned long,unsigned long,int,int ,int *,int ) ;
 struct parport_serial_private* FUNC_4 (struct pci_dev*) ;
 unsigned long FUNC_5 (struct pci_dev*,int) ;
 scalar_t__ FUNC_6 (struct pci_dev*,struct parport_pc_pci*,int,int ) ;
 int FUNC_7 (struct pci_dev*,struct parport_pc_pci*,int) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 struct parport_pc_pci *VAR_8;
 struct parport_serial_private *VAR_9 = FUNC_4 (VAR_6);
 int VAR_10, VAR_11 = 0;

 VAR_9->par = VAR_5[VAR_7->driver_data];
 VAR_8 = &VAR_9->par;
 if (VAR_8->preinit_hook &&
     VAR_8->preinit_hook (VAR_6, VAR_8, VAR_4, VAR_3))
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_8->numports; VAR_10++) {
  struct parport *VAR_12;
  int VAR_13 = VAR_8->addr[VAR_10].lo;
  int VAR_14 = VAR_8->addr[VAR_10].hi;
  unsigned long VAR_15, VAR_16;
  int VAR_17;

  if (VAR_9->num_par == FUNC_0 (VAR_9->port)) {
   FUNC_2(&VAR_6->dev,
     "only %zu parallel ports supported (%d reported)\n",
     FUNC_0(VAR_9->port), VAR_8->numports);
   break;
  }

  VAR_15 = FUNC_5 (VAR_6, VAR_13);
  VAR_16 = 0;
  if ((VAR_14 >= 0) && (VAR_14 <= 6))
   VAR_16 = FUNC_5 (VAR_6, VAR_14);
  else if (VAR_14 > 6)
   VAR_15 += VAR_14;



  VAR_17 = VAR_6->irq;
  if (VAR_17 == VAR_2) {
   FUNC_1(&VAR_6->dev,
    "PCI parallel port detected: I/O at %#lx(%#lx)\n",
    VAR_15, VAR_16);
   VAR_17 = VAR_4;
  } else {
   FUNC_1(&VAR_6->dev,
    "PCI parallel port detected: I/O at %#lx(%#lx), IRQ %d\n",
    VAR_15, VAR_16, VAR_17);
  }
  VAR_12 = FUNC_3 (VAR_15, VAR_16, VAR_17,
         VAR_3, &VAR_6->dev, VAR_1);
  if (VAR_12) {
   VAR_9->port[VAR_9->num_par++] = VAR_12;
   VAR_11 = 1;
  }
 }

 if (VAR_8->postinit_hook)
  VAR_8->postinit_hook (VAR_6, VAR_8, !VAR_11);

 return 0;
}
