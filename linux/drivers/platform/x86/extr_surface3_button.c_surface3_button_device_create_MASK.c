
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct surface3_button_info {int autorepeat; int wakeup; scalar_t__ name; int active_low; int event_code; int event_type; int acpi_index; } ;
struct platform_device {int dummy; } ;
struct i2c_client {int dev; } ;
struct gpio_keys_platform_data {int nbuttons; int rep; struct gpio_keys_button* buttons; } ;
struct gpio_keys_button {int gpio; int wakeup; scalar_t__ desc; int active_low; int code; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct platform_device* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct gpio_keys_platform_data*) ;
 struct gpio_keys_platform_data* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,struct gpio_keys_platform_data*,int) ;
 struct platform_device* FUNC_6 (char*,int ) ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static struct platform_device *
FUNC_9(struct i2c_client *VAR_5,
         const struct surface3_button_info *VAR_6,
         bool VAR_7)
{
 const struct surface3_button_info *VAR_8;
 struct platform_device *VAR_9;
 struct gpio_keys_button *VAR_10;
 struct gpio_keys_platform_data *VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 VAR_11 = FUNC_2(&VAR_5->dev,
           sizeof(*VAR_11) +
           sizeof(*VAR_10) * VAR_3,
           VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_10 = (void *)(VAR_11 + 1);

 for (VAR_8 = VAR_6; VAR_8->name; VAR_8++) {
  if (VAR_8->autorepeat != VAR_7)
   continue;

  VAR_13 = FUNC_8(&VAR_5->dev,
         VAR_8->acpi_index);
  if (!FUNC_3(VAR_13))
   continue;

  VAR_10[VAR_12].type = VAR_8->event_type;
  VAR_10[VAR_12].code = VAR_8->event_code;
  VAR_10[VAR_12].gpio = VAR_13;
  VAR_10[VAR_12].active_low = VAR_8->active_low;
  VAR_10[VAR_12].desc = VAR_8->name;
  VAR_10[VAR_12].wakeup = VAR_8->wakeup;
  VAR_12++;
 }

 if (VAR_12 == 0) {
  VAR_14 = -VAR_0;
  goto err_free_mem;
 }

 VAR_11->buttons = VAR_10;
 VAR_11->nbuttons = VAR_12;
 VAR_11->rep = VAR_7;

 VAR_9 = FUNC_6("gpio-keys", VAR_4);
 if (!VAR_9) {
  VAR_14 = -VAR_1;
  goto err_free_mem;
 }

 VAR_14 = FUNC_5(VAR_9, VAR_11,
      sizeof(*VAR_11));
 if (VAR_14)
  goto err_free_pdev;

 VAR_14 = FUNC_4(VAR_9);
 if (VAR_14)
  goto err_free_pdev;

 return VAR_9;

err_free_pdev:
 FUNC_7(VAR_9);
err_free_mem:
 FUNC_1(&VAR_5->dev, VAR_11);
 return FUNC_0(VAR_14);
}
