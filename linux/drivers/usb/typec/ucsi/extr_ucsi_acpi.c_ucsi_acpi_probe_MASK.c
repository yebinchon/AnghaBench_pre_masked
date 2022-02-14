
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sync; int cmd; TYPE_2__* data; } ;
struct ucsi_acpi {int ucsi; TYPE_1__ ppm; int * dev; int guid; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
typedef int acpi_status ;
struct TYPE_4__ {int version; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ,struct ucsi_acpi*) ;
 int FUNC_5 (int ,struct resource*,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,char*) ;
 TYPE_2__* FUNC_8 (int *,int ,int ) ;
 struct ucsi_acpi* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int ,int *) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct ucsi_acpi*) ;
 int FUNC_13 (struct resource*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_9)
{
 struct ucsi_acpi *VAR_10;
 struct resource *VAR_11;
 acpi_status VAR_12;
 int VAR_13;

 VAR_10 = FUNC_9(&VAR_9->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_11 = FUNC_11(VAR_9, VAR_4, 0);
 if (!VAR_11) {
  FUNC_7(&VAR_9->dev, "missing memory resource\n");
  return -VAR_1;
 }


 VAR_12 = FUNC_5(FUNC_1(&VAR_9->dev), VAR_11, 1);
 if (FUNC_0(VAR_12))
  return -VAR_2;







 VAR_10->ppm.data = FUNC_8(&VAR_9->dev, VAR_11->start, FUNC_13(VAR_11));
 if (!VAR_10->ppm.data)
  return -VAR_2;

 if (!VAR_10->ppm.data->version)
  return -VAR_1;

 VAR_13 = FUNC_10(VAR_5, &VAR_10->guid);
 if (VAR_13)
  return VAR_13;

 VAR_10->ppm.cmd = VAR_6;
 VAR_10->ppm.sync = VAR_8;
 VAR_10->dev = &VAR_9->dev;

 VAR_12 = FUNC_4(FUNC_1(&VAR_9->dev),
          VAR_0,
          VAR_7, VAR_10);
 if (FUNC_0(VAR_12)) {
  FUNC_7(&VAR_9->dev, "failed to install notify handler\n");
  return -VAR_1;
 }

 VAR_10->ucsi = FUNC_14(&VAR_9->dev, &VAR_10->ppm);
 if (FUNC_2(VAR_10->ucsi)) {
  FUNC_6(FUNC_1(&VAR_9->dev),
        VAR_0,
        VAR_7);
  return FUNC_3(VAR_10->ucsi);
 }

 FUNC_12(VAR_9, VAR_10);

 return 0;
}
