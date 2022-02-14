
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; scalar_t__ end; } ;
struct pci_dev {int dev; } ;
struct lpc_ich_priv {size_t chipset; int gbase; int abase; } ;
struct TYPE_5__ {int gpio_version; int use_gpio; } ;
struct TYPE_4__ {int name; int num_resources; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (struct resource*) ;
 int FUNC_1 (int *,char*) ;
 struct resource* VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 TYPE_1__ VAR_8 ;
 int FUNC_6 (int *,int ,TYPE_1__*,int,int *,int ,int *) ;
 struct lpc_ich_priv* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ,int*) ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_9)
{
 struct lpc_ich_priv *VAR_10 = FUNC_7(VAR_9);
 u32 VAR_11;
 u32 VAR_12;
 int VAR_13;
 bool VAR_14 = 0;
 struct resource *VAR_15;


 FUNC_8(VAR_9, VAR_10->abase, &VAR_11);
 VAR_12 = VAR_11 & 0x0000ff80;
 if (!VAR_12) {
  FUNC_1(&VAR_9->dev, "I/O space for ACPI uninitialized\n");
  VAR_8.num_resources--;
  goto gpe0_done;
 }

 VAR_15 = &VAR_6[VAR_3];
 VAR_15->start = VAR_12 + VAR_1;
 VAR_15->end = VAR_12 + VAR_0;
 VAR_13 = FUNC_0(VAR_15);
 if (VAR_13) {





  VAR_8.num_resources--;
  VAR_14 = 1;
 } else {
  FUNC_3(VAR_9);
 }

gpe0_done:

 FUNC_8(VAR_9, VAR_10->gbase, &VAR_11);
 VAR_12 = VAR_11 & 0x0000ff80;
 if (!VAR_12) {
  FUNC_1(&VAR_9->dev, "I/O space for GPIO uninitialized\n");
  VAR_13 = -VAR_2;
  goto gpio_done;
 }


 VAR_15 = &VAR_6[VAR_4];
 VAR_15->start = VAR_12;
 switch (VAR_7[VAR_10->chipset].gpio_version) {
 case 128:
 case 129:
  VAR_15->end = VAR_15->start + 128 - 1;
  break;
 default:
  VAR_15->end = VAR_15->start + 64 - 1;
  break;
 }

 VAR_13 = FUNC_2(VAR_15);
 if (VAR_13 < 0) {

  VAR_14 = 1;
  goto gpio_done;
 }
 VAR_7[VAR_10->chipset].use_gpio = VAR_13;
 FUNC_4(VAR_9);

 FUNC_5(VAR_9);
 VAR_13 = FUNC_6(&VAR_9->dev, VAR_5,
         &VAR_8, 1, ((void*)0), 0, ((void*)0));

gpio_done:
 if (VAR_14)
  FUNC_9("Resource conflict(s) found affecting %s\n",
    VAR_8.name);
 return VAR_13;
}
