
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct device_node*) ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 void* FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ,int *,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 void* VAR_11 ;
 int FUNC_14 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (int,int ,int ,int ,char*,int *) ;
 int FUNC_16 (struct resource*) ;
 void* VAR_14 ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_15)
{
 struct device_node *VAR_16 = VAR_15->dev.of_node;
 int VAR_17 = 0, VAR_18 = 0;
 struct resource *VAR_19;

 VAR_19 = FUNC_11(VAR_15, VAR_5, "prcmu");
 if (!VAR_19) {
  FUNC_4(&VAR_15->dev, "no prcmu memory region provided\n");
  return -VAR_2;
 }
 VAR_11 = FUNC_5(&VAR_15->dev, VAR_19->start, FUNC_16(VAR_19));
 if (!VAR_11) {
  FUNC_4(&VAR_15->dev,
   "failed to ioremap prcmu register memory\n");
  return -VAR_3;
 }
 FUNC_6();
 FUNC_3(VAR_15, VAR_1);
 VAR_19 = FUNC_11(VAR_15, VAR_5, "prcmu-tcdm");
 if (!VAR_19) {
  FUNC_4(&VAR_15->dev, "no prcmu tcdm region provided\n");
  return -VAR_2;
 }
 VAR_14 = FUNC_5(&VAR_15->dev, VAR_19->start,
   FUNC_16(VAR_19));
 if (!VAR_14) {
  FUNC_4(&VAR_15->dev,
   "failed to ioremap prcmu-tcdm register memory\n");
  return -VAR_3;
 }


 FUNC_17(VAR_0, VAR_7);

 VAR_17 = FUNC_10(VAR_15, 0);
 if (VAR_17 <= 0)
  return VAR_17;

 VAR_18 = FUNC_15(VAR_17, VAR_12,
         VAR_13, VAR_6, "prcmu", ((void*)0));
 if (VAR_18 < 0) {
  FUNC_12("prcmu: Failed to allocate IRQ_DB8500_PRCMU1.\n");
  return VAR_18;
 }

 FUNC_1(VAR_16);

 FUNC_14(VAR_4);

 VAR_18 = FUNC_7(&VAR_15->dev, 0, VAR_8,
         FUNC_0(VAR_8), ((void*)0), 0, VAR_9);
 if (VAR_18) {
  FUNC_12("prcmu: Failed to add subdevices\n");
  return VAR_18;
 }


 if (!FUNC_9("st-ericsson,u8540")) {
  VAR_18 = FUNC_7(&VAR_15->dev, 0, VAR_10,
          FUNC_0(VAR_10), ((void*)0), 0,
          VAR_9);
  if (VAR_18) {
   FUNC_8(&VAR_15->dev);
   FUNC_12("prcmu: Failed to add subdevices\n");
   return VAR_18;
  }
 }

 VAR_18 = FUNC_2(&VAR_15->dev);
 if (VAR_18) {
  FUNC_8(&VAR_15->dev);
  FUNC_12("prcmu: Failed to add ab8500 subdevice\n");
  return VAR_18;
 }

 FUNC_13("DB8500 PRCMU initialized\n");
 return VAR_18;
}
