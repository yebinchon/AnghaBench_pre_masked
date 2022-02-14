
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3_pci {scalar_t__ base; scalar_t__ non_pre_bus_addr; scalar_t__ non_pre_mem; scalar_t__ pre_bus_addr; scalar_t__ pre_mem; scalar_t__ io_bus_addr; int io_mem; struct device* dev; } ;
struct resource_entry {struct resource* res; scalar_t__ offset; } ;
struct resource {char* name; int flags; scalar_t__ start; } ;
struct pci_host_bridge {scalar_t__ busnr; } ;
struct device {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;



 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct device*,char*,struct resource*,...) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int,struct resource*) ;
 int FUNC_4 (struct device*,struct resource*,int ) ;
 scalar_t__ FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct v3_pci *VAR_14,
     resource_size_t VAR_15,
     struct pci_host_bridge *VAR_16,
     struct resource_entry *VAR_17)
{
 struct device *VAR_18 = VAR_14->dev;
 struct resource *VAR_19;
 struct resource *VAR_20;
 int VAR_21;

 switch (FUNC_6(VAR_17->res)) {
 case 129:
  VAR_20 = VAR_17->res;
  VAR_20->name = "V3 PCI I/O";
  VAR_14->io_mem = VAR_15;
  VAR_14->io_bus_addr = VAR_20->start - VAR_17->offset;
  FUNC_0(VAR_18, "I/O window %pR, bus addr %pap\n",
   VAR_20, &VAR_14->io_bus_addr);
  VAR_21 = FUNC_4(VAR_18, VAR_20, VAR_15);
  if (VAR_21) {
   FUNC_3(VAR_18,
     "error %d: failed to map resource %pR\n",
     VAR_21, VAR_20);
   return VAR_21;
  }

  FUNC_11(FUNC_8(VAR_14->io_mem) |
         VAR_6,
         VAR_14->base + VAR_5);
  FUNC_12(FUNC_10(VAR_14->io_bus_addr),
         VAR_14->base + VAR_12);
  break;
 case 128:
  VAR_19 = VAR_17->res;
  if (VAR_19->flags & VAR_1) {
   VAR_19->name = "V3 PCI PRE-MEM";
   VAR_14->pre_mem = VAR_19->start;
   VAR_14->pre_bus_addr = VAR_19->start - VAR_17->offset;
   FUNC_0(VAR_18, "PREFETCHABLE MEM window %pR, bus addr %pap\n",
    VAR_19, &VAR_14->pre_bus_addr);
   if (FUNC_5(VAR_19) != VAR_2) {
    FUNC_1(VAR_18, "prefetchable memory range is not 256MB\n");
    return -VAR_0;
   }
   if (VAR_14->non_pre_mem &&
       (VAR_19->start != VAR_14->non_pre_mem + VAR_2)) {
    FUNC_1(VAR_18,
     "prefetchable memory is not adjacent to non-prefetchable memory\n");
    return -VAR_0;
   }

   FUNC_11(FUNC_7(VAR_14->pre_mem) |
          VAR_7 |
          VAR_9 |
          VAR_8,
          VAR_14->base + VAR_4);
   FUNC_12(FUNC_9(VAR_14->pre_bus_addr) |
          VAR_13,
          VAR_14->base + VAR_11);
  } else {
   VAR_19->name = "V3 PCI NON-PRE-MEM";
   VAR_14->non_pre_mem = VAR_19->start;
   VAR_14->non_pre_bus_addr = VAR_19->start - VAR_17->offset;
   FUNC_0(VAR_18, "NON-PREFETCHABLE MEM window %pR, bus addr %pap\n",
    VAR_19, &VAR_14->non_pre_bus_addr);
   if (FUNC_5(VAR_19) != VAR_2) {
    FUNC_1(VAR_18,
     "non-prefetchable memory range is not 256MB\n");
    return -VAR_0;
   }

   FUNC_11(FUNC_7(VAR_14->non_pre_mem) |
          VAR_7 |
          VAR_8,
          VAR_14->base + VAR_3);
   FUNC_12(FUNC_9(VAR_14->non_pre_bus_addr) |
          VAR_13,
          VAR_14->base + VAR_10);
  }
  break;
 case 130:
  FUNC_0(VAR_18, "BUS %pR\n", VAR_17->res);
  VAR_16->busnr = VAR_17->res->start;
  break;
 default:
  FUNC_2(VAR_18, "Unknown resource type %lu\n",
    FUNC_6(VAR_17->res));
  break;
 }

 return 0;
}
