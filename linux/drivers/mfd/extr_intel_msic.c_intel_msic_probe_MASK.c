
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct intel_msic_platform_data {int dummy; } ;
struct intel_msic {scalar_t__ vendor; int version; int irq_base; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,...) ;
 struct intel_msic_platform_data* FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ,int ,scalar_t__) ;
 int FUNC_9 (int *,struct resource*) ;
 struct intel_msic* FUNC_10 (int *,int,int ) ;
 int FUNC_11 (struct intel_msic*) ;
 int FUNC_12 (int ,int *) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct intel_msic*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct intel_msic_platform_data *VAR_8 = FUNC_7(&VAR_7->dev);
 struct intel_msic *VAR_9;
 struct resource *VAR_10;
 u8 VAR_11, VAR_12;
 int VAR_13;

 if (!VAR_8) {
  FUNC_6(&VAR_7->dev, "no platform data passed\n");
  return -VAR_0;
 }


 VAR_13 = FUNC_12(VAR_4, &VAR_11);
 if (VAR_13) {
  FUNC_6(&VAR_7->dev, "failed to identify the MSIC chip (ID0)\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_12(VAR_5, &VAR_12);
 if (VAR_13) {
  FUNC_6(&VAR_7->dev, "failed to identify the MSIC chip (ID1)\n");
  return -VAR_2;
 }

 if (FUNC_3(VAR_11) != FUNC_3(VAR_12)) {
  FUNC_6(&VAR_7->dev, "invalid vendor ID: %x, %x\n", VAR_11, VAR_12);
  return -VAR_2;
 }

 VAR_9 = FUNC_10(&VAR_7->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->vendor = FUNC_3(VAR_11);
 VAR_9->version = FUNC_4(VAR_11);
 VAR_9->pdev = VAR_7;





 VAR_10 = FUNC_13(VAR_7, VAR_6, 0);
 VAR_9->irq_base = FUNC_9(&VAR_7->dev, VAR_10);
 if (FUNC_0(VAR_9->irq_base))
  return FUNC_5(VAR_9->irq_base);

 FUNC_14(VAR_7, VAR_9);

 VAR_13 = FUNC_11(VAR_9);
 if (VAR_13) {
  FUNC_6(&VAR_7->dev, "failed to initialize MSIC devices\n");
  return VAR_13;
 }

 FUNC_8(&VAR_7->dev, "Intel MSIC version %c%d (vendor %#x)\n",
   FUNC_1(VAR_9->version), FUNC_2(VAR_9->version),
   VAR_9->vendor);

 return 0;
}
