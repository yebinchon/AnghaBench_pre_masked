
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {int end; int start; } ;
struct TYPE_4__ {int pretimeout; int min_timeout; int max_timeout; int timeout; int bootstatus; struct device* parent; int * ops; int * info; } ;
struct qcom_wdt {int rate; TYPE_1__ wdd; scalar_t__ const* layout; struct clk* base; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int ,struct clk*) ;
 struct clk* FUNC_6 (struct device*,int *) ;
 struct clk* FUNC_7 (struct device*,struct resource*) ;
 struct qcom_wdt* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int,int ,int ,char*,TYPE_1__*) ;
 int FUNC_10 (struct device*,TYPE_1__*) ;
 int FUNC_11 (int,unsigned int) ;
 scalar_t__* FUNC_12 (struct device*) ;
 scalar_t__ FUNC_13 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct qcom_wdt*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_1__*,int ,struct device*) ;
 int FUNC_19 (struct qcom_wdt*,int ) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_14)
{
 struct device *VAR_15 = &VAR_14->dev;
 struct qcom_wdt *VAR_16;
 struct resource *VAR_17;
 struct device_node *VAR_18 = VAR_15->of_node;
 const u32 *VAR_19;
 u32 VAR_20;
 int VAR_21, VAR_22;
 struct clk *VAR_23;

 VAR_19 = FUNC_12(VAR_15);
 if (!VAR_19) {
  FUNC_4(VAR_15, "Unsupported QCOM WDT module\n");
  return -VAR_1;
 }

 VAR_16 = FUNC_8(VAR_15, sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_2;

 VAR_17 = FUNC_15(VAR_14, VAR_5, 0);
 if (!VAR_17)
  return -VAR_2;


 if (FUNC_13(VAR_18, "cpu-offset", &VAR_20))
  VAR_20 = 0;

 VAR_17->start += VAR_20;
 VAR_17->end += VAR_20;

 VAR_16->base = FUNC_7(VAR_15, VAR_17);
 if (FUNC_0(VAR_16->base))
  return FUNC_1(VAR_16->base);

 VAR_23 = FUNC_6(VAR_15, ((void*)0));
 if (FUNC_0(VAR_23)) {
  FUNC_4(VAR_15, "failed to get input clock\n");
  return FUNC_1(VAR_23);
 }

 VAR_22 = FUNC_3(VAR_23);
 if (VAR_22) {
  FUNC_4(VAR_15, "failed to setup clock\n");
  return VAR_22;
 }
 VAR_22 = FUNC_5(VAR_15, VAR_9, VAR_23);
 if (VAR_22)
  return VAR_22;
 VAR_16->rate = FUNC_2(VAR_23);
 if (VAR_16->rate == 0 ||
     VAR_16->rate > 0x10000000U) {
  FUNC_4(VAR_15, "invalid clock rate\n");
  return -VAR_0;
 }


 VAR_21 = FUNC_14(VAR_14, 0);
 if (VAR_21 > 0) {
  VAR_22 = FUNC_9(VAR_15, VAR_21, VAR_11,
           VAR_6,
           "wdt_bark", &VAR_16->wdd);
  if (VAR_22)
   return VAR_22;

  VAR_16->wdd.info = &VAR_13;
  VAR_16->wdd.pretimeout = 1;
 } else {
  if (VAR_21 == -VAR_3)
   return -VAR_3;

  VAR_16->wdd.info = &VAR_10;
 }

 VAR_16->wdd.ops = &VAR_12;
 VAR_16->wdd.min_timeout = 1;
 VAR_16->wdd.max_timeout = 0x10000000U / VAR_16->rate;
 VAR_16->wdd.parent = VAR_15;
 VAR_16->layout = VAR_19;

 if (FUNC_17(FUNC_19(VAR_16, VAR_8)) & 1)
  VAR_16->wdd.bootstatus = VAR_7;






 VAR_16->wdd.timeout = FUNC_11(VAR_16->wdd.max_timeout, 30U);
 FUNC_18(&VAR_16->wdd, 0, VAR_15);

 VAR_22 = FUNC_10(VAR_15, &VAR_16->wdd);
 if (VAR_22)
  return VAR_22;

 FUNC_16(VAR_14, VAR_16);
 return 0;
}
