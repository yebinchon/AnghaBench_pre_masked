
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
typedef int irq_handler_t ;
struct TYPE_5__ {int * sram; int statf_h; int statne_h; int * irqen; int * irqstat; int * stat2; int * irqsrc; int * stat1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct device*,char*,int,int) ;
 int FUNC_5 (struct device*,char*) ;
 TYPE_1__* FUNC_6 (struct device*,struct resource*) ;
 int FUNC_7 (struct device*,int,int ,int ,char*,int *) ;
 int FUNC_8 (struct platform_device*,int) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_10 (int *) ;
 int* VAR_11 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_12)
{
 int VAR_13, VAR_14;
 irq_handler_t VAR_15, VAR_16;
 struct device *VAR_17 = &VAR_12->dev;
 struct resource *VAR_18;
 int VAR_19, VAR_20;

 VAR_18 = FUNC_9(VAR_12, VAR_2, 0);
 if (!VAR_18)
  return -VAR_1;
 VAR_10 = FUNC_6(VAR_17, VAR_18);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_19 = FUNC_8(VAR_12, 0);
 if (VAR_19 <= 0)
  return VAR_19 ? VAR_19 : -VAR_0;
 VAR_7 = VAR_19;
 VAR_20 = FUNC_8(VAR_12, 1);
 if (VAR_20 <= 0)
  return VAR_20 ? VAR_20 : -VAR_0;
 VAR_8 = VAR_20;


 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  FUNC_2(0x33333333, &VAR_10->stat1[VAR_13]);
  FUNC_2(0, &VAR_10->irqsrc[VAR_13]);
 }
 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  FUNC_2(0, &VAR_10->stat2[VAR_13]);
  FUNC_2(0xFFFFFFFF, &VAR_10->irqstat[VAR_13]);
  FUNC_2(0, &VAR_10->irqen[VAR_13]);
 }

 FUNC_2(0xFFFFFFFF, &VAR_10->statne_h);
 FUNC_2(0, &VAR_10->statf_h);

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
  FUNC_2(0, &VAR_10->sram[VAR_13]);

 if (FUNC_3()) {
  VAR_15 = VAR_5;
  VAR_16 = VAR_6;
 } else
  VAR_15 = VAR_16 = VAR_4;

 VAR_14 = FUNC_7(VAR_17, VAR_19, VAR_15, 0, "IXP4xx Queue Manager",
          ((void*)0));
 if (VAR_14) {
  FUNC_4(VAR_17, "failed to request IRQ%i (%i)\n",
   VAR_19, VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_7(VAR_17, VAR_20, VAR_16, 0, "IXP4xx Queue Manager",
          ((void*)0));
 if (VAR_14) {
  FUNC_4(VAR_17, "failed to request IRQ%i (%i)\n",
   VAR_20, VAR_14);
  return VAR_14;
 }

 VAR_11[0] = 0xF;
 FUNC_10(&VAR_9);

 FUNC_5(VAR_17, "IXP4xx Queue Manager initialized.\n");
 return 0;
}
