
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct vsp1_device {int version; TYPE_1__* info; TYPE_2__* dev; TYPE_2__* bus_master; int fcp; int mmio; int videos; int entities; } ;
struct resource {int start; } ;
struct TYPE_15__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_14__ {int version; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,struct resource*) ;
 struct vsp1_device* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ,int ,struct vsp1_device*) ;
 int FUNC_10 (struct device_node*) ;
 struct device_node* FUNC_11 (int ,char*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct vsp1_device*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (struct device_node*) ;
 TYPE_2__* FUNC_19 (int ) ;
 int FUNC_20 (struct vsp1_device*) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int FUNC_21 (struct vsp1_device*,int ) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_11)
{
 struct vsp1_device *VAR_12;
 struct device_node *VAR_13;
 struct resource *VAR_14;
 struct resource *VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 VAR_12 = FUNC_8(&VAR_11->dev, sizeof(*VAR_12), VAR_3);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 VAR_12->dev = &VAR_11->dev;
 FUNC_1(&VAR_12->entities);
 FUNC_1(&VAR_12->videos);

 FUNC_13(VAR_11, VAR_12);


 VAR_15 = FUNC_12(VAR_11, VAR_5, 0);
 VAR_12->mmio = FUNC_7(&VAR_11->dev, VAR_15);
 if (FUNC_2(VAR_12->mmio))
  return FUNC_3(VAR_12->mmio);

 VAR_14 = FUNC_12(VAR_11, VAR_4, 0);
 if (!VAR_14) {
  FUNC_5(&VAR_11->dev, "missing IRQ\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_9(&VAR_11->dev, VAR_14->start, VAR_10,
         VAR_6, FUNC_6(&VAR_11->dev), VAR_12);
 if (VAR_17 < 0) {
  FUNC_5(&VAR_11->dev, "failed to request IRQ\n");
  return VAR_17;
 }


 VAR_13 = FUNC_11(VAR_11->dev.of_node, "renesas,fcp", 0);
 if (VAR_13) {
  VAR_12->fcp = FUNC_18(VAR_13);
  FUNC_10(VAR_13);
  if (FUNC_2(VAR_12->fcp)) {
   FUNC_4(&VAR_11->dev, "FCP not found (%ld)\n",
    FUNC_3(VAR_12->fcp));
   return FUNC_3(VAR_12->fcp);
  }






  VAR_12->bus_master = FUNC_19(VAR_12->fcp);
 } else {
  VAR_12->bus_master = VAR_12->dev;
 }


 FUNC_15(&VAR_11->dev);

 VAR_17 = FUNC_16(&VAR_11->dev);
 if (VAR_17 < 0)
  goto done;

 VAR_12->version = FUNC_21(VAR_12, VAR_7);
 FUNC_17(&VAR_11->dev);

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_9); ++VAR_16) {
  if ((VAR_12->version & VAR_8) ==
      VAR_9[VAR_16].version) {
   VAR_12->info = &VAR_9[VAR_16];
   break;
  }
 }

 if (!VAR_12->info) {
  FUNC_5(&VAR_11->dev, "unsupported IP version 0x%08x\n",
   VAR_12->version);
  VAR_17 = -VAR_2;
  goto done;
 }

 FUNC_4(&VAR_11->dev, "IP version 0x%08x\n", VAR_12->version);


 VAR_17 = FUNC_20(VAR_12);
 if (VAR_17 < 0) {
  FUNC_5(&VAR_11->dev, "failed to create entities\n");
  goto done;
 }

done:
 if (VAR_17)
  FUNC_14(&VAR_11->dev);

 return VAR_17;
}
