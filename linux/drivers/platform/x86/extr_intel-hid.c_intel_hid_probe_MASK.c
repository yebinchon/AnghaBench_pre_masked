
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct intel_hid_priv {scalar_t__ array; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,struct platform_device*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,struct intel_hid_priv*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int) ;
 struct intel_hid_priv* FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (struct platform_device*) ;
 int FUNC_13 (int ,int ,unsigned long long*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct platform_device*) ;
 int FUNC_16 (int *,int) ;
 int VAR_7 ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_8)
{
 acpi_handle VAR_9 = FUNC_1(&VAR_8->dev);
 unsigned long long VAR_10;
 struct intel_hid_priv *VAR_11;
 acpi_status VAR_12;
 int VAR_13;

 FUNC_14(VAR_9);

 if (!FUNC_13(VAR_9, VAR_6, &VAR_10)) {
  FUNC_8(&VAR_8->dev, "failed to read mode\n");
  return -VAR_2;
 }

 if (VAR_10 != 0) {





  FUNC_6(&VAR_8->dev, "platform is not in simple mode\n");
  return -VAR_2;
 }

 VAR_11 = FUNC_10(&VAR_8->dev, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;
 FUNC_7(&VAR_8->dev, VAR_11);

 VAR_13 = FUNC_15(VAR_8);
 if (VAR_13) {
  FUNC_17("Failed to setup Intel HID hotkeys\n");
  return VAR_13;
 }


 if (FUNC_5(VAR_8)) {
  FUNC_6(&VAR_8->dev, "platform supports 5 button array\n");
  VAR_13 = FUNC_12(VAR_8);
  if (VAR_13)
   FUNC_17("Failed to setup Intel 5 button array hotkeys\n");
 }

 VAR_12 = FUNC_3(VAR_9,
          VAR_0,
          VAR_7,
          VAR_8);
 if (FUNC_0(VAR_12))
  return -VAR_1;

 VAR_13 = FUNC_16(&VAR_8->dev, 1);
 if (VAR_13)
  goto err_remove_notify;

 if (VAR_11->array) {
  unsigned long long VAR_14;

  FUNC_11(&VAR_8->dev, 1);


  if (!FUNC_13(VAR_9, VAR_5,
            &VAR_14)) {
   FUNC_8(&VAR_8->dev,
     "failed to enable HID power button\n");
  }
 }

 FUNC_9(&VAR_8->dev, 1);





 FUNC_2();
 return 0;

err_remove_notify:
 FUNC_4(VAR_9, VAR_0, VAR_7);

 return VAR_13;
}
