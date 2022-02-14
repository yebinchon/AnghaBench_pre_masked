
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_syscon {unsigned int mask; int reg; int map; } ;
struct stm32_rproc {unsigned int secured_soc; struct stm32_syscon pdds; struct stm32_syscon hold_boot; int rst; } ;
struct device {struct device_node* of_node; } ;
struct rproc {int auto_boot; struct device dev; struct stm32_rproc* priv; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,int,int ,int ,int ,struct rproc*) ;
 int FUNC_7 (struct device*,int ) ;
 int FUNC_8 (struct device_node*,char*) ;
 struct rproc* FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (int ,int ,unsigned int*) ;
 int FUNC_12 (struct device_node*,char*,struct stm32_syscon*) ;
 int FUNC_13 (struct rproc*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct device_node *VAR_4 = VAR_3->of_node;
 struct rproc *VAR_5 = FUNC_9(VAR_2);
 struct stm32_rproc *VAR_6 = VAR_5->priv;
 struct stm32_syscon VAR_7;
 unsigned int VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_10(VAR_2, 0);
 if (VAR_10 == -VAR_0)
  return -VAR_0;

 if (VAR_10 > 0) {
  VAR_9 = FUNC_6(VAR_3, VAR_10, VAR_1, 0,
           FUNC_4(VAR_3), VAR_5);
  if (VAR_9) {
   FUNC_2(VAR_3, "failed to request wdg irq\n");
   return VAR_9;
  }

  FUNC_3(VAR_3, "wdg irq registered\n");
 }

 VAR_6->rst = FUNC_7(VAR_3, 0);
 if (FUNC_0(VAR_6->rst)) {
  FUNC_2(VAR_3, "failed to get mcu reset\n");
  return FUNC_1(VAR_6->rst);
 }






 VAR_9 = FUNC_12(VAR_4, "st,syscfg-tz", &VAR_7);
 if (VAR_9) {
  FUNC_2(VAR_3, "failed to get tz syscfg\n");
  return VAR_9;
 }

 VAR_9 = FUNC_11(VAR_7.map, VAR_7.reg, &VAR_8);
 if (VAR_9) {
  FUNC_2(&VAR_5->dev, "failed to read tzen\n");
  return VAR_9;
 }
 VAR_6->secured_soc = VAR_8 & VAR_7.mask;

 VAR_9 = FUNC_12(VAR_4, "st,syscfg-holdboot",
         &VAR_6->hold_boot);
 if (VAR_9) {
  FUNC_2(VAR_3, "failed to get hold boot\n");
  return VAR_9;
 }

 VAR_9 = FUNC_12(VAR_4, "st,syscfg-pdds", &VAR_6->pdds);
 if (VAR_9)
  FUNC_5(VAR_3, "failed to get pdds\n");

 VAR_5->auto_boot = FUNC_8(VAR_4, "st,auto-boot");

 return FUNC_13(VAR_5);
}
