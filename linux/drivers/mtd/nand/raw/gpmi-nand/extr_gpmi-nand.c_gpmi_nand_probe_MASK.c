
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct of_device_id {int data; } ;
struct gpmi_nand_data {int * dev; struct platform_device* pdev; int devdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gpmi_nand_data*,int) ;
 int FUNC_1 (struct gpmi_nand_data*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 struct gpmi_nand_data* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct gpmi_nand_data*) ;
 int VAR_3 ;
 int FUNC_6 (struct gpmi_nand_data*) ;
 struct of_device_id* FUNC_7 (int ,int *) ;
 int FUNC_8 (struct platform_device*,struct gpmi_nand_data*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct gpmi_nand_data*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_4)
{
 struct gpmi_nand_data *VAR_5;
 const struct of_device_id *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_7(VAR_3, &VAR_4->dev);
 if (VAR_6) {
  VAR_5->devdata = VAR_6->data;
 } else {
  FUNC_2(&VAR_4->dev, "Failed to find the right device id.\n");
  return -VAR_0;
 }

 FUNC_8(VAR_4, VAR_5);
 VAR_5->pdev = VAR_4;
 VAR_5->dev = &VAR_4->dev;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  goto exit_acquire_resources;

 VAR_7 = FUNC_0(VAR_5, 1);
 if (VAR_7)
  goto exit_nfc_init;

 FUNC_16(&VAR_4->dev, 500);
 FUNC_17(&VAR_4->dev);
 FUNC_15(&VAR_4->dev);
 FUNC_10(&VAR_4->dev);
 FUNC_11(&VAR_4->dev);

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  goto exit_nfc_init;

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7)
  goto exit_nfc_init;

 FUNC_12(&VAR_4->dev);
 FUNC_14(&VAR_4->dev);

 FUNC_3(VAR_5->dev, "driver registered.\n");

 return 0;

exit_nfc_init:
 FUNC_13(&VAR_4->dev);
 FUNC_9(&VAR_4->dev);
 FUNC_18(VAR_5);
exit_acquire_resources:

 return VAR_7;
}
