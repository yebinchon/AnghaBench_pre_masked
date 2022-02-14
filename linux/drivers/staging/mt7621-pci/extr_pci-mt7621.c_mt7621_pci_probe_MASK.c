
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct pci_host_bridge {int dummy; } ;
struct mt7621_pcie {int ports; struct device* dev; } ;
struct TYPE_4__ {unsigned long end; scalar_t__ start; } ;
struct TYPE_3__ {unsigned long end; scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct pci_host_bridge* FUNC_3 (struct device*,int) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (struct mt7621_pcie*) ;
 int FUNC_5 (struct mt7621_pcie*) ;
 int FUNC_6 (struct mt7621_pcie*) ;
 int FUNC_7 (struct mt7621_pcie*) ;
 int FUNC_8 (struct mt7621_pcie*) ;
 int FUNC_9 (struct pci_host_bridge*,int *) ;
 int FUNC_10 (struct mt7621_pcie*,int *) ;
 struct mt7621_pcie* FUNC_11 (struct pci_host_bridge*) ;
 int FUNC_12 (struct platform_device*,struct mt7621_pcie*) ;
 int VAR_4 ;
 int FUNC_13 (struct mt7621_pcie*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct mt7621_pcie *VAR_7;
 struct pci_host_bridge *VAR_8;
 int VAR_9;
 FUNC_1(VAR_4);

 if (!VAR_6->of_node)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_6, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_1;

 VAR_7 = FUNC_11(VAR_8);
 VAR_7->dev = VAR_6;
 FUNC_12(VAR_5, VAR_7);
 FUNC_0(&VAR_7->ports);

 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9) {
  FUNC_2(VAR_6, "Parsing DT failed\n");
  return VAR_9;
 }


 VAR_2.start = 0;
 VAR_2.end = ~0UL;
 VAR_3.start = 0;
 VAR_3.end = ~0UL;

 FUNC_6(VAR_7);

 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9) {
  FUNC_2(VAR_6, "Nothing is connected in virtual bridges. Exiting...");
  return 0;
 }

 FUNC_5(VAR_7);

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9) {
  FUNC_2(VAR_6, "Error requesting pci resources from ranges");
  return VAR_9;
 }

 FUNC_13(VAR_7);

 VAR_9 = FUNC_10(VAR_7, &VAR_4);
 if (VAR_9) {
  FUNC_2(VAR_6, "Error requesting resources\n");
  return VAR_9;
 }

 VAR_9 = FUNC_9(VAR_8, &VAR_4);
 if (VAR_9) {
  FUNC_2(VAR_6, "Error registering host\n");
  return VAR_9;
 }

 return 0;
}
