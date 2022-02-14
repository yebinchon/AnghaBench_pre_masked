
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {struct aspeed_wdt_config* data; } ;
struct device_node {int dummy; } ;
struct aspeed_wdt_config {scalar_t__ ext_pulse_width_mask; } ;
struct TYPE_4__ {int groups; int bootstatus; int status; int timeout; struct device* parent; int max_hw_heartbeat_ms; int * ops; int * info; } ;
struct aspeed_wdt {int ctrl; TYPE_1__ wdd; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_26 ;
 int FUNC_3 (struct device*,char*,scalar_t__) ;
 int FUNC_4 (struct device*,char*,scalar_t__) ;
 int FUNC_5 (struct device*,struct aspeed_wdt*) ;
 struct aspeed_wdt* FUNC_6 (struct device*,int,int ) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct device*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (unsigned int,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (struct device_node*,char*) ;
 struct of_device_id* FUNC_12 (int ,struct device_node*) ;
 scalar_t__ FUNC_13 (struct device_node*,char*) ;
 int FUNC_14 (struct device_node*,char*,char const**) ;
 int FUNC_15 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (char const*,char*) ;
 int FUNC_19 (TYPE_1__*,int ,struct device*) ;
 int FUNC_20 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_27)
{
 struct device *VAR_28 = &VAR_27->dev;
 const struct aspeed_wdt_config *VAR_29;
 const struct of_device_id *VAR_30;
 struct aspeed_wdt *VAR_31;
 struct device_node *VAR_32;
 const char *VAR_33;
 u32 VAR_34;
 u32 VAR_35;
 int VAR_36;

 VAR_31 = FUNC_6(VAR_28, sizeof(*VAR_31), VAR_2);
 if (!VAR_31)
  return -VAR_1;

 VAR_31->base = FUNC_7(VAR_27, 0);
 if (FUNC_0(VAR_31->base))
  return FUNC_1(VAR_31->base);






 VAR_31->wdd.info = &VAR_23;
 VAR_31->wdd.ops = &VAR_25;
 VAR_31->wdd.max_hw_heartbeat_ms = VAR_17;
 VAR_31->wdd.parent = VAR_28;

 VAR_31->wdd.timeout = VAR_16;
 FUNC_19(&VAR_31->wdd, 0, VAR_28);

 VAR_32 = VAR_28->of_node;

 VAR_30 = FUNC_12(VAR_24, VAR_32);
 if (!VAR_30)
  return -VAR_0;
 VAR_29 = VAR_30->data;

 VAR_31->ctrl = VAR_8;





 VAR_36 = FUNC_14(VAR_32, "aspeed,reset-type", &VAR_33);
 if (VAR_36) {
  VAR_31->ctrl |= VAR_13 | VAR_14;
 } else {
  if (!FUNC_18(VAR_33, "cpu"))
   VAR_31->ctrl |= VAR_11 |
         VAR_14;
  else if (!FUNC_18(VAR_33, "soc"))
   VAR_31->ctrl |= VAR_13 |
         VAR_14;
  else if (!FUNC_18(VAR_33, "system"))
   VAR_31->ctrl |= VAR_12 |
         VAR_14;
  else if (FUNC_18(VAR_33, "none"))
   return -VAR_0;
 }
 if (FUNC_13(VAR_32, "aspeed,external-signal"))
  VAR_31->ctrl |= VAR_15;
 if (FUNC_13(VAR_32, "aspeed,alt-boot"))
  VAR_31->ctrl |= VAR_9;

 if (FUNC_16(VAR_31->base + VAR_7) & VAR_10) {






  FUNC_2(&VAR_31->wdd);
  FUNC_17(VAR_4, &VAR_31->wdd.status);
 }

 if ((FUNC_11(VAR_32, "aspeed,ast2500-wdt")) ||
  (FUNC_11(VAR_32, "aspeed,ast2600-wdt"))) {
  u32 VAR_37 = FUNC_16(VAR_31->base + VAR_20);

  VAR_37 &= VAR_29->ext_pulse_width_mask;
  if (FUNC_13(VAR_32, "aspeed,ext-push-pull"))
   VAR_37 |= VAR_19;
  else
   VAR_37 |= VAR_18;

  FUNC_20(VAR_37, VAR_31->base + VAR_20);

  VAR_37 &= VAR_29->ext_pulse_width_mask;
  if (FUNC_13(VAR_32, "aspeed,ext-active-high"))
   VAR_37 |= VAR_5;
  else
   VAR_37 |= VAR_6;

  FUNC_20(VAR_37, VAR_31->base + VAR_20);
 }

 if (!FUNC_15(VAR_32, "aspeed,ext-pulse-duration", &VAR_34)) {
  u32 VAR_38 = VAR_29->ext_pulse_width_mask + 1;

  if (VAR_34 == 0 || VAR_34 > VAR_38) {
   FUNC_3(VAR_28, "Invalid pulse duration: %uus\n",
    VAR_34);
   VAR_34 = FUNC_9(1U, FUNC_10(VAR_38, VAR_34));
   FUNC_4(VAR_28, "Pulse duration set to %uus\n",
     VAR_34);
  }
  FUNC_20(VAR_34 - 1, VAR_31->base + VAR_20);
 }

 VAR_35 = FUNC_16(VAR_31->base + VAR_21);
 if (VAR_35 & VAR_22) {
  VAR_31->wdd.bootstatus = VAR_3;

  if (FUNC_11(VAR_32, "aspeed,ast2400-wdt") ||
      FUNC_11(VAR_32, "aspeed,ast2500-wdt"))
   VAR_31->wdd.groups = VAR_26;
 }

 FUNC_5(VAR_28, VAR_31);

 return FUNC_8(VAR_28, &VAR_31->wdd);
}
