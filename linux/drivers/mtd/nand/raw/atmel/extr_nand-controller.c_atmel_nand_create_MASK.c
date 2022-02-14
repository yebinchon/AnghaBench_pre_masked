
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {int start; } ;
struct gpio_desc {int dummy; } ;
struct device_node {int fwnode; } ;
struct atmel_nand_controller {int dev; } ;
struct atmel_nand {int numcs; int base; TYPE_3__* cs; struct gpio_desc* cdgpio; } ;
struct TYPE_5__ {struct gpio_desc* gpio; int type; scalar_t__ id; } ;
struct TYPE_4__ {struct gpio_desc* virt; int dma; } ;
struct TYPE_6__ {struct gpio_desc* csgpio; TYPE_2__ rb; TYPE_1__ io; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct atmel_nand* FUNC_0 (struct gpio_desc*) ;
 struct atmel_nand* FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct gpio_desc*) ;
 int VAR_9 ;
 int FUNC_4 (int ,char*,...) ;
 struct gpio_desc* FUNC_5 (int ,char*,int,int *,int ,char*) ;
 struct gpio_desc* FUNC_6 (int ,struct resource*) ;
 struct atmel_nand* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,struct device_node*) ;
 int FUNC_9 (struct device_node*,int ,struct resource*) ;
 int FUNC_10 (struct device_node*,char*,int) ;
 int FUNC_11 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_12 (struct device_node*,char*,int,scalar_t__*) ;
 int FUNC_13 (struct atmel_nand*,int ,int) ;

__attribute__((used)) static struct atmel_nand *FUNC_14(struct atmel_nand_controller *VAR_10,
         struct device_node *VAR_11,
         int VAR_12)
{
 struct atmel_nand *VAR_13;
 struct gpio_desc *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_15 = FUNC_10(VAR_11, "reg",
      VAR_12 * sizeof(u32));
 if (VAR_15 < 1) {
  FUNC_4(VAR_10->dev, "Missing or invalid reg property\n");
  return FUNC_1(-VAR_3);
 }

 VAR_13 = FUNC_7(VAR_10->dev, FUNC_13(VAR_13, VAR_9, VAR_15), VAR_6);
 if (!VAR_13) {
  FUNC_4(VAR_10->dev, "Failed to allocate NAND object\n");
  return FUNC_1(-VAR_5);
 }

 VAR_13->numcs = VAR_15;

 VAR_14 = FUNC_5(VAR_10->dev, "det", 0,
            &VAR_11->fwnode, VAR_7,
            "nand-det");
 if (FUNC_2(VAR_14) && FUNC_3(VAR_14) != -VAR_4) {
  FUNC_4(VAR_10->dev,
   "Failed to get detect gpio (err = %ld)\n",
   FUNC_3(VAR_14));
  return FUNC_0(VAR_14);
 }

 if (!FUNC_2(VAR_14))
  VAR_13->cdgpio = VAR_14;

 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
  struct resource VAR_18;
  u32 VAR_19;

  VAR_16 = FUNC_9(VAR_11, 0, &VAR_18);
  if (VAR_16) {
   FUNC_4(VAR_10->dev, "Invalid reg property (err = %d)\n",
    VAR_16);
   return FUNC_1(VAR_16);
  }

  VAR_16 = FUNC_12(VAR_11, "reg", VAR_17 * VAR_12,
       &VAR_19);
  if (VAR_16) {
   FUNC_4(VAR_10->dev, "Invalid reg property (err = %d)\n",
    VAR_16);
   return FUNC_1(VAR_16);
  }

  VAR_13->cs[VAR_17].id = VAR_19;

  VAR_13->cs[VAR_17].io.dma = VAR_18.start;
  VAR_13->cs[VAR_17].io.virt = FUNC_6(VAR_10->dev, &VAR_18);
  if (FUNC_2(VAR_13->cs[VAR_17].io.virt))
   return FUNC_0(VAR_13->cs[VAR_17].io.virt);

  if (!FUNC_11(VAR_11, "atmel,rb", &VAR_19)) {
   if (VAR_19 > VAR_2)
    return FUNC_1(-VAR_3);

   VAR_13->cs[VAR_17].rb.type = VAR_1;
   VAR_13->cs[VAR_17].rb.id = VAR_19;
  } else {
   VAR_14 = FUNC_5(VAR_10->dev,
       "rb", VAR_17, &VAR_11->fwnode,
       VAR_7, "nand-rb");
   if (FUNC_2(VAR_14) && FUNC_3(VAR_14) != -VAR_4) {
    FUNC_4(VAR_10->dev,
     "Failed to get R/B gpio (err = %ld)\n",
     FUNC_3(VAR_14));
    return FUNC_0(VAR_14);
   }

   if (!FUNC_2(VAR_14)) {
    VAR_13->cs[VAR_17].rb.type = VAR_0;
    VAR_13->cs[VAR_17].rb.gpio = VAR_14;
   }
  }

  VAR_14 = FUNC_5(VAR_10->dev, "cs",
             VAR_17, &VAR_11->fwnode,
             VAR_8,
             "nand-cs");
  if (FUNC_2(VAR_14) && FUNC_3(VAR_14) != -VAR_4) {
   FUNC_4(VAR_10->dev,
    "Failed to get CS gpio (err = %ld)\n",
    FUNC_3(VAR_14));
   return FUNC_0(VAR_14);
  }

  if (!FUNC_2(VAR_14))
   VAR_13->cs[VAR_17].csgpio = VAR_14;
 }

 FUNC_8(&VAR_13->base, VAR_11);

 return VAR_13;
}
