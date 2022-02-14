
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videomode {int dummy; } ;
struct gpio_desc {int dummy; } ;
struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int bits_per_pixel; } ;
struct fb_info {int modelist; struct fb_var_screeninfo var; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct atmel_lcdfb_power_ctrl_gpio {int list; struct gpio_desc* gpiod; } ;
struct atmel_lcdfb_pdata {int lcd_wiring_mode; void* lcdcon_pol_negative; void* lcdcon_is_backlight; int atmel_lcdfb_power_control; int pwr_gpios; int default_dmacon; int default_lcdcon2; int guard_time; } ;
struct atmel_lcdfb_info {struct atmel_lcdfb_config* config; TYPE_1__* pdev; struct atmel_lcdfb_pdata pdata; struct fb_info* info; } ;
struct atmel_lcdfb_config {int dummy; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device_node*) ;
 int VAR_6 ;
 int FUNC_3 (struct device*,char*,...) ;
 struct gpio_desc* FUNC_4 (struct device*,char*,int,int ) ;
 struct atmel_lcdfb_power_ctrl_gpio* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct fb_videomode*,int *) ;
 int FUNC_7 (struct videomode*,struct fb_videomode*) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct gpio_desc*,int ) ;
 int FUNC_10 (struct gpio_desc*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (struct device_node*,struct videomode*,int ) ;
 TYPE_2__* FUNC_13 (int ,struct device*) ;
 int FUNC_14 (struct device_node*) ;
 struct device_node* FUNC_15 (struct device_node*,char*,int ) ;
 void* FUNC_16 (struct device_node*,char*) ;
 int FUNC_17 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_18(struct atmel_lcdfb_info *VAR_7)
{
 struct fb_info *VAR_8 = VAR_7->info;
 struct atmel_lcdfb_pdata *VAR_9 = &VAR_7->pdata;
 struct fb_var_screeninfo *VAR_10 = &VAR_8->var;
 struct device *VAR_11 = &VAR_7->pdev->dev;
 struct device_node *VAR_12 =VAR_11->of_node;
 struct device_node *VAR_13;
 struct atmel_lcdfb_power_ctrl_gpio *VAR_14;
 bool VAR_15 = 0;
 struct fb_videomode VAR_16;
 struct gpio_desc *VAR_17;
 struct videomode VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_7->config = (struct atmel_lcdfb_config*)
  FUNC_13(VAR_5, VAR_11)->data;

 VAR_13 = FUNC_15(VAR_12, "display", 0);
 if (!VAR_13) {
  FUNC_3(VAR_11, "failed to find display phandle\n");
  return -VAR_0;
 }

 VAR_19 = FUNC_17(VAR_13, "bits-per-pixel", &VAR_10->bits_per_pixel);
 if (VAR_19 < 0) {
  FUNC_3(VAR_11, "failed to get property bits-per-pixel\n");
  goto put_display_node;
 }

 VAR_19 = FUNC_17(VAR_13, "atmel,guard-time", &VAR_9->guard_time);
 if (VAR_19 < 0) {
  FUNC_3(VAR_11, "failed to get property atmel,guard-time\n");
  goto put_display_node;
 }

 VAR_19 = FUNC_17(VAR_13, "atmel,lcdcon2", &VAR_9->default_lcdcon2);
 if (VAR_19 < 0) {
  FUNC_3(VAR_11, "failed to get property atmel,lcdcon2\n");
  goto put_display_node;
 }

 VAR_19 = FUNC_17(VAR_13, "atmel,dmacon", &VAR_9->default_dmacon);
 if (VAR_19 < 0) {
  FUNC_3(VAR_11, "failed to get property bits-per-pixel\n");
  goto put_display_node;
 }

 FUNC_0(&VAR_9->pwr_gpios);
 VAR_19 = -VAR_1;
 for (VAR_20 = 0; VAR_20 < FUNC_8(VAR_11, "atmel,power-control"); VAR_20++) {
  VAR_17 = FUNC_4(VAR_11, "atmel,power-control",
          VAR_20, VAR_3);
  if (FUNC_1(VAR_17))
   continue;

  VAR_14 = FUNC_5(VAR_11, sizeof(*VAR_14), VAR_2);
  if (!VAR_14)
   goto put_display_node;

  VAR_14->gpiod = VAR_17;
  VAR_15 = 1;

  VAR_19 = FUNC_9(VAR_17, FUNC_10(VAR_17));
  if (VAR_19) {
   FUNC_3(VAR_11, "set direction output gpio atmel,power-control[%d] failed\n", VAR_20);
   goto put_display_node;
  }
  FUNC_11(&VAR_14->list, &VAR_9->pwr_gpios);
 }

 if (VAR_15)
  VAR_9->atmel_lcdfb_power_control = VAR_6;

 VAR_19 = FUNC_2(VAR_13);
 if (VAR_19 < 0) {
  FUNC_3(VAR_11, "invalid atmel,lcd-wiring-mode\n");
  goto put_display_node;
 }
 VAR_9->lcd_wiring_mode = VAR_19;

 VAR_9->lcdcon_is_backlight = FUNC_16(VAR_13, "atmel,lcdcon-backlight");
 VAR_9->lcdcon_pol_negative = FUNC_16(VAR_13, "atmel,lcdcon-backlight-inverted");

 VAR_19 = FUNC_12(VAR_13, &VAR_18, VAR_4);
 if (VAR_19) {
  FUNC_3(VAR_11, "failed to get videomode from DT\n");
  goto put_display_node;
 }

 VAR_19 = FUNC_7(&VAR_18, &VAR_16);
 if (VAR_19 < 0)
  goto put_display_node;

 FUNC_6(&VAR_16, &VAR_8->modelist);

put_display_node:
 FUNC_14(VAR_13);
 return VAR_19;
}
