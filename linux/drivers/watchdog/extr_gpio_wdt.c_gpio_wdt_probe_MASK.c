
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {unsigned int max_hw_heartbeat_ms; int timeout; struct device* parent; int min_timeout; int * ops; int * info; } ;
struct gpio_wdt_priv {TYPE_1__ wdd; scalar_t__ always_running; int gpiod; int hw_algo; } ;
struct device_node {int dummy; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct device*,int *,int) ;
 struct gpio_wdt_priv* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (struct device_node*,char*) ;
 int FUNC_7 (struct device_node*,char*,char const**) ;
 int FUNC_8 (struct device_node*,char*,unsigned int*) ;
 int FUNC_9 (struct platform_device*,struct gpio_wdt_priv*) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (TYPE_1__*,int ,struct device*) ;
 int FUNC_12 (TYPE_1__*,struct gpio_wdt_priv*) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct device_node *VAR_14 = VAR_13->of_node;
 struct gpio_wdt_priv *VAR_15;
 enum gpiod_flags VAR_16;
 unsigned int VAR_17;
 const char *VAR_18;
 int VAR_19;

 VAR_15 = FUNC_3(VAR_13, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 FUNC_9(VAR_12, VAR_15);

 VAR_19 = FUNC_7(VAR_14, "hw_algo", &VAR_18);
 if (VAR_19)
  return VAR_19;
 if (!FUNC_10(VAR_18, "toggle")) {
  VAR_15->hw_algo = VAR_6;
  VAR_16 = VAR_3;
 } else if (!FUNC_10(VAR_18, "level")) {
  VAR_15->hw_algo = VAR_5;
  VAR_16 = VAR_4;
 } else {
  return -VAR_0;
 }

 VAR_15->gpiod = FUNC_2(VAR_13, ((void*)0), VAR_16);
 if (FUNC_0(VAR_15->gpiod))
  return FUNC_1(VAR_15->gpiod);

 VAR_19 = FUNC_8(VAR_14,
       "hw_margin_ms", &VAR_17);
 if (VAR_19)
  return VAR_19;

 if (VAR_17 < 2 || VAR_17 > 65535)
  return -VAR_0;

 VAR_15->always_running = FUNC_6(VAR_14,
           "always-running");

 FUNC_12(&VAR_15->wdd, VAR_15);

 VAR_15->wdd.info = &VAR_9;
 VAR_15->wdd.ops = &VAR_10;
 VAR_15->wdd.min_timeout = VAR_8;
 VAR_15->wdd.max_hw_heartbeat_ms = VAR_17;
 VAR_15->wdd.parent = VAR_13;
 VAR_15->wdd.timeout = VAR_7;

 FUNC_11(&VAR_15->wdd, 0, VAR_13);
 FUNC_13(&VAR_15->wdd, VAR_11);

 FUNC_14(&VAR_15->wdd);

 if (VAR_15->always_running)
  FUNC_5(&VAR_15->wdd);

 return FUNC_4(VAR_13, &VAR_15->wdd);
}
