
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yenta_socket {struct pci_dev* dev; } ;
struct resource {unsigned int flags; unsigned int start; unsigned int end; int name; scalar_t__ parent; } ;
struct pci_dev {int dev; int bus; TYPE_1__* subordinate; struct resource* resource; } ;
struct pci_bus_region {unsigned int start; unsigned int end; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_0 (struct yenta_socket*,int) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (int ,struct resource*,struct pci_bus_region*) ;
 scalar_t__ FUNC_4 (struct yenta_socket*,struct resource*,int ) ;

__attribute__((used)) static int FUNC_5(struct yenta_socket *VAR_11, int VAR_12, unsigned VAR_13, int VAR_14, int VAR_15)
{
 struct pci_dev *VAR_16 = VAR_11->dev;
 struct resource *VAR_17;
 struct pci_bus_region VAR_18;
 unsigned VAR_19;

 VAR_17 = VAR_16->resource + VAR_9 + VAR_12;

 if (VAR_17->parent)
  return 0;


 VAR_19 = ~0xfff;
 if (VAR_13 & VAR_6)
  VAR_19 = ~3;

 VAR_17->name = VAR_16->subordinate->name;
 VAR_17->flags = VAR_13;

 VAR_18.start = FUNC_0(VAR_11, VAR_14) & VAR_19;
 VAR_18.end = FUNC_0(VAR_11, VAR_15) | ~VAR_19;
 if (VAR_18.start && VAR_18.end > VAR_18.start && !VAR_10) {
  FUNC_3(VAR_16->bus, VAR_17, &VAR_18);
  if (FUNC_2(VAR_16, VAR_9 + VAR_12) == 0)
   return 0;
  FUNC_1(&VAR_16->dev,
    "Preassigned resource %d busy or not available, reconfiguring...\n",
    VAR_12);
 }

 if (VAR_13 & VAR_6) {
  if ((FUNC_4(VAR_11, VAR_17, VAR_1)) ||
      (FUNC_4(VAR_11, VAR_17, VAR_0)) ||
      (FUNC_4(VAR_11, VAR_17, VAR_2)))
   return 1;
 } else {
  if (VAR_13 & VAR_8) {
   if ((FUNC_4(VAR_11, VAR_17, VAR_4)) ||
       (FUNC_4(VAR_11, VAR_17, VAR_3)) ||
       (FUNC_4(VAR_11, VAR_17, VAR_5)))
    return 1;

   VAR_17->flags = VAR_7;
  }
  if ((FUNC_4(VAR_11, VAR_17, VAR_4)) ||
      (FUNC_4(VAR_11, VAR_17, VAR_3)) ||
      (FUNC_4(VAR_11, VAR_17, VAR_5)))
   return 1;
 }

 FUNC_1(&VAR_16->dev,
   "no resource of type %x available, trying to continue...\n",
   VAR_13);
 VAR_17->start = VAR_17->end = VAR_17->flags = 0;
 return 0;
}
